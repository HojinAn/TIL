# 멋쟁이사자처럼 프론트엔드스쿨 w/ 제주코딩베이스캠프

## 오전(09:00~11:50) 수업 w/ Licat

### morning break

- 이력서 담당자들이 우리의 이력서를 보는 시간? 해봤자 1분? 임팩트를 그만큼 줘야할 것
구체적으로 적을 수 있는 수치를 만들어나가자
1일 1커밋과 같은,
- 장기전으로 생각하자!!
- 이력서 계속 넣어라 넋놓고 수업만 듣지 말고 다음 단계를 준비해라
- 생각보다 실력보다는 소프트스킬을 더 보는 곳도 있다.

### **forEach, for in, for of**

- forEach는 Array 각 요소마다 callback된 함수 실행
- for of는 Python에서의 for in과 같이 array 요소 순회
- for of 사용법

```jsx
let array = [10, 20, 30, 40, 50];
let result = 0;
for (let value of array) {
    result+=value;
}
console.log(result/array.length);// 30
```

- for in은 인덱스값 출력 / for of는 값을 출력
- for in 사용법

```jsx
for (let value in array) {
    console.log(array[value]);
}
// 10 20 30 40 50
```

- while, do while
- 구구단

```jsx
for (var i = 2; i < 10; i++) {
  for (var j = 1; j < 10; j++) {
    document.write(`${i} X ${j} = ${i*j} <br>`);
  }
}

let i = 2;
let j;
while ( i < 10 ) {
    j = 1;
    while ( j < 10 ) {
        document.write(`${i} X ${j} = ${i*j} <br>`);
        j++;
    }
    i++;
}
```

- 1을 더하고 싶다면 i+=1보다는 i++ 이런 식이 낫다. 2를 더한다면 모르겠는데 
+= → 이거는 할당 연산이 들어가니까
i++ 이런식으로 적는게 가독성에도 좋다.
- scope를 배우면 반복문 안에서 변수 선언해주는 것에 있어서
- break은 나를 감싸고 있는 while과 같은 반복문 한단계만 벗어난다.
- 알고리즘 문제를 풀다보면 한번에 안풀리는 경우 while 반복되는 것들을 다 적어보고 묶어보는 작업을 해봐도 좋다.

```jsx
// https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Statements/label
// outer라는 식별자가 붙은 레이블 for 문
// 현업에서는 객체와 햇갈려서 잘 안쓰는 편
// 할꺼면 function으로.
outer: for (var i = 2; i < 10; i++) {
    for (var j = 1; j < 10; j++) {
        // i + j === 3이면 outer라는 식별자가 붙은 레이블 for 문을 탈출한다.
        if (i === 5) break outer;
        console.log(`${i} X ${j} = ${i*j}`);
    }
}
```

→ label statement

[https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Statements/label](https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Statements/label)

- indexOf, search
찾고자 하는 문자열 반환

```jsx
const s = 'abcdeABCDE';
// 해당 문자열의 시작 index를 반환
s.indexOf('cde'); // 2
s.search('ABC'); // 5
//없는 문자열은 -1 반환
s.indexOf('G'); // -1
s.search('G'); // -1
```

- indexOf와 search의 차이
→ [https://stackoverflow.com/questions/354110/what-is-the-difference-between-indexof-and-search](https://stackoverflow.com/questions/354110/what-is-the-difference-between-indexof-and-search)
- indexOf MDN [https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Global_Objects/String/indexOf](https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Global_Objects/String/indexOf)
- search MDN [https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Global_Objects/String/search](https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Global_Objects/String/search)
- Array.slice(begin, end) end index 전까지 잘라낸다.

```jsx
const s = 'abcdefABCDEF';
s.slice(0, 3); // 'abc'
```

- substr(begin, length)
- substring과 slice의 차이?
[https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Global_Objects/String/substring](https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Global_Objects/String/substring)
→ 아예 mdn에 적혀 있는데, 미묘한 약간의 차이들이 존재. substring은 약간 개떡같이 말해도 찰떡같이 알아먹는 느낌..? slice는 딱 말한대로 알아먹는 느낌
- js에서 list[-1]을 구현하고 싶으시다면 list.slice(-1)[0] 로 구현
- 

## 오후(13:00~18:00) 수업 w/ Licat

### **막간 FAQ**

1. 프로그래밍은 누구나 할 수 있나? Yes
2. (돈을 받고 일을 하는) 프로그래머는 누구나 될수 있나? No
3. 프로그래밍은 쉽다? No
4. 10년동안 변하지 않는 비율 HTML, CSS(90%), JS(절반) → 남은 사람 절반은 된다고~~!!
5. 꾸준히하면 익숙해진다. 익숙해질 시간이 필요하다. 성장하는 단계, comfort zone을 벗어나기에 매우 아픈 시간. 그러나 이 아픈 시간은 매일 지속되지 않는다.
6. 쉬운 내용만을 할수는 없다.
7. 같이 공감도 하고 속도조절 부연설명 대안 만들기도 가능. 같이 이겨내보자
8. 공부 방법
[https://perfectacle.github.io/2017/08/08/js-how-to-learn/#HTML-CSS의-연장선-상으로-자바스크립트를-바라보지-말자](https://perfectacle.github.io/2017/08/08/js-how-to-learn/#HTML-CSS%EC%9D%98-%EC%97%B0%EC%9E%A5%EC%84%A0-%EC%83%81%EC%9C%BC%EB%A1%9C-%EC%9E%90%EB%B0%94%EC%8A%A4%ED%81%AC%EB%A6%BD%ED%8A%B8%EB%A5%BC-%EB%B0%94%EB%9D%BC%EB%B3%B4%EC%A7%80-%EB%A7%90%EC%9E%90)
[https://boycoding.tistory.com/1](https://boycoding.tistory.com/1)
[https://htmlcheatsheet.com/js/](https://htmlcheatsheet.com/js/)
9. JS 유인동님 강의 좋다! 노드는 드림엘리님 좋은 듯
10. 암튼 좌절 금지

### **수업**

용어정리부터 다시

**변수(type)**

```jsx
변수(타입)
- Array(배열) 
  * 형태 : ['하나', '둘', '셋'], [100, 200, 300],
  * 호출 : 변수명, 변수명[0], 변수명[0][0] (변수명[index])
- String(문자열)
  * 형태 : 'abcde', "abcde", `abcde`
  * 호출 : 변수명, 변수명[0] (변수명[index])
- Number(숫자)
  * 형태 : 10, 10.123
  * 호출 : 변수명
- Boolean(논리값)
  * 형태 : true, false
  * 호출 : 변수명
- Object(객체)
  * 형태 : {
              "지역이름": "전국",
              "확진자수": 24889,
              "격리해제수": 23030,
              "사망자수": 438,
              "십만명당발생율": 48.0
            }
  * 호출 : 변수명, 변수명.지역이름, 변수명['지역이름'] (변수명.key, 변수명[key])
- undefined : undefined
- null : object
- NaN : number
```

**연산자**

```jsx
// 산술연산(+,-,/,*,**,%)
// 논리연산(!, &&, ||)
// 비교연산(==, !=, >, >=, <, <=, ===, !==)
// 조건문(if, else if, else, switch)
// 반복문(for, for in, for of, while, do while, forEach, break, continue)

for (let i = 0; i < 10; i++) {
    console.log(i) // 0~9까지 출력
}

let a = [10, 20, 30, 40];
for (let i of a) {
    console.log(i); // 10 20 30 40 출력
}

let a = [10, 20, 30, 40];
for (let i in a) {
    console.log(i); // 0 1 2 3 출력
}

let x = 0;
while (x < 10) {
    console.log(x); // 0~9출력
    x++;
}

let x = 0;
do {
    console.log(x); // 0~9출력
    x++;
} while (x < 10)

let a = [10, 20, 30, 40];
a.forEach(e => console.log(e)); // 10 20 30 40 출력

for (let i = 0; i < 10; i++) {
    if (i == 5) break;
    console.log(i);
}// 0~4 출력후 break

for (let i = 0; i < 10; i++) {
    if (i == 5) continue;
    console.log(i);
} // 0~4출력 5 건너뛰고 6~9출력
```

**함수**

```jsx
// 함수
// 여기서 x, y를 보통 한국에서는 인자
// 전달인자(아규먼트, argument) : 3, 5
// 매개변수(파라미터, parameter) : x, y
function add(x, y){
    return x + y;
}
add(3, 5)

- 콜백함수
function add(x, y) {
    return x + y;
}
function mul(x, y) {
    return x * y;
}
function cal(a, b){
    return a(10, 10) + b(10, 10);
}
cal(add, mul);

- 화살표함수
function add(x, y) {
    return x + y
}
let addArrow = (x, y) => x + y;
- 익명함수 아님
// 기명 함수
let aa = function sum(x, y) {
    return x + y
}

// 익명 함수인것 같지만 바뀜
let bb = function(x, y) {
    return x + y
}
// ES5에서는 빈 문자열이었는데 ES6에서 name 값을 가지는 것으로 바뀌었습니다.
let cc = (x, y) => x + y;
```

**선언 및 기타**

```jsx
선언
let x : 변수로 사용
var x (전역에서 사용할 변수값, 실무에서 되도록 사용X)
const x (변하지 않는 상수값)

전개표현식 사용

let arr = [3, 5, 1];
let arr2 = [8, 9, 15];

let merged = [0, ...arr, 2, ...arr2];

블록스코프
// https://velog.io/@fromzoo/%ED%95%A8%EC%88%98%EC%8A%A4%EC%BD%94%ED%94%84-vs-%EB%B8%94%EB%A1%9D%EC%8A%A4%EC%BD%94%ED%94%84
hojun이 not defined 되었다고 나옵니다.
if (true){
    let hojun = 100;
}

console.log(hojun);

prompt('hello?')
'hi'
confirm('hi') // 팝업창 확인을 누르면 true, 취소 누르면 false를 반환
true
alert('hello')
undefined
```

**이하 개인 필기**

- array([ ])안에 object({})가 들어가 있는 형태를 json이라고 한다.
- 나름 for 정리
for는 정해진 조건에 맞게 순회
forEach는 Array 각 요소마다 callback된 함수 실행
for of는 array 요소 순회
for in은 각 요소 인덱스값으로 순회
- continue는 loop 안에서 아래코드 스킵하고 다음 loop로 넘어간다.

```
const sum = function(a, b) {
  return a + b
}
```

vs

```
const sum = (a, b) => (a + b)
```

- 인자(argument) vs 매개변수(parameter)
인자: 값(ex. 3, 5와 같은 구체적인 숫자)
매개변수: 변수(x와 같이 함수 선언에서의 변수 variable)
- `let c = console.log` 이렇게 써주면 c('hello world')로 써줘도 출력이 된다! 어차피 c라는 변수가 함수를 가리키게 한 것이니까
- DOM은 문서를 찍어낼 수 있는 프린트 공장이다.
[https://youtu.be/1ojA5mLWts8](https://youtu.be/1ojA5mLWts8)
- DOM, BOM은 수업때 가서 이해하는 것으로
- JS보다 정규표현식이 더 어렵다. 정복할 생각을 말자
정규표현식은 필수다..!!
- 엄격 모드
[https://ko.javascript.info/strict-mode](https://ko.javascript.info/strict-mode)
→ JS를 엄격하게 사용하기 위해 최상단에 사용 호환성 이슈로 인한 문제

연습문제

문자열 뒤집기 문제

```jsx
let s = 'hello world';
let temp = '';
for (let i = 0; i < s.length; i++) {
    temp = s[i] + temp;
}
```

String의 평균 구하기 문제

```jsx
const str1 = '5, 4, 10, 2, 5';
const arr1 = str1.split(', ');
let result = 0;
for (value of arr1) {
    result += value;
}
console.log(result/arr1.length);
```

Array로 표현된 숫자들의 평균과 분산 구하기

```jsx
// 분산 => (각 값 - 평균) **2
const arr1 = [10, 20, 30, 10, 20, 30, 40, 10];

let temp = 0;
for (value of arr1) {
    temp += value;
}
const avg = temp/arr1.length;
let disp = 0;
for (val of arr1) {
    disp += (val - avg)**2;
}

console.log(disp/arr1.length);
```

다음 array의 각 자리수의 합을 구하세요.

```jsx
// hint 문자열로 변환해서 풀어주세요!
const arr1 = [11, 22, 33, 111, 2];
// 1+1, 2+2, 3+3, 1+1+1, 2
// 2, 4, 6, 3, 2
// 정답 : 17

const str_arr = arr1.map( item => {
    return item + '';
});
let str2 = str_arr.join('');

let result = 0;
for ( val of str2 ) {
    result += parseInt(val, 10);
}

console.log(result);
```