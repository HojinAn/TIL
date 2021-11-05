### FE 개발자의 가장 기본 소양?

레이아웃 구현 능력!!

시작은 box모델부터!

한번 본건 본게 아니다 -공신 강성태

클론코딩을 했을 때 → 획일화에 대한 염려? 같은 기능이라도 다르게 구현해봤음을 강조하자!

수업

box 모델

float은 현업에서 안쓰지 않느냐? → 아직까지 쓰기는 한다. 네이버, 카카오 같이 많은 사용자를 접하는 회사는 다양한 지원을 해주니까 float 쓰긴한다.

반드시 유지보수할 일이 있는 것 → 레거시 코드

레이아웃 구성에 있어서 정말 중요한 것 → 수평 정렬! 수직 정렬은 그냥 작성만 해도 자연스럽게 된다.

flex, grid를 하지 않고서도 수평정렬하는 법

inline 속성이 가진 문제? → 세로패딩? width? inline 요소간에 의도하지 않은 여백이 발생

어떻게 해결할 수 있을까?

1. Enter는 spacebar랑 같이 인식이 된다. → div끼리 붙여쓰기 하지만 우리가 보기에 줄바꿈을 안해준거는 불편하다. → 그래서 인라인 요소로 수평 정렬은 잘 안해준다.
2. 부모 요소에게 font-size: 0을 준다. 그리고서 텍스트가 들어있는 요소에는 font-size를 준다 → 하지만 귀찮아!!

결론적으로 inline 요소는 수평정렬때 잘 안써준다!!

display 

position

relative vs absolute

그냥 box들을 쌓아가는 과정: normal flow

normal flow 애들은 absolute를 인식하지 못한다.

사내 추천 제도! → 이직이 잦다 보니 회사 입장에서 뽑기 너무 스투뤠쓰! 어느정도 이미 검증된 사람 뽑을 수 있으니까 좋다

absolute → 따로 좌표를 지정하지 않으면 자신의 위치에서 뜹니다 ㅎㅎ → 무슨 말? 공부해보자

position 속성은 언제 쓸까? → 퀵메뉴, 팝업창

논리적 markup 순서를 위해서 사용되기도 한다

사이트 들어가셔서 키보드 탭 누르시면 마크업 순서에 따라 포커스가 움직여요

css는 마크업에는 영향을 주지않아요 시각적으로 보이는거에만 영향을 줘요

sticky는 가장 부모중 가장 가까운 요소로 가서 달라붙는다. 재밌는 요소  → 요런 것도 좋은 포트폴리오 될 듯

- 좋은 공부 방법!
    - 스터디를 만들어라! 배우는 사람 뿐 아니라 준비해서 가르치는 사람에게 큰 도움이 된다!
    - 누군가에게 논리적으로 설명할 때 자신이 지식이 없었음을 깨닫게 된다

float

<div>, <p>, <table>과 같은 **블록 속성**을 가진 객체를 정렬하는 가장 기본적인 방법

float된 요소 형제 요소들이 float을 못찾는다

즉, normal flow에서 벗어난다

float이라는 속성을 주면 inline요소처럼 기본 block 요소의 크기가 사라진다. 그래서 w,h를 지정해줘야 한다.

글씨와 같은 inline요소들은 float된 요소를 알아보도록 설정되어 있다.

ul로 인한 •은 inline요소여서 float

현업에서는 clear-fix라는 class를 만들고 clear-fix하고 싶은 놈의 부모에 넣어준다 → 이런 놈들을 utility class라고 한다.

불필요한 요소들은 markup 작성해주지 않는 것이 좋다.

그래서 pseudo-class, pseudo-element 를 이용해서 float clear 등의기능할 때 쓴다.

position이 최상단, float이 중간, normal flow가 가장 아래 → 이렇게 서로 다른 층에 있기 때문에 서로를 알아 볼 수가 없다.

![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/3e9f44bd-cd3b-42a4-a0c8-281e1df7fd99/Untitled.png)

강사님 책추천

![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/8df1854a-2372-46dc-8856-ade0361f87c1/Untitled.png)

레이아웃 짤 때 부모가 되는 요소의 높이값은 지정해주지 않는 것이 좋다 → 자식이 여기에 종속되어 버리니깐

nth-child의 장점은 특정 것을 고를 수 있다는 장점은 있지만 다른 형제 태그들이 추가되면 그때 nth-child는 쓸모가 없어진다 → 재사용성이 떨어진다.. nth-child를 쓸 때는 조심하자 그래서 현업에서는 nth-child를 잘 안쓰고 class를 넣어준다.

id는 style을 입힐때 좋지 않은 방법이다. 단일개체로만 가서

가상요소를 쓸땐 content라는 속성이 있어야지 브라우저 상에 나타난다.

- 제섭님 필기 훔쳐오기 ㅎ
    
    1) id로는 스타일링 하지 않기
    2) div -> block 속성이기에 width 필요 없다.
    3) clear -> 앞에 있는 float 형제 요소를 해제할 때. 즉, 필요 없었음.
    4) id와 class는 구분하기.
    5) :: 는 가상요소. 가상요소에는 2가지가 필요함.
     5-1 content : ''; 
     5-2 display : block
    

alt 값을 통해 이미지에 대한 설명! 하지만 중복 정보를 제공할 수도 있으니까 alt의 값을 비워둔다. 하지만 alt가 아예 빠져버리면 그냥 src의 경로를 읽어버리므로 대참사가 발생한다. 따라서 alt는 항상 써놓자

vertical-align 등은 inline 요소에만 적용한다!

라인에서 글씨의 위치를 조정할 수 있는것

inline요소는 width를 가지지 못하는데 img는 예외적으로 width를 조절할 수 있다.

line height

line의 높이를 element의 높이와 같게 만들어주면  수직정렬이 된다.

의미없는 이미지를 사용하고자 한다면 가상요소를 이용해서 넣어주면 된다 before, after 등으로

contain - 대체 콘텐츠의 가로세로비를 유지하면서, 요소의 콘텐츠 박스 내부에 들어가도록 크기를 맞춤 조절해줌.

button의 type - submit, button, reset

button의 type이 없으면 기본적으로 submit이다.

button 안의 글자들은 수직수평 정렬을 기본적으로 해준다

문제가 발생할 경우를 미연에 방지하고자 float을 해제해주는 등을 하며 짜는 것을 방탄 웹이라고 한다.

float이 나왔다면 해제해주는 게 맞는 것 같다.

flex : 집합

집합이라 부르는 이유는 기능등이 정말 많기 때문

크롬도 시각적으로 보여준다.

원래 div는 block element인데 flex를 주니까 display: flex가 적용되면서 div box들이 수평 정렬이 된다.

1. 새로운 display 속성이다.

display

- flex vs. inline-flex?
    
    flex는 block처럼 영역을 다 차지한다
    
    inline-flex는 자식들의 width만큼만 영역을 차지한다.
    

flex전에 수직가운데정렬해줄때 좋은 방법은

transform:translateY(-50%) d이렇게 해주는게 좋다.

flex는 이렇게 복잡한 수직 수평 정렬을 쉽게 해주는 고마운 녀석이다

부모의 속성을 통해 자식들을 컨트롤한다.

flex가 적용된 요소는 그때부터 flex-container가 되고 자식 요소들은 flex-item이라고 한다.

flex-direction의 기본값은 row다. 

reverse는 child의 순서까지 reverse 된다.

이유? flex-item들은 축(Axis)를 기준으로 정렬된다.

- space around vs space evenly
    
    같은 여백으로 양쪽 정렬
    
    evenly 완전히 똑같은 여백을 각각의 item마다 적용