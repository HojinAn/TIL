# 멋쟁이사자처럼 프론트엔드스쿨 w/ 제주코딩베이스캠프 21일차

## **오전(09:00~11:50) 수업 w/ Licat**

**morning break**

- 책을 집필해봐라
5~6명 정도 모여서
- 스타트업 관련하여
→ 큰 돈을 벌고 싶으면 사실 스타트업ㅈ은 추천하기 어렵다.
- 이력서 검토 요청이 많은데, 이력서를 빨리 보내달라.
깃헙 README.md가 작성이 안되어있는 경우가 많은데, 다 적혀 있어야한다. 단순히 적혀 있는 것이 아니라 샘플 적혀잇는거
- 여러 이력서를 보다보니 면밀, 냉정하게 판단해줄 수 있을 것.
적어도 이렇게는 적을 것[https://github.com/paullabkorea/resume-repo](https://github.com/paullabkorea/resume-repo)
- 그냥 학교 프로젝트 한거가 서비스 배포도 안해보고. 그런거를 Pin 해서만큼 자랑할만한 것인지 잘 모르겠다.
- 스타트업에서 더 필요한 것?
아이디어 vs 기술
→ 크기전에는 아이디어, 크고나서는 기술
둘 다 중요하지 않다고 생각, 열정이 중요
아이디어는 pivot, 기술은 사람으로 해결가능.
빨리 할 수 잇는 것들을 채우고 나머지는 사람으로 사람을 뽑고 문제의식에 대한 사명감이 있는지. 돈을 벌기 위해서 왔다는 동기는 금방 무너진다. 사실 스타트업은 월급을 밀리기가 솔직히 쉽다.
- FE재남님 비전공, 33이라는 나이에 시작.. [https://youtu.be/3ZP3VPlrr0U?list=PLjQV3hketAJnP_ceUiPCc8GnNQ0REpCqr](https://youtu.be/3ZP3VPlrr0U?list=PLjQV3hketAJnP_ceUiPCc8GnNQ0REpCqr)
SI부터 시작.. ㅎㅎ 대부분 낮은 레벨부터 시작한다. 그렇게 성공한 사람들이 많다. 처음 연봉을 너무 높게 잡으면 취업이 늦어지는데, 그것보다는 돈받으면서 공부한다는 생각으로 일하자.
- 너무 나이에 구애 받지 말자!!
- JS언어 자체가 너무 개판이라.. 번역도 개판일 수 밖에 없다. 초기 JS는 오류 투성이... 
문제점을 마주했을 때 문제점을 알아가는 것은 많은 리소스가 든다.
- 명료한 언어들을 좋아하신다..ㅎ 파이썬은 사랑, C 계열 선호
- JS 좋은 책은 코뿔소 [http://www.yes24.com/Product/Goods/24769929](http://www.yes24.com/Product/Goods/24769929)
이런 책을 한번쯤은 정복해야 한다.
- 쉬운 책, 쉬운 책 자꾸 가다보면 내 실력도 쉽게 된다.
- 앙상한 나무를 그리고, 간결하게만 배우고, 나중에 가지를 그리고, 잎을 그릴 것이다. 깊게 나뭇잎까지 한번 들어간다면, 나뭇잎 하나 그릴때 나무의 큰 그림에서 어디에 위치해있는지를 잊게 되는데, 전체 줄기를 한번 잡고 가지치기를 해나가기를 권장. 그렇기에 30분 요약강좌 같이 개괄적으로 한번 볼 것을 추천. 나뭇가지부터 먼저 잡자.
- 백문이 불여일타다닥. 온라인 2배속이 아닌 실시간의 장점?
1. 실시간 질의 응답
2. 직접 따라쳐보는 시간

### **수업**

- 출력방법 4가지
1. window.alert
2. console.log
3. document.write
4. document.getElementById('one').innerHTML = 'hi'
- [https://ko.javascript.info/](https://ko.javascript.info/)
- document는 문서,
- document, window의 정체를 정확히 알고 싶을 때는 console.dir(document), console.dir(window)를 통해서 확인 가능하다.
- console이란? → window dir 쳤을 때, console은 attribute 하단에 있다.
- 윈도우에 접근하는 방법(멤버접근 연산자 dot(.))?
ex) window.console.log → function임을 알려주고 있다.
- console에 보면 가장 많이 사용하는 게 → error
console.error()이렇게 접근
- console.table도 많이 쓴다. → json 자료형 등을 깔끔한 table로 반환해준다.
- 수업시간에 변수는 let으로만 서ㅏ용하자.
- onsole.log만 쳐도 에러가 있다면 에러가 뜨는데 error를 언제 쓰는지?
→ node로 실행하다가 error를 사용할 경우가 생긴다. 코드에 문제는 없지만 우리가 짠 logic 상에 문제가 있을 때 error를 반환하도록 사용해야한다.
- json 자료형을 간단히 만들 수 있는 사이트
[https://www.json-generator.com/](https://www.json-generator.com/)
- 변수 하나에 대해서만 하루 온종일 얘기할 수 있다.
변수란 무엇일까? → 태생부터 들어가야한다. 메모리 주소의 식별자이다. 변수명 자체가 인간이 식별할 수 있게끔 포스트잇을 붙여놓은 것.
- let 나변수 = 10을 적어줬을 때 어떤일이 발생하는가?
→ 나변수라는 애가 메모리 주소(00AAFFDD와 같은)에 저장이 되어있음. 10이라는 애도(00AAFFDA와 같은) 저장이 되어 있다.
- 공간을 차지하지 않는 다른 데이터란 있을 수가 없다.
- 파이썬으로 치면 x=10, y=10 → id(x), id(y)는 같은 공간을 가리킨다. 
a=x를 해줘도 같은 공간을 가리킨다. → 이게 JS랑 Python 특징
256까지는 메모리 주소에 적재되어 있다. 257이상은 a=257, b=257 이렇게 선언해줘도 다른 주소를 반환

**갑자기 메모리 얘기**

- 갈매기털빼(KB,MB,GB,TB,PB) → 이런 단위 중요. 나중에 node 갔을 때 컴퓨터가 뻗어버릴 수도 있다.
- 메모리란 무엇일까?
- CPU는 두뇌 → 코어는 두뇌 하나. 코어가 많다고 해도, 그 안에 처리 속도를 아는 것이 중요하다. i3, i5 이런게 중요한게 아니라 세대가 중요. 결국 벤치마킹 점수가 중요
- 하드디스크란? → 보조기억장치
- 메모리는 DDR3, DDR4에 따라 달라짐 16GB이상 살필요 없는 듯
- 하드디스크는 레이저로 새기는 것
- CPU - RAM - SSD 순서로 되어 있기 때문에 CPU는 RAM에서 정보를 가져온다. SSD에서 바로 가져오는 경우도 있지만
- 진수 정리
→ 진수는 왜 알아야 할까?? 코테에 나와서 ㅎ[https://tech.kakao.com/2017/09/27/kakao-blind-recruitment-round-1/](https://tech.kakao.com/2017/09/27/kakao-blind-recruitment-round-1/)
- 코테는 필수가 아니다! 사실 지금 코테는 어렵다.
- 이진수 표현법 0b100 = 4

**다시 변수**

- array는 왜 Object type인가.. function도
- 사실 이시대에 function을 object라고 보면 안되는데.. JS는 일관되지가 않는다. 문제가 크다🤦‍♂️
function인데 왜 변수가 담기냐 이거임..
- k.a와 k['a']는 같다.
- 부동소수점 조심해야한다..! 0.1*0.1 같은..
- 부동소수점은 왜 일어나는가?
→ 0.01100110011001100110이런식으로 2진법으로 소수를 나타내다보면 발생할 수 밖에 없다.
- 제코베 JS 코테스터디
[https://www.youtube.com/watch?v=WOwybsMpzRc](https://www.youtube.com/watch?v=WOwybsMpzRc)
- 정말 큰 수의 경우에 999999999999999999n + 3n이렇게 적어줘야한다.
실제 서비스에서 언제 필요할까?
생각보다 세상은 아름답지 못하다.ㅎ 허점을 파고드는 사람들이 있다.
상품페이지가격에 엄청난 가격을 적어둔다.
- 음수를 허락하지 않는 경우에는 0 -1은 9999999999999999다. 이거를 이용해서 해킹해가기도 한다.
- 실제로 신한 근무 당시 해킹시도만 하루 10만건. 협박편지 받고. 협박편지에 걸맞은 증명을 해야 신경을 쓴다.
- parseInt도 잘 알아야한다.
- toFixed를 이용해서 소수점 수정해주기

let n = 10000
n.toFixed(4)
'10000.0000'
n.toFixed(5)
'10000.00000'

( 0.1 * 3 ).toFixed(2)
'0.30'

**연산 - 산술, 할당, 비교, 논리 순서로 후에 실무에서 사용하는 연산**

**산술 연산**

- ;가 있어도 없어도 작동하지만 신입사원 때는 ;를 빼면 안좋게 보일.. 수도^^
- a++비추 ++a로 써주자

**할당연산**

- a = 11, b = 3;
a = a + b → a는 14
사실 연산자 우선순위 계산을 해야한다. =은 뭐길래 +보다 
=은 대입
[https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Operators/Operator_Precedence](https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Operators/Operator_Precedence)
이런 우선순위 알면 좋지. 근데 사실 괄호치면 된다.
하지만 실무에서 우선순위를 혼자 알고 막 적어놓은 코드는 다른 사람을 배려하지 못하는 코드가 될 수도 있다.
급하게 짜야하는 코드에서 해독할 수 없다는 좌절감을 주게 되면 좋을 게 없다.
모두에게 올바른 방향이 올바른 방향이 아닐 수 있다. 
유지보수 측면에서도 복잡한것보다 보고 이해하기 쉬운게 더 좋다.

**비교연산**
a == b(값 비교)
a === b(값 유형 비교)
a > b
a ≥ b
a < b
a ≤ b
a ≠ b

- == 보다 ===가 빠르다 → 형변환이 일어나지 않기 때문에
그렇지만 사실 형변환을 다 고려해가면서 짜지 않는다.
- 반복문에서의 속도 격차가 매우 크다.
- 시간복잡도 계산을 하게 되면, 시간 차이가 굉장히 크지, 등호 갯수 차이에 기인하는 시간 차이는 그렇게 크지 않다.

**// 논리연산**

// and, or, not
// &&(and) = 논리곱
// ||(or) = 논리합
// !(not) = 부정
// true = 1
// false = 0

---

## 오후(13:00~18:00) 수업 w/ Licat

막간 break

- JS가 어려워서 패스할꺼다? HTML, CSS를 엄청 잘하면 모르겠는데 정복이라는 표현을 어렵고, 뭔가는 할 줄 안다. 뭔가를 만들어봤고 만들줄 안다 정도는 해야한다.
코테를 포기할 수는 있어도, JS를 포기한다는 것은 말이 안된다.
- 웹의 4대 요소?
HTML, CSS, JS, WA(Web Assembly)
- 막간 QnA → JS에서는 메모리 주소를 확인할 수 있는 놈이 없다. 
[https://stackoverflow.com/questions/50530936/is-there-any-method-to-check-memory-address-of-javascript-variable](https://stackoverflow.com/questions/50530936/is-there-any-method-to-check-memory-address-of-javascript-variable)
대표님 아시는 내용 중에는 없다.
- Object.is(0, -0) → false 반환
1. false || true : true
2. true && false : false
3. !true : false
4. !((true && false) || (true && false)) : true
5. let x = 10
!((x % 5 == 0 && x % 2 == 0) || (x / 2 == 5 && false)) : false
6. let y = 10
(false && y % 2 == 0) && (y / 2 == 5 && false) : false
7. let z = 3
(true && z % 3 == 0) || (z / 2 !=!= 5 && false) //  : 이렇게 적으면 error ~~true~~ 

// 드모르간 법칙
!(x || y) === (!x && !y)
!(x && y) === (!x || !y)

// 3항연산자 대체 용법
true && '완료' || '미완료';

- JS는 논리 연산자 뒤에 잘못된 문법이 들어가면 오류 발생. 즉, 뒤에까지 다 살펴봐준다.
- **false || console.log('hello') → hello 반환**
- **true || console.log('hello') → true 반환**
- 파이썬은 앞에가 true면 뒤에 것은 보지도 않는다.
- 드모르간 법칙과 같은 방법으로 코드를 최적화하는 상황이 발생할 것
- !x && !y와 같은 경우 !x가 false면 그냥 !x로만 적어줘도 된다.
- 삼항(tenary) 연산자 a.k.a 조건부 연산자
// 3항연산자 대체 용법
true && '완료' || '미완료';
사실 실무에서는 이렇게 사용하면 if문으로 고치라고 할 것. 가독성이 좋지 않으니깐 너무 단순한 if인 경우는 쓸 수 있어도
- 주석이 없어도 읽힐 수 있는 코드를 지향하자! 실무에서는 주석을 세밀하게 쓰지 않는다. 세밀하게 쓸 동안 한 페이지를 만들고 있는다.
- 클린코드 → 변수명 btnChangeBackgroundColor .이렇게 가독성을 높이슨 코드를 지향한다.
- Python은 syntaxError를 잡고 뒤
- Boolean([])는 왜 true인가..ㅠㅠ

**회사에서 자주 사용하는 형변환**

- 회사에서 자주 사용하는 형변환은 회사 컨벤션 따라가야한다.
- .toString, String()은 보통 사용하지 않는다.
- 보통 123 + '' 이런 식으로 작성한다.
- !!true도 매우 자주 사용한다.
- 값이 없으면 ( = '') false

```jsx
123 + '' // '123'
!!true // true
!!'hojun' // true
!!'' // false
!!1 // true
!!0 // false
!!undefined // false
!!NaN // false
```

→ 매우 강력하게 사용할 수 있다.

- x를 string으로 바꾸려면 x + ''
x를 boolean으로 바꾸려면 !!x

```jsx
'0' == 0 // true
0 == '' // true
0 == '0' // true
false == 'false' // false
false == '0' // true
false == null // false
false == undefined // false
false == NaN // false
!!null // false
!!undefined // false
!!NaN // false
```

String은 + 에서만 String으로 형변환난다.

let x = '10000'

→ +x를 해주면 10000이 나온다(!)

'11' - 'sdaf' // NaN

x * 1 도 number를 반환

parseInt(string, 진수)를 사용하는 것이 안전

```jsx
99999999999999999999+3
100000000000000000000
99999999999999999999n+3n
100000000000000000002n
parseInt(10, 10)
10
parseInt(10, 2)
2
parseInt(10, 8)
8
parseInt(10, 16)
16
let n = 10000
n.toFixed(4)
'10000.0000'
n.toFixed(5)
'10000.00000'
(0.1 * 3).toFixed(2)
'0.30'
Math.random()
0.5687532051283051
Math.random()
0.47986279267925624
Math.random()
0.930467608127993
Math.random()
0.49460410068692906
Math.random()
0.990310123731897
Math.random()
0.5912535284997813
Math.random()*10
4.456524964460835
Math.random()*10
6.806238049012037
Math.random()*10
6.858612837966154
Math.random()*10
1.1847425996815764
Math.random()*10
3.8047609508515445
Math.random()*10
0.317566949302015
Math.random()*10
7.080720495502271
let a = 10;
let b = 3;
undefined
console.log(a + b);
console.log(a + b);
console.log(a + b);
console.log(a + b);
console.log(a + b);
console.log(a + b);
VM4154:1 13
VM4154:2 13
VM4154:3 13
VM4154:4 13
VM4154:5 13
VM4154:6 13
undefined
console.log(a + b);
console.log(a - b);
console.log(a / b);
console.log(a * b);
console.log(a ** b);
console.log(a % b);
VM4248:1 13
VM4248:2 7
VM4248:3 3.3333333333333335
VM4248:4 30
VM4248:5 1000
VM4248:6 1
undefined
console.log(9 % 9);
VM4275:1 0
undefined
console.log(9 % 10);
VM4295:1 9
undefined
++a
11
++a
12
a++
12
a
13
a++
13
a
14
--a
13
--a
12
a--
12
a
11
// 할당연산
undefined
ㅁ
VM4473:1 Uncaught ReferenceError: ㅁ is not defined
    at <anonymous>:1:1
(익명) @ VM4473:1
a
11
b
3
a = a + b
14
a += b // a = a + b
17
a /= b // a = a + b
5.666666666666667
a == b
a === b
a > b
a >= b
a < b
a <= b
a != b
true
a = 10
10
b = '10'
'10'
a == b
true
a === b
false
typeof a
'number'
typeof b
'string'
String(a)
'10'
String(a) === b
true
a
10
a = String(a)
'10'
a
'10'
// 논리연산
// and, or, not
// &&(and) = 논리곱
// ||(or) = 논리합
// !(not) = 부정
// true = 1
// false = 0
undefined
for (let x = 0; x < 101; x++) {
    console.log(x);
}
VM4957:2 0
VM4957:2 1
VM4957:2 2
VM4957:2 3
VM4957:2 4
VM4957:2 5
VM4957:2 6
VM4957:2 7
VM4957:2 8
VM4957:2 9
VM4957:2 10
VM4957:2 11
VM4957:2 12
VM4957:2 13
VM4957:2 14
VM4957:2 15
VM4957:2 16
VM4957:2 17
VM4957:2 18
VM4957:2 19
VM4957:2 20
VM4957:2 21
VM4957:2 22
VM4957:2 23
VM4957:2 24
VM4957:2 25
VM4957:2 26
VM4957:2 27
VM4957:2 28
VM4957:2 29
VM4957:2 30
VM4957:2 31
VM4957:2 32
VM4957:2 33
VM4957:2 34
VM4957:2 35
VM4957:2 36
VM4957:2 37
VM4957:2 38
VM4957:2 39
VM4957:2 40
VM4957:2 41
VM4957:2 42
VM4957:2 43
VM4957:2 44
VM4957:2 45
VM4957:2 46
VM4957:2 47
VM4957:2 48
VM4957:2 49
VM4957:2 50
VM4957:2 51
VM4957:2 52
VM4957:2 53
VM4957:2 54
VM4957:2 55
VM4957:2 56
VM4957:2 57
VM4957:2 58
VM4957:2 59
VM4957:2 60
VM4957:2 61
VM4957:2 62
VM4957:2 63
VM4957:2 64
VM4957:2 65
VM4957:2 66
VM4957:2 67
VM4957:2 68
VM4957:2 69
VM4957:2 70
VM4957:2 71
VM4957:2 72
VM4957:2 73
VM4957:2 74
VM4957:2 75
VM4957:2 76
VM4957:2 77
VM4957:2 78
VM4957:2 79
VM4957:2 80
VM4957:2 81
VM4957:2 82
VM4957:2 83
VM4957:2 84
VM4957:2 85
VM4957:2 86
VM4957:2 87
VM4957:2 88
VM4957:2 89
VM4957:2 90
VM4957:2 91
VM4957:2 92
VM4957:2 93
VM4957:2 94
VM4957:2 95
VM4957:2 96
VM4957:2 97
VM4957:2 98
VM4957:2 99
VM4957:2 100
undefined
for (let x = 0; x < 101; ++x) {
    console.log(x);
}
VM4964:2 0
VM4964:2 1
VM4964:2 2
VM4964:2 3
VM4964:2 4
VM4964:2 5
VM4964:2 6
VM4964:2 7
VM4964:2 8
VM4964:2 9
VM4964:2 10
VM4964:2 11
VM4964:2 12
VM4964:2 13
VM4964:2 14
VM4964:2 15
VM4964:2 16
VM4964:2 17
VM4964:2 18
VM4964:2 19
VM4964:2 20
VM4964:2 21
VM4964:2 22
VM4964:2 23
VM4964:2 24
VM4964:2 25
VM4964:2 26
VM4964:2 27
VM4964:2 28
VM4964:2 29
VM4964:2 30
VM4964:2 31
VM4964:2 32
VM4964:2 33
VM4964:2 34
VM4964:2 35
VM4964:2 36
VM4964:2 37
VM4964:2 38
VM4964:2 39
VM4964:2 40
VM4964:2 41
VM4964:2 42
VM4964:2 43
VM4964:2 44
VM4964:2 45
VM4964:2 46
VM4964:2 47
VM4964:2 48
VM4964:2 49
VM4964:2 50
VM4964:2 51
VM4964:2 52
VM4964:2 53
VM4964:2 54
VM4964:2 55
VM4964:2 56
VM4964:2 57
VM4964:2 58
VM4964:2 59
VM4964:2 60
VM4964:2 61
VM4964:2 62
VM4964:2 63
VM4964:2 64
VM4964:2 65
VM4964:2 66
VM4964:2 67
VM4964:2 68
VM4964:2 69
VM4964:2 70
VM4964:2 71
VM4964:2 72
VM4964:2 73
VM4964:2 74
VM4964:2 75
VM4964:2 76
VM4964:2 77
VM4964:2 78
VM4964:2 79
VM4964:2 80
VM4964:2 81
VM4964:2 82
VM4964:2 83
VM4964:2 84
VM4964:2 85
VM4964:2 86
VM4964:2 87
VM4964:2 88
VM4964:2 89
VM4964:2 90
VM4964:2 91
VM4964:2 92
VM4964:2 93
VM4964:2 94
VM4964:2 95
VM4964:2 96
VM4964:2 97
VM4964:2 98
VM4964:2 99
VM4964:2 100
undefined
for (let x = 0; x < 101; x++) {
    // console.log(x);
    if (x % 3 == 0){
        console.log(x);
    }
}
VM4970:4 0
VM4970:4 3
VM4970:4 6
VM4970:4 9
VM4970:4 12
VM4970:4 15
VM4970:4 18
VM4970:4 21
VM4970:4 24
VM4970:4 27
VM4970:4 30
VM4970:4 33
VM4970:4 36
VM4970:4 39
VM4970:4 42
VM4970:4 45
VM4970:4 48
VM4970:4 51
VM4970:4 54
VM4970:4 57
VM4970:4 60
VM4970:4 63
VM4970:4 66
VM4970:4 69
VM4970:4 72
VM4970:4 75
VM4970:4 78
VM4970:4 81
VM4970:4 84
VM4970:4 87
VM4970:4 90
VM4970:4 93
VM4970:4 96
VM4970:4 99
undefined
let result = 0;

for (let x = 0; x < 101; x++) {
    // console.log(x);
    if (x % 3 == 0){
        // console.log(x);
        result += x
    }
    if (x % 5 == 0){
        // console.log(x);
        result += x
    }
    if (x % 15 == 0){
        // console.log(x);
        result -= x
    }
}

console.log(result);
VM4976:19 2418
undefined
let result = 0;

for (let x = 0; x < 101; x++) {
    // console.log(x);
    if (x % 3 == 0 || x % 5 == 0){
        // console.log(x);
        result += x
    }
}

console.log(result);
VM4981:11 2418
undefined
a = 100000000
100000000
b = 100000000
100000000
Object.is(a, b)
true
// ECMA Script2015 추가
undefined
// https://stackoverflow.com/questions/50530936/is-there-any-method-to-check-memory-address-of-javascript-variable
undefined
Object.is(0, -0)
false
(x || y)
VM5202:1 Uncaught ReferenceError: x is not defined
    at <anonymous>:1:1
(익명) @ VM5202:1
let x = true
undefined
let y = false
undefined
!(x || y)
false
false || true
true
true && false
false
false || false
false
true && true
true
!true
false
!((true && false) || (true && false))
true
let x = 10
undefined
!((x % 5 == 0 && x % 2 == 0) || (x / 2 == 5 && false))
false
let y = 10
undefined
(false && y % 2 == 0) && (y / 2 == 5 && false)
false
let z = 3
undefined
(true && z % 3 == 0) || (z / 2 !=!= 5 && false)
VM5469:1 Uncaught SyntaxError: Unexpected token '!='
true || console.log('hello')
true
false || console.log('hello')
VM5571:1 hello
undefined
x = true
true
y = true
true
!(x || y)
false
(!x && !y)
false
let age = 10
undefined
let accessAllowed = (age > 18) ? true : false;
undefined
accessAllowed
false
(age > 18) ? console.log('성인입니다!!') : console.log('미성년자입니다!!')
VM5800:1 미성년자입니다!!
undefined
let job = true;
undefined
job && '완료' || '미완료'
'완료'
job = false;
false
job && '완료' || '미완료'
'미완료'
typeof(5)
'number'
typeof('5')
'string'
typeof("5")
'string'
typeof('''5''')
VM6000:1 Uncaught SyntaxError: Unexpected string
typeof(`5`)
'string'
typeof('"5"')
'string'
ture? console.log(1) : console.log(2)
VM6147:1 Uncaught ReferenceError: ture is not defined
    at <anonymous>:1:1
(익명) @ VM6147:1
true? console.log(1) : console.log(2)
VM6176:1 1
undefined
false? console.log(1) : console.log(2)
VM6197:1 2
undefined
let value = 10;
value % 2 == 0? console.log(1) : console.log(2)
VM6308:2 1
undefined
'호준'?'천재':'바보'
'천재'
Boolean('호준')
true
Boolean('')
false
Boolean(1)
true
Boolean(0)
false
Boolean(' ')
true
Boolean(-1)
true
Boolean(true)
true
Boolean('true)
VM6628:1 Uncaught SyntaxError: Invalid or unexpected token
Boolean('true')
true
Boolean('false')
true
typeof '5'
'string'
typeof 5
'number'
typeof true
'boolean'
String(5)
'5'
Number(true)
1
Number(false)
0
Number('5')
5
typeof([1, 2, 3, 4])
'object'
typeof({'one':'하나', 'two':'둘'})
'object'
typeof('1' + 1)
'string'
'1' + 1
'11'
1 + '1'
'11'
'11' - 1
10
//헷갈리는 형변환
undefined
Boolean([])
true
Boolean({})
true
// 회사에서 주로 사용하는 형변환
undefined
String(123)
'123'
123.toString()
VM7255:1 Uncaught SyntaxError: Invalid or unexpected token
let x = 10
undefined
x.toString()
'10'
// 위에서 언급한 2개 사용하지 않습니다.
undefined
// Case마다 다릅니다!! (절대로 사용하지 않는다는 법칙은 없습니다.)
undefined
123 + ''
'123'
!!true
true
!!'hojun'
true
!!''
false
!!1
true
!!0
false
!!undefined
false
!!NaN
false
!true
false
!(!true)
true
'0' == 0
true
0 == ''
true
0 == '0'
true
false == 'false'
false
false == '0'
true
false == null
false
false == undefined
false
false == NaN
false
!!null
false
!!undefined
false
!!NaN
false
Boolean('false')
true
false === 0
false
false == 0
true
false == '0'
true
'false'
'false'
'11'-'sdaf'
NaN
let x = '10000'
undefined
+x
10000
-x
-10000
+x
10000
x * 1
10000
+x
10000
x = -10000
-10000
x = '-10000'
'-10000'
+x
-10000
x = +x
-10000
x
-10000
Number('10')
10
parseInt('1230123', 10)
1230123
parseInt('1230123asdfasdf', 10)
1230123
x = '123asdfasdf'
'123asdfasdf'
+x
NaN
```

- 형변환에서 Number()보다는 parseInt()를 더 추천. 더 빠르기도하고
근데 parseInt 는 몇진수로 변환하겠다 딱 나타낼 수 있는데, Number 는 객체 생성으로 접근해서 조금 동작이 다르다.
- 파이썬의 창시자도 10점 만점에 8점을 매겼다.
- 언어마스터라는 표현은 의미가 없는 말..!
- 목적의 달성은 boolean이 아니라 double이다.
- 특정 언어를 잘하는 사람은 매우 경쟁력 있는 사람
- 남들과 구별되는 강점은 무엇인가?
남들이 해본 것을 해본것은 남들밖에 안된다.
지식란 '존재를 알기 전까지는 존재를 알지 못한다'
- [https://cryptozombies.io/ko/](https://cryptozombies.io/ko/)
- 손코딩 버그 0인 사람도 있다..
- 뭘 만들어봐 했을 때 컴퓨터 앞에 앉았을 때의 막막함
- 단순 지식의 습득 뿐만
- 카드뒤집기 게임 같은 프로젝트가 별 4개짜리
- 보통 기업에서 별 3개짜리 과제면 합격할 수 있는 것 같다.
- 별 5개를 뽑아낼 수 있다면 시니어 레벨이다.
- 벤딩머신까지는 충분히 풀 수 있어야 되는데
- 네카라쿠배까지는 '준'시니어를 모집하는 것 같다.
4.5개 문제를 내고 연봉도 많이 주고^^
- [https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Global_Objects/Number](https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Global_Objects/Number)

```jsx
// Number와 parseInt 어떤게 실무에서 더?
let value = new Number(100);
value = 
```

- 형변환에서 Number은 다른 목적에 따라 다르게 쓸수도 있기 때문에 애초에 목적이 형변환인 parseInt를 써주자 이 말
- 자신감의 주기
- 1~2년차 때 자신감 충만, 떨어지는 순간이 오는데

```jsx
if (true) {
    console.log(1);
} else if(true) {
    console.log(2);
} else if(true) {
    console.log(3);
} else if(true) {
    console.log(4);
} else if(true) {
    console.log(5);
} else {
    console.log(99);
}
// 1

if (false) {
    console.log(1);
} else if(true) {
    console.log(2);
} else if(false) {
    console.log(3);
} 
if (true) {
    console.log(4);
}
if (false) {
    console.log(5);
} else if(true) {
    console.log(6);
} else if(false) {
    console.log(7);
} else {
    console.log(99);
}
/*
2 
4 
6
*/
if (score >= 90) {
    console.log('mom: i\'m so happy!')
    money += 1000000
} else if (score >= 80) {
    console.log('mom: i\'m happy!')
    money += 100000
} else if (score >= 70){
    console.log('mom : i\'m happy');
    money += 10000;
}else if (score >= 60){
    console.log('mom : happy?');
    money += 10000;
} else {
    console.log('...');
}
```

- escape 문자(\)
- scope는 범위 제한할 때
- 삼항연산자를 중첩해서 사용하지 말자
- 스칼라로 웹개발 하시는 구글 알고리즘 대회 10등하신 분..ㅋㅋㅋ 100위 안에 들려면 언어를 만들어야한다.
- 어떻게든 3달내로 끝내자는 생각이 결과를 만들어주지는 않는다. 장기간으로 보고 하자. 걱정 공포할 시간에 조금이라도 더 성장하자
- 코테 문제 푸는게 재밌다면 BE가 맞다..!!

```jsx
switch (/*new Date().getDay() 오늘은 월요일*/ 1 ) {
  case 0:
    document.write('일요일입니다.')
    break;
  case 1:
    document.write('월요일입니다.')
    break;
  case 2:
    document.write('2번째 case입니다.')
    break;
  case 3:
    document.write('3번째 case입니다.')
    break;
  default:
    break;
}
// 월요일입니다.
```

- if 문 vs switch 문
if문은 순서대로 내려가는데, switch는 **한번에 점프**해서 간다. 
분명 성능상에 차이는 있을 것
if문이 중첩되어 여러개 늘어질 때는 switch가 맞고,
또 중간에 형변환 일어날 경우도 switch가 맞다.
- switch문을 실무에서?? → 많은 프로젝트를 해봤지만 1~2번 사용한듯. 대부분 if문으로 한듯
다른 언어 산업에서는 좀 쓰는 경향. for문으로만 값이 들어오는 것이 아니라서
- for문보다 while문을 많이 하셨다는
논리구조가 while문이 확연히 드러난다고 생각하셨다는
- JS에서는 -1 index 허용하지 않는다.
- for in, for of [https://youtu.be/gtQ7hG09qG0](https://youtu.be/gtQ7hG09qG0)
- scope고려해서 변수 선언 위치 정해줘야한다.
- 2n이라 적으면 BigInt()

```jsx
//구구단 코드
for(let i = 2; i < 10; i++){
    for(let j = 1; j < 10; j++){
        console.log(`${i} X ${j} = ${i*j}`)
    }
}
```

- 좋은 코테 풀이는 외워둬라 아예
- 8 숫자 세는 문제 좋은 풀이

```jsx
function countEight (number) {
  let array = Array.from(new Array(number), (x,i) => i + 1)
  return array.join("").split("8").length-1;
}

Array.apply( null, Array( 10000 ) ).map( ( v, i ) => { return i } ).join( "" ).match( /8/g ).length
```