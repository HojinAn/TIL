입출력

입력 : 거꾸로
출력 : 로꾸거

### solution
```jsx
const str = prompt();
let result = '';
for (let i = str.length; i>0; i--) {
    result += str[i-1];
}
console.log(result);
```

강의안 해설
```jsx
const reverseString = str.split('').reverse().join('');
/*
split() method는 string을 array로 return,
reverse() method는 array 순서를 반전,
join() method는 element들을 모두 붙여서 string으로 return
*/