#### **211103 호준님(Licat) 수업**

**shadow DOM**

f12 - 개발자도구 - Preferense - Elements - shadow dom

Shadow DOM을 볼 수 있다.

[https://wit.nts-corp.com/2019/03/27/5552](https://wit.nts-corp.com/2019/03/27/5552)

 [Shadow DOM은 무엇일까? | WIT블로그

지난 몇 년 동안 “Shadow DOM”과 “Virtual DOM”이라는 용어를 들어보셨을 겁니다. 이들은 DOM과 관련이 있지만 매우 다른 개념을 가리킵니다. 이 문서에서는 shadow DOM이 무엇인지, 그리고 기존의 DOM

wit.nts-corp.com](https://wit.nts-corp.com/2019/03/27/5552)

shadow dom에 관한 정보 글

**DOM(Document Object Model)**

\- DOM이란 HTML 문서의 구조화된 표현'

\- (VSCode)htmltagwrap을 이용해주면 html tag wraping을 매우 손쉽게 간단히 할 수 있다.

\- <br> 태그가 <p> 태그 등의 안에 있을 때는 screen reader가 읽다가 br 태그에서 멈춰버려서 권장되지 않는다. 반응형 작업시에도 문제가 될수도 있어서 CSS로 개행하는게 좋다!

\- <a> 태그와 <button>이 상호 고려 될 수도 있겠구나..!

\- p 태그 안에 h1은 있을 수 없는 일

**Entity Code (e.g. &nbsp)**

\- [https://www.toptal.com/designers/htmlarrows/symbols/snowman/](https://www.toptal.com/designers/htmlarrows/symbols/snowman/)

 [Snowman HTML Symbol, Character and Entity Codes — HTML Arrows

HTML symbol, character and entity codes, ASCII, CSS and HEX values for Snowman, plus a panoply of others.

www.toptal.com](https://www.toptal.com/designers/htmlarrows/symbols/snowman/)

한창 유행이었던(?) 눈사람 entity code

\- 공백 같은 거라고 보면 된다.

**마크업**

\- section, article 쓰는 기준은 크기로 해도 괜찮을 것 같다.

\- article은 보통 독립된 주제

\- screen reader까지 고려하는 개발 습관 좋다!! →section 밑에는 항상 heading 태그가 들어가서 무슨 section인지 알려주도록 하자

\- footer 안에서는 구역을 나누지 않도록 되어있다. 다만 쓸 수 있도록 정해진 태그들은 있다.

\- label 태그의 for attribute와 input 태그의 name attribute 연동은 input을 /label 닫는 태그로 작성하면 둘을 같게 하지 않아도 묵시적 연동(?)으로 본다.

\- 휴대전화 등을 입력 받을 때 정규표현식으로 검증해주는 게 좋다. 이중, 삼중 검증해줘야 한다.

\- input 받을 때도 아주아주 조심해야한다. 그림 등으로 해킹할 수 있음. 정규표현식!

\- 스토리보드 짜기? → 기획 부분에서 할거임 (개발을 좀 아는 사람들이 기획을 해야 소통이 된다.)

**테이블 태그**

\- th 테이블 첫줄 (가운데 정렬이 되어 있다는 소소꿀팁) / td 이하 항목 / tr 상관 없이 테이블 1줄

4X3의 테이블을 만들고 싶다?

```
table>tr*4
```

뭐 이런식으로 하지 말고

```
table>(tr>th*3)+(tr>td*3)*3
```

이렇게 만들어줘라 semantic하게

\- 페이지 골격을 잡는데 table은 절대로 쓰지 않는다.

\- colspan, rowspan은 합치는 거다. 엑셀 합병하고 중앙정렬 처럼 합치는 이름 기준은 무너지는 경계 즉, 한줄 합치는 것은 colspan으로 해줘야 한다.

\- thead, tbody, tfoot 얘네가 무슨 기능이 있는 것은 아니다. 하지만 나중에 JS 작업할 때 사용되니까 생략하지 말 것!

**중간 Tip**

\- 튜토리얼 사이트보다는 공식 문서 MDN을 보자

**블록/인라인**

\- 블록 요소는 다 차지 일반적으로 한 row를 차지 / 인라인 요소는 자기 크기만큼 공간 차지

\- 인라인을 블록으로 바꿔준다고 해도 그 안에 블록 요소를 넣을 수 없다

잘못된 예

\- p 태그 안에 strong은 가능

\- hr, h1과 같이 같은 블록요소 가능은 하지만 권장되지 않는다.

\- 인라인 요소 목록은 한번 보고 알아둘 필요가 있음

\- 블록 요소 안에는 같은 블록 요소나 인라인 요소가 들어갈 수 있음

**html 끝**

---

**CSS 강의 시작**

\- CSS(Cascading Style Sheets)에서 cascading은 계단식 농법 같은 걸 말하는데 그래서 계단 위에서 아래로 흐르는 것처럼 맨 마지막 css가 우선적으로(?) 적용 된다.

\- 중요한 것은 selector, property, value

\- {}(중괄호)에서 각 선언들은 ;(semi-colon)으로 구분. 그런데 CSS 가중치 계산에 따라 달라질 수도 있다고 한다. 계산에 따른 가중치 비교에서 우선 적용되는 것들이 있다.

**id, class등을 통한 css 계산**

\- 기본적으로는 tag와 가까운 css일수록 가중치가 높다 // 인라인>내부>외부

\- 글씨 자체가 가지고 있는 margin, padding도 고려해야한다. 그래서 그런 변수들을 통제하기 위해 reset.css를 해준다.

```
h1 { color: red; }
```

이런식으로 작성하길 추천

**선택자(Selector)**

\- Selector도 상당히 많다.

\- id는 유일해야한다.

\- 형제 선택자에서

```
h1 + ul { color: red; }
```

이렇게 써주면 ul을 선택한 것이지 ~h1을 선택한 것~이 아니다.

```
<!-- emmet으로 .one tab 하면-->
<div class="one"></div>
```

이렇게 된다.

```
<!DOCTYPE html>
<html lang="ko">
  <head>
      <meta charset="UTF-8">
      <meta http-equiv="X-UA-Compatible" content="IE=edge">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>헷갈리는 선택자</title>
      <style>
      /*얘는 hello world2를 선택한다.*/
      .one.two { color: blue; } 
      /*얘는 hellow world3를 선택한다.*/ 
      .one .two { color: red; } 

      /*둘은 헷갈리기 쉽다.*/ 
      </style> 
  </head>
  <body> 
      <div class="one">hello world1</div> 
      <div class="one two">hello world2</div> 
      <div class="one">
          <div class="two">hello world3</div> 
      </div> 
  </body> 
</html>
```

\- 어떤 속성을 가지고 있냐를 기준으로도 선택할 수 있다.

\- 가상 클래스 선택자와 가상 요소 선택자는 다르다.

\- meta tag → viewport 같은 경우는 과거 작은 화면에 맞춰 작업해놨던 웹 화면이 높아진 디스플레이에 대응하기 위해 확대되는데 사용된다? 정도인듯

\- 형제 선택자는 뒤에 있는 애가 선택되는 거다 앞에 뭔짓을 해놨던 간에

**우선순위 계산법** \- 보통 4자리로 계산을 많이 한다. id > class > tag

\- rem은 root가 되는 html의 font-size의 영향을 받는다. / %의 경우도 부모가 가진 너비, 높이의 절반 / vw는 부모와 상관 없이 보이는 화면 기준
