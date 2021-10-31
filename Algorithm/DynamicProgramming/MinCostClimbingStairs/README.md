# MinCostClimbingStairs(최소비용으로 계단 오르기)

[참고 링크](https://youtu.be/EKHFu9vB-Oc) 유튜브 엔지니어대한민국

> 주어지는 array는 계단.  
> 한번에 오를 수 있는 계단의 수는 1 or 2다.  
> 각 계단에는 밟을 때마다 지불해야 하는 cost가 적혀 있다.  
> 계단을 전부 오를 때 지출할 수 있는 최소의 cost를 구하는 문제.  

### 해법

마지막 2개의 계단 중 하나는 밟을 수 밖에 없다.
case2에 last stair의 cost를, case1에 2nd_to last_stair의 cost를 할당  
3rd_to_last stair(현재 포인터)에서 갈 수 있는 계단(last or 2nd_to_last)의 cost는 각각 case1 or case2다. 둘 중 작은 것을 포인터가 위치하고 있는 계단 즉, 마지막에서 3번째 계단의 cost와 더 해서 현재 최소 cost를 의미하는 currentMinCost에 저장.  
이렇게 되면 currentMinCost는 현재 위치 3rd_to_last에서 계단을 끝까지 오를 수 있는 최소 cost가 된다.
앞으로 다시 한 계단 이동해서 똑같이 수행. (결국 재귀 같네?)  
현재 포인터에서 2칸 멀리있던 case2는 현재 포인터 앞 계단 기준에서 2칸 멀리있던 case1이 되고(case2=case1) 앞 계단 기준 1칸 멀리라는 뜻을 가진 case1은 currentMinCost가 된다.(case1=currentMinCost)  
최종적으로 맨 앞 두칸 각각이 자신만의 currentMinCost를 가질 것이고 둘 중 작은 것을 반환하면 그게 답!

> 설명이 뭐 이렇게 장황하니... 쩝

```javascript
function minCostClimbingStairs(stairs) {
  let case1 = 0;
  let case2 = 0;
  for (let i = stairs.length - 1; i >= 0; --i) {
    currentMinCost = stairs[i] + Math.min(case1, case2);
    case2 = case1;
    case1 = currentMinCost;
  }
  let result = Math.min(case1, case2);
  return result;
}
```
