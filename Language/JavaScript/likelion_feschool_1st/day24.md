# 멋쟁이사자처럼 프론트엔드스쿨 24일차 w/ 제주코딩베이스캠프

---

## 오전(09:00~11:50) 수업 w/ Licat

**morning break**

- 문의 너무 많아 물리적으로 불가 ㅠㅠ
- JS 이해도 부족한데 진도를 따라가는게 맞을지?
→ 주말동안 복습해서 메꾸고, 자주보면 익숙해지니까. 이 진도는 따라오고 봐야한다.
수업을 멈추고 기초를 쌓으라는 말은 좀 아닌 것 같다. 어떻게든 따라가려는 것이 상향평준화의 길
넋놓고 봐도 보긴 봐야한다.
언어는 금방 익숙해지지 않는다.
BE를 뒤에서 경험해보고, BE를 한다면 한국에서는 꼭 거쳐야햐는 과정이 있다. → JAVA-Spring
Node 개발자로 취업 후 JAVA-Spring으로 가자

**수업**

- 최신 문법을 알려주고 있는데, 하루에 수만명 들어오는 서비스를 급하게 개발할 때 최신문법을 쓸 수가 없다...
실제로 코로나 맵 개발하실 때도 let, const, for of, for in 을 다 걷어냈다...(!)
- 호이스팅
- var, let, const
let에서도 hoisting은 발생

```jsx
// JS의 모든 선언은 호이스팅(선언이 먼저 메모리에 저장)이 일어납니다.
// 그러나 let, const, class 이용한 선언문은 호이스팅이 되었지만 안된 것처럼 동작
// 이러한 현상은 일시적 사각지대(Temporal Dead Zone)에 빠지기 때문
// 중요한 포인트는 그렇다하여 호이스팅이 안된 것은 아니라는 것!
// 오류가 나는 이유는 var 키워드는 선언과 함께 undefined로 초기화
// let과 const는 초기화 되지 않는 상태로 선언만 메모리 저장
console.log(add1(10, 20)); // 30
console.log(add2(10, 20)); // 30
console.log(mul1) // undefined
// console.log(mul1(10, 20)); // not a function
// console.log(mul2); // Cannot access 'mul2' before initialization
// console.log(mul2(10, 20)); // 위와 같은 애러
console.log(mul3) // mul3 is not defined, 호이스팅이 안되었기 때문

function add1(x, y) {
  return x + y;
}

function add2(x, y) {
  return x + y;
}

var mul1 = function (a, b) {
  return a * b;
}

let mul2 = function (a, b) {
  return a * b;
}
```

- 재귀함수(recursion)
→ 특수한 경우 아니고는 잘 안쓴다. 실무에서는 비추
DP등이 쓰이는 것? 내비게이션

```jsx
// recursion example function
function factorials(n) {
    if ( n <= 1 ) {
        return n
    }
    return n * factorials(n-1)
}

// 이하 주석처럼 풀어서 작성하고 사고할 수 있는가!!
// factorial(5) == 5 * factorial(4) == 5 * 24
// factorial(4) == 4 * factorial(3) == 4 * 6
// factorial(3) == 3 * factorial(2) == 3 * 2
// factorial(2) == 2 * factorial(1) == 2 * 1
// factorial(1) == 1
```

**재귀함수**  

1. 종료조건 체크
2. 반복문으로 구현할 수 있는 것은 재귀함수로 모두 구현 가능, 재귀함수로 구현 가능한 것은 반복문으로 대부분 구현(복잡도를 증가시키면 모두) 가능
- 재귀함수는 메모리 적재되어 있다가 순차적으로 실행
- 교수의 역할 → 풀어 설명해주는 것, 에러를 잡아주는 것
- 재귀함수를 볼 때는 내려갔다가 올라오자 → stack과 heap에서 살펴 볼 것임
- 브라우저 어디에서든 동작하는 코드인지도 확인하기
- 기존에 잘 알려져 있는 에러가 없는 정렬 코드. 이런 것들을 쌓아두고 필요할 때 꺼내 쓰는 것
- 외부로 공개 되어 있는 코드라면 그대로 가져다 쓰자.
- 재귀 함수는 다 써보고 다시 거꾸로 올라가면서 확인하는 것이 큰 도움
- String reverse도 recursion으로 가능

```jsx
function reverse(text) {
    text += ''
    if(text.length <= 1) {
        return text
    }
    return reverse(text.slice(1)) + text[0]
}

// reverse('hello') == reverse('ello') + 'h' == 'olle' + 'h'
// reverse('ello') == reverse('llo') + 'e' == 'oll' + 'e'
// reverse('llo') == reverse('lo') + 'l' == 'ol' + 'l'
// reverse('lo') == reverse('o') + 'l' == 'o' + 'l'
// reverse('o') == 'o'
```

- 메모리 효율이 극히 떨어지는 경우가 있다
함수는 휘발 되는데 가령 fibonacci에서도 fib(3)을 fib(5) 만드는데 만들어 사용하고서 fib(4) 만드는데에 다시 만들어 사용하는 중복 발생. 효율이 극히 떨어진다.

```jsx
// 1, 1, 2, 3, 5, 8, 13, 21

function fib(n){
    if(n <= 2) {
        return n
    }
    return fib(n-1) + fib(n-2)
}

// 왼쪽 function만 따라갔으니
// fib(4) == fib(3) + fib(2)
// fib(3) == fib(2) + fib(1) == 3
// fib(2) == 2
// fib(1) == 1

// 오른쪽 값인 fib(2)를 다시 해야하는 상황!!
// fib(2) == 2
```

- 어떤 값을 저장해두고 불러와서 쓰는 것을 caching이라고 한다. 상기 피보나치도 cache로 해결 → 메모리 효율을 위해서 이용

```jsx
// 호출되는 것이 메모리를 차지하고 있으므로 아래 기법을 적절히 믹싱해서 사용할 필요가 있음
// 반복문, 다이나믹 프로그래밍(메모이제이션(하향식), 타뷸레이션(상향식))
let fibo_cache = []
function fibo(n){
  if (n in fibo_cache) {
    return fibo_cache[n]
  }
  fibo_cache[n] = n < 2 ? n : fibo(n-2) + fibo(n-1)
  return fibo_cache[n]
}

// fibo_cache = [0, 1, 1, 2, fibo(2) + fibo(3)]
// fibo(4) == fibo_cache[4] == fibo(2) + fibo(3)
// fibo(2) == fibo_cache[2] == fibo(0) + fibo(1)
// fibo(0) == fibo_cache[0] == 0
// fibo(1) == fibo_cache[1] == 1
// fibo(3) == fibo_cache[3] == fibo(1) + fibo(2)
// fibo(1) == 1
// fibo(2) == 1
```

- 점점 so에 검색해도 안나오는 레벨의 코드가 나오게 될 것
- 애플에서 구글 입사 제안 받고 갔는데 코테에서 떨어진 케이스(..ㅠ)
- in operator
    - - // 배열
    var trees = new Array("redwood", "bay", "cedar", "oak", "maple");
    0 in trees         // true를 반환합니다.
    3 in trees         // true를 반환합니다.
    (1 + 2) in trees   // true를 반환합니다. 연산자 우선 순위에 의하여 이 구문의 괄호는 없어도 됩니다.
    6 in trees         // false를 반환합니다.
    "bay" in trees     // false를 반환합니다. 당신은 배열의 내용이 아닌, 인덱스 값을 명시하여야 합니다.
    "length" in trees  // true를 반환합니다. length는 Array(배열) 객체의 속성입니다.
    - // 미리 정의된 객체
    "PI" in Math       // true를 반환합니다.
    "P" + "I" in Math  // true를 반환합니다.
    - // 사용자가 정의한 객체
    var myCar = {company: "Lamborghini", model: "Lamborghini Veneno Roadster", year: 2014};
    "company" in myCar // true를 반환합니다.
    "model" in myCar   // true를 반환합니다
- 팩토리얼, 문자열뒤집기, 피보나치 이 정도는 외워보자

**즉시 실행 함수**

1. 즉시 실행하고 외부에서 컨트롤 할 필요가 없는 함수
2. function scope, 메모리 효율 → 바로 휘발 되니까

```jsx
// 익명 즉시 실행 함수
(function () {
  let a = 1;
  let b = 2;
  return a + b;
}());
// 바로 실행 된다

// 기명 즉시 실행 함수
(function foo() {
  let a = 3;
  let b = 5;
  return a * b;
}());

foo(); // ReferenceError: foo is not defined
// 어차피 실행하지 못해서 의미가 없음.
// 메모리 효율적으로 관리하기 위해 바로 실행해야 하는 것들을 즉시 실행함수로 관리
```

어차피 즉시 실행함수는 휘발되어 버리니까 기명함수든 익명함수든 상관이 없다.

- **함수 스코프 안의 ~~var든 let~~이든 어차피 없어진다.** return 전달해주고 안의 값은 사용 못한다.
- **블록 스코프 안의 var는 밖에서도 사용 가능**했지만.. **~~let은 살아남지~~ 못한다.**

**map**

- map은 실무에서 너무 중요하기 때문에 잘 기억해두기

```jsx
// map
// https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Global_Objects/Array/map
// mdn 예제
let array = [1, 4, 9, 16];
let 값1 = array.map(x => x * 2);
```

- method chaining → 다른 메서드를 이어이어 주는 것
ex. array.map(Math.sqrt).map(x⇒x**)
이런 식으로
대부분의 언어들에서 method chaining이 있다.
- filter도 너무너무 중요. filter와 map이 없이는 BE를 할 수가 없다. map은 어찌저찌 대체할 수 있다고 해도.. filter는 정말..

```jsx
let data = [{
                반 : 1, 
                번 : 1, 
                이름 : "호준", 
                중간고사점수 : 55
            }, {
                반 : 1, 
                번 : 2, 
                이름 : "길동", 
                중간고사점수 : 60
            }, {
                반 : 1, 
                번 : 3, 
                이름 : "영희", 
                중간고사점수 : 30
            }, {
                반 : 1, 
                번 : 4, 
                이름 : "철수", 
                중간고사점수 : 20
            }, {
                반 : 1, 
                번 : 5, 
                이름 : "규리", 
                중간고사점수 : 100
            }];
console.log(data.map(x => x.중간고사점수)); // [ 55, 60, 30, 20, 100 ]
console.log(data.map(x => [x.이름, x.중간고사점수)]);

let s = 0;
data.map(x => x.중간고사점수).forEach(y => s+=y) // forEach를 통해 data.map으로 반환된 array의 모든 요소들을 가지고 함수 실행했고 전역으로 실행된 변수 s에 각 요소들을 += 해줬기 때문에 s에 모든 '중간고사점수'가 더해졌다.

console.log(s) // 265
```

---

## 오후(13:00~18:00) 수업 w/ Licat

**각자 정리해보는 시간 1시간**

### call by value

```jsx
let array = [100, 200, 300];

function test(a) {
    a[0] = 1000;
}

test(array) // [1000, 200, 300]
```

→ x가 [100, 200, 300] 자체를 가리키고 있다. 그래서 test의 매개변수인 a에 x가 인자로 들어오면 a가 [100, 200, 300] 자체를 가리키게 되어서 function 내부에서 [100, 200, 300]을 수정해주게 되면 [100, 200, 300] 자체가 [1000, 200, 300]으로 바뀌어버리고 당연히 이를 가리키고 있던 x 역시 바뀌게 된다.

```jsx
let x = 10;

function test(a) {
    a = 1000;
}
test(x);
x // 10
```

→ x가 10을 가리킨다. test의 매개변수 a 자리에 x를 인자로 받아왔다. function은 call by value로 인자를 받아오기 때문에 인자값은 x가 가리키던 10이 된다. 그런데 1000이 새롭게 할당되면 10을 가리키던 link를 끊고 새롭게 1000을 가리키기 때문에 x는 변화가 없다. call by reference가 아니기 때문에 x는 자신이 가리키던 값만 주고 function과 무관해지는 것

```jsx
let v = 10;

function test(a) {
    a = 1000;
    console.log('난 v야', v); // 10
    console.log('난 a야', a); // 1000
}

test(v);
console.log(v);// 10
```

또 이렇게 이해해봐도 좋다.

결론은 **array나  object를 함수에 인자로 넘길 때는 주의**해야한다. 그리고

→ 이렇기 때문에

```jsx
let data = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
//undefined
let newData = data.map(a => a.map(n => n *2));
// [[2, 4, 6], [8, 10, 12], [14, 16, 18]]
```

이게 가능한 것 
map 함수로 callback 함수 실행해서 data 내의 array 자체에 접근해서 변경해서 반환하는 것이

### **filter**

- filter은 true에 해당하는 값만 걸러 가져온다. 참인 것만 반환

```jsx
// 5를 초과하는 값을 가져오기
let x = [2, 6, 5, 4, 8, 5, 4, 3, 2, 9]
x=x.filter(item => item > 5);
```

- 회원정보 등의 데이터를 json등으로 저장할 때 주의할 것은 패스워드 값을 그냥 '1q2w3e4r1' 이런식으로 보이도록 저장하면 안된다. 암호화를 해줘야한다. 암호화된 '245ddeb08bc300b46ef598908455fa417a5e266f68030cb2c83c956fd7caaf32' 이런 값을 저장할 것
- 해쉬는 단방향 암호화 
해슁 도움 받을 수 있는 sha256
→ [https://emn178.github.io/online-tools/sha256.html](https://emn178.github.io/online-tools/sha256.html)
사실 비밀번호 찾기할 때 과거 비밀번호를 알려주는 사이트는 보안에 문제가 있는 것..!
해쉬는 또 특징이 한글자만 달라져도 전혀 연관성이 없다.
해커가 노가다로 뚤어보려고 할 수도 있기 때문에 보통 보안이 더 되면 비밀번호 뒤에 특정 값(해커가 알 수 없는)을 더해서 Hashing 해주기 때문에 더욱 안전해질 수 있다.
- 검색 엔진 사이트 중에서 가끔 생각없는 사이트가 있다.. 그냥 에러명을 던져주는 사이트가 있다.
- find와 filter는 어떻게 다를까?
filter는 조건 만족하는 모든 것을 찾기 때문에 메모리 효율이 안좋다.
하지만 find는 찾으면 중단하기 때문에
id 찾기와 같이 **고요한 값을 찾는 경우는 find로 수행하자**
- 디코의 경우에는 아이디 뒤에 임의로 #1414와 같은 숫자가 붙기 때문에 중복이 가능하다.

## **Map & Set**

### **Map**

- object에서 불만이 뭐였을까?
→ object를 변수로 선언하고서 해당 변수로 바로 method를 쓸 수 없다는 것
ex.

```jsx
let o = {
    a : 'aa',
    b : 'bb'
}

// 이런 식으로
Object.entries(o); // [ ['a', 'aa'], ['b', 'bb'] ]
Object.keys(o); // ['a', 'b']
Object.values(o) // ['aa', 'bb']
Object.is(0, -0) // false
for (let i of o){
    console.log(i);
}
// VM4458:1 Uncaught TypeError
for (let i in o){
    console.log(i);
}
/*
a
b
*/
Object.keys(o).length // 2
```

- 또 object는 순회도 안된다..
- Map은 새로운 자료형

```jsx
let m = new Map();
m.set('하나', 'one');
m.set('둘', 'two');
m.set('셋', 'three');
console.log(m); // {'하나' => 'one', '둘' => 'two', '셋' => 'three'}
m.get('하나'); // 'one'
m.get('둘'); // 'two'
console.log(m.keys()); // MapIterator {'하나', '둘', '셋'}
m.set('하나', 'one!!');
console.log(m); // Map(3) {'하나' => 'one!!', '둘' => 'two', '셋' => 'three'}
console.log(m.values()); // MapIterator {'one!!', 'two', 'three'}
m.has('하나'); // true
m.delete('하나'); // true
for (let i of m){
    console.log(i);
}
/*
['둘', 'two']
['셋', 'three']
*/
m.size; // 2
m.entries(); // [Map Entries] { [ '하나', 'one' ], [ '둘', 'two' ], [ '셋', 'three' ] }
let temp = new Map([[1, 10],
[2, 20],
[3, 30],
[4, 40]]);
console.log(temp); // Map(4) {1 => 10, 2 => 20, 3 => 30, 4 => 40}
console.log(o); // {a: 'aa', b: 'bb'}
let temp2 = new Map(Object.entries(o));
undefined
console.log(temp2); // Map(2) {'a' => 'aa', 'b' => 'bb'}
temp2.size  // 2
```

- `let m = new Map()`으로 선언해주는 이유?
→ array → [], object → {}로 표현해주는 것처럼 표현해줄 수 있는 표현법이 없다.

```jsx
let m = new Map();

// Map에 값을 넣기
m.set('하나', '1');
m.set(1, '하나');
m.set(true, 1);
m.set(false, 0);

// Map의 값에 접근하기
console.log(m.get('하나'));
console.log(m.get(true));

// Map의 값이 있는지 확인하기
console.log(m.has('하나'));

// Map의 값을 제거하기
console.log(m.delete('하나'));
console.log(m.has('하나'));
console.log(m);

// Map의 크기를 확인하기
console.log(m.size);
```

### **Set**

- 집합, 값의 중복을 허용하지 않는다.
string 안에 글자 종류가 몇개 있는지 물어보면 그냥 set 때려버리자

```jsx
let s = new Set('abcdeeeeeeeee');
console.log(s); // {'a', 'b', 'c', 'd', 'e', 'f'}
console.log(s.size); // 6

s.delete('b');
console.log(s); // {'a', 'c', 'd', 'e', 'f'}
s.has('c'); // true
```

- index는 없지만 값이 추가될 때는 아무튼 순서대로 들어간다(!) 하지만 index가 없기 때문에 순서대로 뽑을 수가 없다.

- 석사는 반대... 석사는 지식을 쌓는 곳이 아니다. 석사 학위를 딸려고 가는 곳이지
- 내일 진도는 DOM, this는 다음 주에
- 다음 주 진도 → this, json, json 렌더링, html form, 이벤트, 정규표현식, callback, promise, async, await, import, 비동기프로그래밍, chartjs...

어느정도 알아야 프로젝트 진행할 수 있나?

- 사실 다 알 필요 없다. 그 때 그 때 다 찾아서 꺼내 쓰기
- 이가 없으면 잇몸으로라도 잘 해보자..

막간 팀 회고

- 진도가 빠른건지? → 사람마다 속도가 다른 것 같다.
- 뒤쳐진다고 느낀다고 민폐라는 생각 절대 ㄴㄴ
- 게으름 ≠ 조급함
- 수업 듣고 책으로 다시 보는 시간에 흡수가 되면서 잘 되는 것 같다. 귓동냥으로라도 잘 듣자.
- 공부하는 법을 다 까먹었다 생각하는 게 → 다 손으로 코딩해라. for문 돌릴 때도, 재귀 돌릴 때도 다 한단계 한단계 써가면서
