다음 소스 코드를 완성하여 날짜와 시간을 출력하시오.

```jsx
**데이터**
var year = '2019';
var month = '04';
var day = '26';
var hour = '11';
var minute = '34';
var second = '27';

var result = //빈칸을 채워주세요

console.log(result);

**출력**
2019/04/26 11:34:27
```


### solution  

concat() 메서드는 array, string type에 각각 존재한다. 예상하기로는 string이 문자'열'이긴 하지만 완전히 배열과 같지는 않다. 하지만 비슷한 부분이 있기에 같은 method를 준 것 같다.  
array의 method는 다른 문제에서 정리해보고 string의 concat method를 정리해보자.  

[string concat()](https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Global_Objects/String/concat)  

concat() method는 (전달된) 문자열 인자(string argument)를 (method를) 호출한 문자열(calling string)에 사슬 같이 잇는다(concatenate). 그리고 새로운 문자열(new string)을 반환한다. 사슬 같이 이어주기 때문에 문자열을 계속해서 이어붙여줄 수 있다. 

`str.concat(string2, string3, ... string n)`과 같이 사용한다.

```jsx
var year = '2019';
var month = '04';
var day = '26';
var hour = '11';
var minute = '34';
var second = '27';

var result = year.concat('/', month, '/', day, ' ', hour, ':', minute, ':', second);
console.log(result); // 2019/04/26 11:34:27
```

여담으로 아마도 concat이라는 단어는 concatenate{사슬 같이 잇다.}라는 단어를 줄여 쓴것 같다.