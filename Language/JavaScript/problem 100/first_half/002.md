## **prob. 002**  
\<pass\>부분에 <U>배열 내장함수</U>를 이용하여 코드를 입력하고 다음과 같이 출력되게 하세요.  

```jsx
//데이터
var arr = [200, 100, 300];
//pass
console.log(arr);

//출력
[200, 100, 10000, 300]
```

### 해설  
[splice()](https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Global_Objects/Array/splice) 이용  
splice() 배열(array)의 기존 요소(existing element)를 <U>**1. 삭제 or 2. 교체 or 3. 새 요소(new element)를 추가**</U>하여 배열의 내용을 변경  
splice는 [<U>1개의 매개변수(parameter)를 필수</U>](#1.-첫번째-매개변수)로 입력받고 / [2개](#2.-두번째-매개변수) / [3개 이상](#3.-세번째-매개변수-이후) 다른 수행을 한다.  

`array.splice(start, deleteCount, item1, item2,...)`  

**매개변수**

1. 첫번째 매개변수: start  
    array의 변경을 시작할 인덱스 값을 start에 입력(추가적인 내용은 mdn 참고 추후 정리)  
2. 두번째 매개변수: deleteCount `Optional`(선택사항)  
    제거할 요소의 갯수. 두번째 매개변수를 생략하거나 가능한 길이보다 큰 값을 넣어주면 start 이후 모든 요소 삭제. 0을 넣어주면 삭제하는 값없이 뒤의 item들을 추가만 한다.  
3. 세번째 매개변수 이후: item1, 2,.. `Optional`(선택사항)  
    array에 추가할 요소. 아무것도 입력하지 않으면 제거만 한다.

### 풀이
```jsx
//데이터
var arr = [200, 100, 300];
arr.splice(2, 0, 1000);
// 2번 index에서 0개 삭제하고 해당 index에 1000 추가
console.log(arr);

//출력 [200, 100, 10000, 300]
