입출력

입력 : 10 2
출력 : 5 0

### solution
```jsx
const n = prompt().split(' ');
const quotient = Math.floor(parseInt(n[0], 10) / parseInt(n[1], 10));
const remainder = parseInt(n[0], 10) % parseInt(n[1], 10);
console.log(quotient, remainder);
```