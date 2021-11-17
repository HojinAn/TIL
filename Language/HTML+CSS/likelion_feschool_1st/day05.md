#### **morning qna**

**FE 개발자의 가장 기본 소양?**

바로 Layout 구현 능력!! 시작은 box모델부터

클론코딩으로 연습도 좋음. 우려되는 점? 획일화에 대한 염려 but 같은 기능이라도 다르게 구현해봤음을 강조하자!  
한번 본건 본게 아니다 - 공신 강성태 -> 백문이 불여일타!

#### **수업**

**box 모델**

\- float은 현업에서 안쓰지 않느냐? → 아직까지 쓰기는 한다. 네이버, 카카오 같이 많은 사용자를 접하는 회사는 다양한 지원을 해주니까 float 쓰긴한다.

\- 반드시 유지보수할 일이 있는 것 → 레거시 코드

레거시 코드란?

[https://ko.wikipedia.org/wiki/%EB%A0%88%EA%B1%B0%EC%8B%9C\_%EC%8B%9C%EC%8A%A4%ED%85%9C](https://ko.wikipedia.org/wiki/%EB%A0%88%EA%B1%B0%EC%8B%9C_%EC%8B%9C%EC%8A%A4%ED%85%9C)

 [레거시 시스템 - 위키백과, 우리 모두의 백과사전

2011년 기준으로, MS-DOS는 여전히 레거시 애플리케이션을 구동하기 위해 일부 기업에서 사용되고 있다. 레거시 시스템(legacy system)은 낡은 기술이나 방법론, 컴퓨터 시스템, 소프트웨어 등을 말한

ko.wikipedia.org](https://ko.wikipedia.org/wiki/%EB%A0%88%EA%B1%B0%EC%8B%9C_%EC%8B%9C%EC%8A%A4%ED%85%9C)

요약하자면 '말이 좋아서 유산이지 수정도 어렵고 읽기도 어려운 과거부터 남아있는 코드'쯤 되겠다

\- 레이아웃 구성에 있어서 정말 중요한 것 → 수평 정렬! 수직 정렬은 그냥 작성만 해도 자연스럽게 된다.(normal flow)

\- flex, grid를 하지 않고서도 수평정렬하는 법? → position+translateY이용(불편쓰,,)

transform:translateY(-50%) 이런식으로

\- block 요소를 inline 요소로 바꿨을 때, inline 속성이 가진 문제? → 세로 padding, width 때문에 inline 요소간에 의도하지 않은 여백이 발생

div css에 display: inline을 넣어주고서

```
<div></div>
<div></div>
```

이렇게 쓰면 div box 간에 간격이 아래와 같이 떨어져서 출력된다.

[##_Image|kage@kx8M7/btrj5c7QU1o/VLUo45HacbzFMyyJGwohz1/img.png|CDM|1.3|{"originWidth":189,"originHeight":153,"style":"alignLeft","filename":"blob"}_##]

왜 이렇게 될까?Enter가 들어가 있으면 공백을 글자처럼 인식하기 때문에 발생하는 문제다

어떻게 해결할 수 있을까?

Enter는 spacebar랑 같이 인식이 된다. → 따라서 1\. div끼리 붙여쓰기

```
<div></div><div></div><!--이렇게-->
```

하지만 우리가 보기에 줄바꿈을 안해준거는 불편하다.

2\. 부모 요소에게 font-size: 0을 준다. 그리고서 텍스트가 들어있는 요소에는 font-size를 준다 → 하지만 귀찮아!!

결론적으로 **inline 요소는 수평정렬때 잘 안써준다**!!

**중간 tip**

사내 추천 제도! → 이직이 잦은 시장이다 보니 회사 입장에서 뽑기 너무 스투뤠쓰! 어느정도 이미 검증된 사람 뽑을 수 있으니까 좋다 → 실력과 인맥 모두 잘 관리하자

**position**

**relative vs absolute**

그냥 box들을 쌓아가는 과정: normal flow 그런데 normal flow는 absolute를 인식하지 못한다.

\- absolute → 따로 좌표를 지정하지 않으면 원래 static이었으면 위치했을 곳에서 뜬다

position 속성은 언제 쓸까?

1\. 퀵메뉴, 팝업창

2\. 논리적 markup 순서를 위해서 사용되기도 한다(웹사이트에서 키보드 탭 누르면 포커스가 움직이는 것은 마크업 순서에 따라 움직이는 것이다.)

css는 마크업에 영향을 주지않고 시각적으로 보이는거에만 영향을 준다.

**sticky**는 가장 부모중 가장 가까운 요소로 가서 달라붙는다. 재밌는 요소 → 요런 것도 좋은 포트폴리오 될 듯

**좋은 공부 방법**

\- 스터디를 만들어라! 배우는 사람 뿐 아니라 준비해서 가르치는 사람에게 큰 도움이 된다!

\- 누군가에게 논리적으로 설명할 때 자신이 지식이 없었음을 깨닫게 된다

**float ([https://devahj.tistory.com/87)](https://devahj.tistory.com/87)**

<div>, <p>, <table>과 같은 **블록 속성**을 가진 객체를 정렬하는 가장 기본적인 방법

[##_Image|kage@r0PqW/btrj4r5hGZ6/770mF651E7gH21vkSARU41/img.png|CDM|1.3|{"originWidth":1142,"originHeight":701,"style":"alignLeft","width":440,"caption":"position이 최상단, float이 중간, normal flow가 가장 아래 &rarr; 서로 다른 층에 있기 때문에 서로를 알아 볼 수가 없다.","filename":"Untitled.png"}_##]

float된 요소 형제 요소들은 float을 못찾는다. 왜냐하면 normal flow에서 벗어났기 때문이다.

float이라는 속성을 주면 inline요소처럼 기본 block 요소의 크기가 사라진다. 그래서 w,h를 지정해줘야 한다.

+글씨와 같은 inline요소들은 float된 요소를 알아보도록 설정되어 있다.

ul로 인한 •은 inline요소여서 float (오호.. intersting)

float이 가진 문제를 해결하기 위해

현업에서는 clear-fix라는 class를 만들고 clear-fix하고 싶은 놈의 부모에 넣어준다 → 이런 놈들을 utility class라고 한다.

불필요한 요소들은 markup 작성해주지 않는 것이 좋다. 그래서 pseudo-class, pseudo-element 를 이용해서 float clear 등의기능할 때 쓴다.

문제가 발생할 경우를 미연에 방지하고자 float을 해제해주는 등을 하며 짜는 것을 방탄 웹이라고 한다. float이 나왔다 해제해주는 게 맞는 것 같다.

**강사님 책추천**

[https://www.aladin.co.kr/shop/wproduct.aspx?ItemId=21089367](https://www.aladin.co.kr/shop/wproduct.aspx?ItemId=21089367) 

 [HTML & CSS

아마존닷컴 웹개발 & 웹디자인 분야 No.1 베스트셀러. 간결한 예제와 결과 화면을 한눈에 볼 수 있는 방식으로 구성해 HTML과 CSS와 관련된 주제를 매우 쉽게 배울 수 있다.

www.aladin.co.kr](https://www.aladin.co.kr/shop/wproduct.aspx?ItemId=21089367)

**추가 조언들**

\- 레이아웃 짤 때 부모가 되는 요소의 높이값은 지정해주지 않는 것이 좋다 → 자식이 여기에 종속되어 버리니깐

\- nth-child

장점? 특정 것을 고를 수 있다

하지만 문제 다른 형제 태그들이 추가되면 그때 nth-child는 쓸모가 없어진다. 즉, 재사용성이 떨어진다.. nth-child를 쓸 때는 조심하자 그래서 현업에서는 ~nth-child~를 잘 안쓰고 class를 넣어준다.

\- id는 단일개체로만 가기 때문에 style을 입힐때 좋지 않은 방법이다.

\- 가상요소를 쓸땐 content라는 속성이 있어야지 브라우저 상에 나타난다. display선언도 필요

**img**

\- alt 값을 통해 이미지에 대한 설명! 하지만 이미지 태그 안에 이미지의 정보와 같은 text가 들어가 있다든지 중복 정보를 제공할 가능성이 있을 땐 alt의 값을 비워둔다. 하지만 alt가 아예 빠져버리면 그냥 src의 경로를 읽어버리므로 대참사가 발생한다. 따라서 alt는 항상 써놓자

\- vertical-align 등은 inline 요소에만 적용한다. 라인에서 글씨의 위치를 조정할 수 있는 것

\- inline요소는 width를 가지지 못하는데 img는 예외적으로 width를 조절할 수 있다.

**line height**

\- line의 높이를 element의 높이와 같게 만들어주면 수직정렬이 된다.

\- 의미없는 장식적인 이미지를 사용하고자 한다면 가상요소를 이용해서 넣어주면 된다 before, after 등으로

\- contain - 대체 콘텐츠의 가로세로비를 유지하면서, 요소의 콘텐츠 박스 내부에 들어가도록 크기를 맞춤 조절해줌.

**button**

type - submit, button, reset

button의 type이 없으면 default로 submit이다.

button 안의 글자들은 수직수평 정렬을 기본적으로 해준다

**flex**

flex를 집합이라 부르는 이유는 기능등이 정말 많기 때문이다. 크롬에서 개발자 도구로 보면 시각적으로 flex를 보여준다.

[##_Image|kage@kzGtw/btrj2e0rdvo/WkW6Twl5TfyBfEGWaBOsp1/img.png|CDM|1.3|{"originWidth":1920,"originHeight":736,"style":"alignCenter","filename":"blob"}_##]

\- 원래 div는 block element인데 flex를 주니까 display: flex가 적용되면서 div box들이 수평 정렬이 된다.

\- 새로운 display 속성이다.

\- flex는 복잡한 수직 수평 정렬을 쉽게 해주는 고마운 녀석이다

\- 부모의 속성을 통해 자식들을 컨트롤한다.

\- flex가 적용된 요소는 그때부터 flex-container가 되고 자식 요소들은 flex-item이라고 한다.

**flex vs. inline-flex?**

inline-flex는 자식들의 width만큼만 영역을 차지한다. // flex는 block처럼 영역을 다 차지한다

\- flex-direction의 기본값은 row다.

\- reverse 해주면 child의 순서까지 reverse 된다.

이유? flex-item들은 축(Axis)를 기준으로 정렬되기 떄문

**space around vs space evenly**

space around는 각 box들이 각자가 동일한 범위를 차지하도록 양쪽 정렬 // space evenlysms 완전히 동일 간격
