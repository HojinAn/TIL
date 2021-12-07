# 멋쟁이사자처럼 프론트엔드스쿨 w/ 제주코딩베이스캠프

## **오전(09:00~11:50) 수업 w/ Licat**

**수업**

- 어제 수업에서 테이블에 적혀있는 텍스트를 가져오는 구현을 요청한 사람(나..ㅎ)이 있는데 실무에서 그렇게 쓰이지는 않을 것이다. 보통 테이블에 적혀있는 table 각 row 이름과 key 값이 다를 확률이 높기 때문
- 이해가 안간다?? 필사 필사 필사가 진짜 도움이 된다
- filter 자체가 단순 for문을 넘어서기 때문에 for문 순회가 filter보다 더 적다고 무조건 좋은 건 아니다.
- 실무 시각화에서 D3와 Chart.js랑 비등비등하다.
- D3가 어려운것도 어려운 건데 Chart.js가 효율적이다. D3는 학습 비용이 너무 크다
간단한 차트 그리기에는 Chart.js가 가장 적합하다
- 프로젝트가 20억 짜리다? 3D로 좀 넣어주고~ D3로 열심히 하되 D3만 전문적으로 하는 인원이 투입되어 있을 것임
1억 짜리다? 그러면 D3는 오버스펙~

**손코딩**

1. 예쁘게 쓰기
    1. 글자가 많다고 해서 날려쓰지 말기
    2. 간격을 꼭 맞춰 쓰기
2. 화살표로 주석 달기(이해 안되는 부분에서 자유롭게 화살표로 이어서 주석)
3. 이해가 안되는 용어는 부연 설명 없이 해당 단어만 채팅창에 띄우기

- 글을 잘 쓰는 방법? → 다독, 다작, 다상량 → 양의 누적이 질적 변화로 이어진다.
- 머릿 속에서 알고 있는 내용이 설명하기에는 어려울 수도 있다.
- **프로덕트를 만드는 게 중요**하지 특정 개념을 이해하고 안하고는 중요한게 아니다!!

---

## **오후(13:00~18:00) 수업 w/ Licat**

- 실무에서는 견고한 코딩을 위해 const를 많이 쓰게 된다.
- JavaScript는 언어 자체가 인내가 필요한 언어
- addEventListener등에 function() {} 이렇게 해준 이유? → addEventListener등에 인자값이 그냥 올 수 없어서, 콜백함수가 와야한다.
- js파일을 html에 script link 해두면 해당 js 파일 안에 있는 변수를 다른 html내 script나, 다른 js 파일 안에서 쓸 수 있다.
- **생성자** new
- `x = 5`는 인간이 편하라고 해준 거고 실제로 컴퓨터는 `x = new Number(5)`
- `x = [ 1, 2, 3, 4, 5]`는 인간이 편하라고 해준거고 실제로 컴퓨터는 `x = new Array(1, 2, 3, 4, 5)`
- .sort((a,b) ⇒ (a > b ? -1 : (a < b ? 1 : 0))) → 이런 함수는 만든 사람이 그냥 이렇게 쓰라고 준 것이니까 너무 크게 고민하고 파고들지말고 일단 쓰자

### 면접질문에서 들을 수 있을만한 내용

**프로퍼티 플래그**

- 객체에는 프로퍼티가 저장된다.
**프로퍼티 플래그**란?
프로퍼티는 흔히 '키-값' 쌍의 관점으로만 보게되는데
플래그를 통해서 writable→ 쓸 수 있게, enumerable→ 순회할 수 있게, configurble등의 가능 여부를 바꿔줄 수 있다.
- 사실 프로퍼티 정확한 개념? 몰라도 된다.

**getter, setter**

- getter와 setter 알아야 하긴 한데 얘네가 면접 때 물어볼만큼 중요한지는..
- getter는 object의 property를 메소드? 함수? 등으로 불러오거나 얻어오기 위해서, setter는 세팅하기 위해서 사용하는 것

```jsx
let user = {
  name: "John",
  surname: "Smith",

  get fullName() {
    return `${this.name} ${this.surname}`;
  },
  
  set fullNameSet(value) {
    [this.name, this.surname] = value.split(" ");
  }
};

console.log(user.fullName); // John Smith

// 주어진 값을 사용해 set fullNameSet 실행
user.fullNameSet = "Hojun Lee";

console.log(user.fullName); // Hojun Lee
console.log(user.name); // Hojun
console.log(user.surname); // Lee
```

요것이 closure가 되기 위해서는?

```jsx
const user = (function () {
  let name = 'John';
  let surname = 'Smith';
  return {
    fullname: function() {
      return `${name} ${surname}`;
    }
  };
}());

user.fullname() // John Smith
user.name // undefined
user.surname // undefined
```

요렇게 써주자

- _name 이런 식으로 써준 것은 밖에서 건들지 말라는 것. 암묵적인 약속이지 수정을 하면 되긴 한다.
- **아예 만질수도 없는 것은 #**이 붙는다.
- 사실 event bubbling, method chaining 이런거가 물어볼만하다 → 그럼 이걸 알아야겠군!

**prototype**

- prototype이 뭐냐라는 질문? → 유전자
- 우리는 a라는 array에 sort()라는 method를 준적이 없는데 사용할 수 있는 것이, 부모로부터 상속받았기 때문이다.
- 부모를 계속 타고 올라가서 method가 있으면 실행한다.
- 엄마 constructor / 아빠 prototype(!)
- 객체를 가지고 있는 도구주머니를 프로토타입이라 한다? → property, method를 가지고 있는 집합
- prototype은 유전자다 계속 타고 올라가면 끝에는 null이 있고 그 다음이 Object.prototype이 있다.
→ 사실 이건 설계가 잘못 된 것 Array는 Array.prototype 위에 null이 있으면 좋겠는데
- 한동안 그래서 `__proto__`를 사용했다.
- 원래 a.prototype등과 같은 것이 있긴 했는데 구현이 엉망이니까 `__proto__`와 같은 것을 써준 것.
- 그래서 ECMACript가 나서서 정리를 해준 것
- 요즘은 `__proto__`를 써주는 것은 구식
- 어려운 개념이다. 솔직히 모른다고 코딩 못하는 것도 아니다. 대신 질문으로는 좀 나올 것이다.
- `__proto__`는 prototype에 접근하기 위한 방법이다. 비표준이었고 비표준이다.

```jsx
let animal = {
  eats: true
};

let rabbit = {
  jumps: true,
  __proto__: animal
};

// Object.keys는 객체 자신의 키만 반환합니다.
alert(Object.keys(rabbit)); // jumps

// for..in은 객체 자신의 키와 상속 프로퍼티의 키 모두를 순회합니다.
for(let prop in rabbit) alert(prop); // jumps, eats
```

→ 부모님꺼는 내꺼다

- 2015년 이후로 `Object.setPrototypeOf`, `Object.getPrototypeOf`가 `__proto__`와 동일한 기능을 수행해주면서 논란은 어느정도 잠식
- 개발자가 따로 할당하지 않아도 모든 함수는 "prototype"을 기본적으로 갖는다.
- constructor는 자기 자신을 가리키는데, 부모와 자신을 연결시켜 준다.

```jsx
//Object의 prototype
let obj = {};

alert(obj.__proto__ === Object.prototype); // true

alert(obj.toString === obj.__proto__.toString); //true
alert(obj.toString === Object.prototype.toString); //true
```

```jsx
// Array의 prototype 이야기
let arr = [1, 2, 3];

// arr은 Array.prototype을 상속받았나요?
alert( arr.__proto__ === Array.prototype ); // true

// arr은 Object.prototype을 상속받았나요?
alert( arr.__proto__.__proto__ === Object.prototype ); // true

// 체인 맨 위엔 null이 있습니다.
alert( arr.__proto__.__proto__.__proto__ ); // null
```

```jsx
// prototype : 유전자(상속받은 객체)
// __proto__는 [[Prototype]]에 접근하기 위한 방법
// __proto__는 비표준으로 시작했으나 지금은 표준의 부록에 실렸다.

function 사람(이름, 나이) {
    this.이름 = 이름;
    this.나이 = 나이;
}

let 호준 = new 사람('호준', 10);
let 재현 = new 사람('재현', 5);
console.log(사람);
/*
ƒ 사람(이름, 나이) {
    this.이름 = 이름;
    this.나이 = 나이;
}
*/
사람.prototype // {constructor: ƒ}
// constructor: ƒ 사람(이름, 나이)
사람.prototype.수명 = 100;
호준.수명 // 100
재현.수명 // 100
```

**class**

- class를 한마디로?
붕어빵들, 찍어내는 공장
- 클래스는 찍어내는 공장!
인스턴스는 찍혀져 나오는 생산품!
- class를 class 자체로 사용하면 안되고 instance를 사용한다.
- JS에서 과연 class가 필요한가?
- 클래스 - 붕어빵 찍는 틀
인스턴스 - 붕어빵
- JS의 class는 다른 언어의 class와는 다르다.
- 일각에서는 ~~syntax sugar, syntactic sugar~~라고 하지만 아니다!!
→ 하지만.. 아직 논쟁의 여지가 있다. 아예 sugar를 완전 벗어났다기보다는 조금 더 안정해진 것으로 보는 게 좋을 것 같다.
다른 강의에서는 그냥 설탕문법이라고 설명하고 있을 듯..ㅎ
- 어떤 때 사용할까?

```jsx
class User {

  constructor(name) {
    this.name = name;
  }

  sayHi() {
    alert(this.name);
  }

}

// 사용법:
let user = new User("John");
user.sayHi();
```

- 구조화 시켜서 뭔가 만들 때 class 사용
- 게임 만들 때도 class 많이 쓴다.
- '그냥 생성자 함수랑 똑같은 거 아니야??'라고 하는 사람도 있겠지만, 옛날 얘기다.
- 코뿔소 책을 제외하고는 완벽하다고 할만한 책은 없다.
→ 코뿔소 책은 첫장부터 보는 게 아니다. 사전처럼 보는 책
- 성공했었던 사례들은, 출판이었어요. 같이 출판한 경우는 다 잘되었어요.

- class 안에는 변수 선언 var, let, const 안쓰고 그냥 선언한다.
- class 안에는 comma(,)가 없다.

```jsx
class User {

  constructor(name) { // constructor는 자동으로 생성되는 놈
    this.name = name;
  }

  sayHi() {
    alert(this.name);
  }

}

// 사용법:
let user = new User("John"); // John이 constructor의 인자로 들어간다.
user.sayHi();
```

- class 안의 변수 등은 strict 엄격 모드다. (따로 해줄 필요 없이 class 안은 그냥 strict mode다)

```jsx
class User {
  constructor(name) { this.name = name; }
  sayHi() { alert(this.name); }
}

// 클래스는 함수입니다.
alert(typeof User); // function

// 정확히는 생성자 메서드와 동일합니다.
alert(User === User.prototype.constructor); // true

// 클래스 내부에서 정의한 메서드는 User.prototype에 저장됩니다.
alert(User.prototype.sayHi); // alert(this.name);

// 현재 프로토타입에는 메서드가 두 개입니다.
alert(Object.getOwnPropertyNames(User.prototype)); // constructor, sayHi
```

- 폴리필(완충재)? → 구 브라우저를 지원하기 위해서 문법을 채워넣는 것이 폴리필 ex. babel
- #변수 문법은 견고하게 JS를 만들기 위해 생겼다.

```jsx
class Rabbit extends Animal {
  hide() {
    alert(`${this.name} 이/가 숨었습니다!`);
  }
}
// 이 상황에서 animal에 hide는 없다.

let rabbit = new Rabbit("흰 토끼");

rabbit.run(5); // 흰 토끼 은/는 속도 5로 달립니다. // Animal로부터 상속받은 것
rabbit.hide(); // 흰 토끼 이/가 숨었습니다!
```

- JS에서 overloading은 없다.
- overriding은 부모의 method 명과 같은 method를 자식이 스스로 재정의하고 사용하는 것. 하지만 사실 부모의 method와는 무관하다고 봐도 상관이 없다.
- 클래스는 그냥 사용하는게 아니라 인스턴스등으로 할당하고 사용해야 한다.
- class 내 #변수는 class 밖에서 아예 접근이 안된다.
외부에서 접근하려면 getter등을 이용해줘야 한다.

```jsx
class Rabbit {}
let rabbit = new Rabbit();

// rabbit이 클래스 Rabbit의 객체인가요?
alert( rabbit instanceof Rabbit ); // true
```

```jsx
let arr = [1, 2, 3];
alert( arr instanceof Array ); // true
alert( arr instanceof Object ); // true
```

- 자바스크립트는 다중상속이 안된다. 단일상속만 허용
- 다중 상속이 안되는 이유? → conflict 발생 가능성
- 부모의 부모 x가 10, 부모이 x가 30 일 때, 나의 x는?? → 30! 왜? 가까우니깐 ㅎ
- function scope를 정해놓은 이유도 상당히 많다. 메모리 효율도 있고 등등
- 내일 진도
비동기 프로그래밍, 스택, 힙, callback hell, promise, async, await,