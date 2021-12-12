입출력

입력 : 20 30 40
출력 : 30

전체 평균 점수 구하고 소숫점 모두 버린다.

### solution
```jsx
const scores = prompt().split(' '); // split에 의해 prompt로 받아온 값이 array로 scores에 할당
let avg = 0;
for ( let score of scores ) {
    avg += parseInt(score, 10);
}
avg = Math.floor(avg / scores.length);
console.log(avg);
