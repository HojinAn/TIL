입출력

입력 : 3
출력 : 짝

입력 : 2
출력 : 2

### solution

```jsx
const n = prompt();

if (n%3 === 0) {
    console.log('짝');
} else {
    console.log(n);
}