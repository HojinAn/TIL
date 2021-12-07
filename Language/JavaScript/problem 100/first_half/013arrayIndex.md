수성, 금성, 지구, 화성, 목성, 토성, 천왕성, 해왕성
입출력

입력 : 1
출력 : 수성

### solution

행성들 모두를 array에 넣어주고 index로 출력
```jsx
const planets = ['수성', '금성', '지구', '화성', '목성', '토성', '천왕성', '해왕성'];

const n = prompt();

console.log(planets[n-1]);
```