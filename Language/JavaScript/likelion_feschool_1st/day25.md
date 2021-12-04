# 멋쟁이 사자처럼 프론트엔드 스쿨 w/ 제주코딩베이스캠프

---

## 오전 수업(09:00~11:50) 수업 w/ Wade

morning break

- 배운 내용을 다 알 필요 없고 필요로 하는 기능만 알면 되지 않을까 또 그것을 알아가는 과정이 자신의 바운더리를 그려가는 과정이 될 것

### 수업

- 원시 자료형 vs 객체 자료형
[https://developer.mozilla.org/ko/docs/Web/JavaScript/Data_structures](https://developer.mozilla.org/ko/docs/Web/JavaScript/Data_structures)
자료형(type)

```jsx
let arr = [1, 2, 3, 4];
let arr2 = arr;
console.log(arr2); // [1, 2, 3, 4]
arr2 = [4, 5, 6, 7];
console.log(arr); // [1, 2, 3, 4]
```

- [1, 2, 3, 4] === new Array(1, 2, 3, 4)
- 원시값은 불변하는 것이 특징
ex) String의 경우에 문자'열'이지만 primitive이기 때문에 `let str = 'abcde'`에서 `str[3] = f`로 바꿔도 str은 그대로 'abcde'다
- 기능을 구현할 때 함수를 만든다. → 함수 때는 라면 끓이기 생각
- Iterator 반복 가능한 객체, 하지만 객체 자료형(Object)는 반복이 안된다.
array, Map, string → 얘네는 iterable
- 컴퓨터 공학에서 말하는 객체가 있고, 객체지향프로그래밍에서 말하는 객체가 있다.
- 객체는 클래스의 인스턴스다.
- JS는 객체지향 언어이긴 한데 클래스는 최근에 생김.. 2015년 전에는 없었다. 그러면 2015년 전에는 객체지향이 아니었나??
그러면 그 전에는 무엇을 이용해서 객체지향을 구현을 했는가? → new를 이용
- '안녕하세요'/*요것은 리터럴*/ 는 new String('안녕하세요')와 같은 표현이라 할 수 있다.
- 함수를 생성자 함수를 통해 만들어낸 결과를 인스턴스라고 부른다. 생성자 함수를 다른 말로 타입 생성자라고도 한다. 다른 언어에서는 class라고 하는 것을 JS는 type이라고 부른다.
- 인스턴스는 객체라고 부르기도 하고
- 변수 선언시 let, const, var 안 붙이고 그냥 쓰면 그냥 var로 선언된다. → 그래서 변수명 잘못 입력하면 var로 새로 만들어버린다ㅠ
- JS 객체 자료형과 객체는 다르다.
- JS에 있는 모든 것들은 다 객체다(객체 자료형 X). string도 객체(객체 자료형X)이기 때문에 .연산자가 가능하다.

### **this**

- this는 함수 안에 있다. 함수를 호출한 객체를 this라고 한다.
- Window는 전역 객체 → 어디서든 접근이 가능하다.
- 그래서 그냥 함수를 호출하고서 this를 찍어보면 함수를 호출한 객체는 Window니까 this에 window가 찍힌다.
- **this는 함수를 호출한 객체를 가리킨다**

```jsx
let myObj = {
    val1 : 100,
    func1 : function() { console.log(this) }
}

myObj.func1(); // (val1: 100, func1: f)
```

### **closure**

- 어려움 이해하는데 1년 걸림

**scope**?

- 범위, 변수의 유효, 생존 범위
- 전역, 함수스코프, 블록스코프(늦게 생긴 개념)

closure(클로져, 폐쇄)

- 즉, 접근할 수 없는 공간
- 함수 스코프에서만 동작하면 클로저 공간
- {}에서 key: value에서 value가 함수면 key는 함수명이 된다.
다만 그냥 function 선언과의 차이는 아래 코드로 이해해보자

```jsx
let obj = {getVal1 : function() {}}
obj.getVal1();

function getVal2() {}
getVal2();
```

- 클로저는 테크닉이다. **폐쇄된 공간의 데이터에 접근하기 위한 테크닉**
- memoery efficient , encapsulation 의 이득이 있다. 보안, 변수명 섞이는 것을 방지
- CSS에서 부모를 타고 부모를 타고 class에 접근하는 것처럼 다른 것에 영향이 안가도록
- 폐쇄된 공간에 접근할 수 있는 권한을 가진 함수
- 클로저(closure)란, 외부 함수에 접근할 수 있는 내부 함수 혹은 이러한 원리를 일컫는 용어인데 스코프에 따라서 내부함수의 범위에서는 외부 함수 범위에 있는 변수에 접근이 가능하지만 그 반대는 실현이 불가능하다는 개념

**Math.random**

- 0이상 1미만
- floor로 깔끔하게 버려버리자.
- 10을 곱했더니 10 미만의 숫자가 나온다? → 숫자 제한 방법은 알겠지
- 랜덤한 숫자를 뽑아내는 함수로 만들어두면 편하겠지

```jsx
function randomNum(min, max) {
    return Math.floor(Math.random()*(max-min+1) + min);
}
```

- 로또 번호 6개 뽑기 실습!

---

## 오후(13:00~18:00) 수업 w/ Wade

실습 이어**서**

내가 짠 코드

```jsx
function randomNum(min, max) {
    return Math.floor(Math.random() * (max - min) + min);
}

let lottoArr = [];
function makeLottoSet() {
    lottoArr.push(randomNum(1, 46));
    let lottoSet = new Set(lottoArr);
    if (lottoSet.size < 6) { return makeLottoSet() }
    return [...lottoSet].sort((a, b) => a - b);
}
console.log(`당첨번호 : ${makeLottoSet()}`);
```

→ set에 값을 입력하는 method를 몰라서 바보 같지만 함수 한번에 array에 한번 넣어주고 set화 시켜서 길이 보고 재귀호출로 실행해주는 방식을 선택했다..ㅎ 바보

내 의도에 맞게 짜려면

```jsx
function makeLottoSet2() {
    let lottoSet = new Set();
    while (lottoSet.size < 6) {
        lottoSet.add(randomNum(1, 46));
    }
    return [...lottoSet].sort((a, b) => a - b);
}
console.log(`당첨번호 : ${makeLottoSet2()}`);
```

이렇게만 짰어도 충분했다.

동기분께서 짠 코드(!) → 값을 입력받고 예외처리까지 다 해준 보기 좋은 코드

```jsx
function randomNum(min, max) {
    return Math.floor(Math.random() * (max - min) + min);
}

function tryLotto(...input) {
    if (input.length !== 6) {
        console.log('숫자를 6개 입력해야 합니다.');
        return;
    } else if (input.length !== new Set(input).size) {
        console.log('숫자를 중복되지 않게 입력해야 합니다.');
        return;
    } else if (input.some(v => !Number.isInteger(v) || v > 45 || v < 1)) {
        console.log('1부터 45까지 숫자 중 하나를 입력해야 합니다.');
        return;
    }
//some은 

    const selected = [];
    let count = 0;
    while (count < 7) {
        const selectedNum = randomNum(1, 46);
        if (!selected.includes(selectedNum)) {
            count++;
            selected.push(selectedNum);
        }
    }
    console.log(`당첨번호: ${selected.slice(0, 6).join(' ')} | 보너스: ${selected[6]}`);
    const nums = input.filter(v => selected.slice(0, 6).includes(v));
    switch (nums.length) {
        case 0: case 1: case 2:
            console.log('꽝!');
            break;
        case 3:
            console.log('★ 5등 당첨! ★');
            break;
        case 4:
            console.log('★★ 4등 당첨! ★★');
            break;
        case 5:
            if (input.includes(selected[6])) {
                console.log('★★★★ 2등 당첨!! ★★★★');
                nums.push(`보너스 ${selected[6]}`);
            } else console.log('★★★ 3등 당첨!! ★★★');
            break;
        case 6:
            console.log('★★★★★ 1등 당첨!!! ★★★★★');
    }
    if (nums.length > 0) console.log(`내가 맞춘 번호: ${nums.join(' ')}`);
}

tryLotto(1, 2, 3, 4, 5, 6);
/* 매번 다르겠지만 출력해보면
당첨번호: 17 3 19 14 44 12 | 보너스: 40
꽝!
내가 맞춘 번호: 3
*/
```

- JS 에서 이거 빼곤 다 truthy
0, NaN, false, null, undefined, ""

### **DOM**

- window 객체는 전역이고 아래 DOM, BM, JavaScript 객체를 가지고 있다.
- Document Object Model
- HTML 문서 내용을 트리 형태로 구조화하여 웹페이지와 프로그래밍 언어를 연결. 각각의 요소, 속성, 콘텐츠 표현 단위를 '노드(node)'라고 부른다.
- 트리화 해줘야 JS 엔진이 이해를 하는 것
- class로 가져오는 것은 array는 아니지만 arrayLike(유사배열객체)한 node를 가져온다.
- 따라서 다음과 같은 코드에서

```html
<body>
    점심 식단
    <article id="container">
        <ul>
            <li>탕수육</li>
            <li class="item-second">유산슬</li>
            <li>짜장면</li>
        </ul>
    </article>
    저녁 식단
    <article>
        <ul>
            <li>된장국</li>
            <li class="item-second">김치찌게</li>
            <li>해장국</li>
        </ul>
    </article>
</body>
```

→ 첫번째 article의 첫번째 li를 가져오고자 한다면, 

```jsx
let firstLi = document.getElementById("container").getElementsByTagName("li")[0];
```

이렇게 가져올 수 있다.

면접 볼 때 

물론 프로그래밍에 대한 지식이 있어야겠지만

약간 이성친구를 꼬시듯이 면접을 보자

나도 회사를 판단 해보는 시간이니까

일 잘하는 것에 재능은 필요없다. 하다보면 채워진다.

실무를 통해 배우는 것은 한계가 분명하다. 하던 거 또하고.. 하던 거 또 하고..