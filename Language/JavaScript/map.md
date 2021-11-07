# map method

https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Global_Objects/Array/map

> arr.map(callback(currentValue[, index[, array]])[, thisArg])

callback은 뭘까
***
JS callback 검색

https://developer.mozilla.org/en-US/docs/Glossary/Callback_function

```javascript 
function greeting(name) {
  alert('Hello ' + name);
}

function UserInput(callback) {
  var name = prompt('Please enter your name.');
  callback(name);
}

UserInput(greeting);
``` 

음... prompt 함수는 또 뭘까
***
https://developer.mozilla.org/ko/docs/Web/API/Window/prompt

window 창 등에 '사용자'가 '텍스트'를 입력할 수 있도록 안내하는 대화상자를 띄우는 함수
***

오케이 여기부터 거꾸로 올라가보자
```javascript
function greeting(name) {
  alert('Hello ' + name);
}

function UserInput(callback) {
  var name = prompt('Please enter your name.');
  callback(name);
}

UserInput(greeting);
```
아.. 사실 propmt 함수는 그리 critical한 것은 아니었네 암튼

이제 callback 정의를 번역해보자

> A callback function is a function passed into another function as an argument, which is then invoked inside the outer function to complete some kind of routine or action.

callback 함수(function)는 다른 함수 _(another function, 위 예제에서는 UserInput())_ 에게 인자(argument)로 전해지는(pass into) 함수이며, 외부 함수 _(outer function, 위 예제에서는 역시 UserInput())_ 안에서 발동(호출)된다. 어떤 루틴(routine)이나 행동(action)을 완료하기 위해서.


아마 callback은 따로 선언해서 사용하는 function이라기보다는(물론 library에서는 정의가 되어있겠지?) 특정 function이 매개변수(parameter)로 다른 function에 들어가 작동할 수 있도록 해주는 역할인 듯하다.

그러면 지금 이 JS 코드는 UserInput 함수를 실행할 때 greeting이라는 함수를 callback 함수 인자로 받았고 prompt로 name에 사용자의 이름 등을 입력 받으면 callback 함수 인자(greeting)가 입력된 name을 가지고 가서 자신의 함수를 실행해서 alert() 호출을 통해 'Hello [사용자이름]' 이렇게 경고창이 뜰 것이다!

오케이 드디어 map 메소드로 넘어오자
 
```javascript
//한국어 판 구문 [] 내부는 optional 인자들
arr.map(callback(currentValue[, index[, array]])[, thisArg])
```
> The map() method creates a new array populated with the results of calling a provided function on every element in the calling array.

번역 귀찮아.. 파파고를 돌렸더니 

> map() 메서드는 호출 배열의 모든 요소에 제공된 함수를 호출한 결과로 채워진 새 배열을 만듭니다.

중요한 것은 <U>새 배열을 만든다!</U>(creates a new array) 달리 말해 map을 호출한 array는 그대로 남아 있는 것.

오케이

다시 번역해보자

사실 calling array라는 것이 뭔지 잘 와닿지는 않는데... 문맥을 보아하니 아마 map을 호출한 array를 말하는 듯하다.

 

다시 내 말로 바꿔보면

> map() 메서드는 호출함수(map을 호출한, 예시에서는 arr)에 있는 모든 요소(구문에서는 arr의 every element)에 제공(적용? 사용?)되는 함수(구문에서는 callback 인자를 통해 인자로 map 함수에서 사용되는 특정 function)를 호출(calling)한 결과로 채워진 새 배열을 만든다.
정도가 되겠다.

 

중요한 것은!

1. 새로운 배열을 만든다.

2. 기존 배열의 모든 요소마다 함수를 실행시킨다.

 

어휴 말도 어렵다. 그런데 calling array의 정체가 나름 분명해지니까 무슨 말인지는 알겠다.
```javascript
// English ver. Syntax

// Arrow function
map((element) => { ... })
map((element, index) => { ... })
map((element, index, array) => { ... })

// Callback function
map(callbackFn)
map(callbackFn, thisArg)

// Inline callback function
map(function(element) { ... })
map(function(element, index) { ... })
map(function(element, index, array){ ... })
map(function(element, index, array) { ... }, thisArg)
```
정리하면

map은 인자(argument)로 (array 모든 요소들에 적용? 사용? 호출? 될 ) 특정 함수와 thisArg 즉, 별 말 없으면 그냥 array 자신 자체를 인자로 받아오는 듯 하다.

map의 argument로 들어간 function은 array의 모든 element, element의 array 내 주소(index), 호출하는 array를 인자로 갖는다.

 

좋다.

 

그럼 간단하게 예시를 생각해보자
```javascript
// array의 각 int element를 str 화
const numberArray = [1, 2, 3, 4, 5];
const strNumberArray = numberArray.map(number => number.toString());
console.log(strNumberArray);
// 출력 : ['1', '2', '3', '4', '5']

// array의 각 str element를 int 화
const strArray = ['1', '2', '3', '4', '5'];
const numberList = strArray.map(i => parseInt(i));
console.log(numberList);
// 출력 : [1, 2, 3, 4, 5]
```
=> arraow function은 Python에서 lambda와 비슷한 역할을 해준다고 해서 감으로 적어봤더니 옳게 실행이 됐다! 후후