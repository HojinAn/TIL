### 오전 수업(09:00~1150) 호준님(Licat) 수업

**Morning QnA**

1. 피그마 활용한 과제? 와 같은 테스트가 코딩 테스트로 나오는가?
→ 물론이다. 구현해봐라, 서버를 주고 서버 통신하게 하라 등의 과제가 나올 수 있다. 단순 1박 2일이 아니라 2박3일 길게는 일주일 요새는 개발자 뽑기가 어려우니까 포트폴리오 보기만 하는 곳도 있고 코테 비관론자들이 계신다. 코테는 주니어를 뽑는데에 필요하지 않다. 또, 코테 이정도는 해야지 생각으로 하시는 분도 계신다.
제주코베 통해 취업 후에도 관계 끝나는게 아니라 출제된 문제를 다시 함께 문의하는 경우도 있었다.
2. 일반 면접은 무엇을 질문하는가?
→ 이 사람이 우리 회사 문화 fit에 맞는지를 확인하기 위한 질문
위니브처럼 칼퇴를 절대적으로 권장하는데 너무 열정이 넘치고 야근을 원하는 사람은 안맞을 수도(!)
자기 성장의 욕구를 갖고 있는 사람을 원한다.
코딩은 어쩔 수 없이 시수 즉, 코딩하는 절대적인 시간의 양이 필요하다.
3. 나 못할 것 같은데?ㅠㅠ
→ 어려운 구간에서 이런 생각들을 하게 되는 것 같은데 소화할 시간이 필요하다. 내 손으로 직접 뭔가를 만들어보면서 익숙해지는 시간이 필요하다.
익숙해질 때까지 버티는 거다. 귀동냥으로도 실력은 올라간다. 버티면 된다! 다만, 귀도 닫고 아무것도 안하겠다 생각하면 아무것도 안될 것
내가 느끼는 불안감을 꺼내서 해결할 수 있도록 해주는 게 좋다.
4. 강의속도 유지
5. 암기. 어디까지 암기를 해야할까?
→ 자주 사용하는 게 뭔지 모르는데 뭘 암기할지 모르는데
어느정도의 암기는 필요하다. 많은 구현으로 익숙해지는 것이 중요하다.
어떻게든 해내겠다는 의지→ 양이 많아진다. → 양이 쌓이다 보면 질적 변화가 일어나는 시기가 온다! 절대 조급 ㄴㄴ
6. 퀴즈 풀이
    ```html
    <ul>
        <li>Apple</li>
        <li class="a">Mango</li>
        <li class="a">Banana</li>
        <li>Melon</li>
        <li>Strawberry</li>
    </ul>

    ```

    위 마크업에서

    ```css
    .a + li { background:red;}
    li + li + li { font-size:30px;}
    ```

    두 선택자들에서
    1. 어떤 글자들(li 태그)이 빨간 배경이 될까?
    2. 어떤 글자들(li 태그)의 글자 크기가 변경 될까?

    - 정답
        1. Banana, Melon
        2. Banana, Melon, Strawberry


__수업 범위 관련__
~~perspective는 장인의 레벨이지 주니어 레벨이 아니라 판단 진행 않기로~~

**수업 시작**

→ 어제 작업하던 과제003 페이지 마크업, style 이어서

- 구체적으로 명시 안해주면 가독성이 떨어진다!

- 피그마에서 html, css를 다 뽑아낼 수 있다. 디자이너가 작업해서 올린 걸 피그마가 일단 자동적으로 만들어준다. ctrl+클릭 : 으로 선택 → alt+클릭 : 간격보기

- __그러면 개발자들이 직접 만드는게 의미가 있나?__
→ 우선 코드가 깔끔하게 안나온다. 특히, 나중에 JS 붙일 때 힘들어진다. JS까지 해주는 자동화 도구들이 나온다 해도 아직 힘들지 않겠나 생각이 든다.

- 개발 자동화 툴이 있는데 완성도가 높다고 해서 써봤지만... 향후 10년간은 걱정없을 듯 싶다..😂

- 소방수 활동
마크업, CSS 엉망인 경우도 있다.
→ 너무 심한 건 포기하기도..ㅎ
소방수는 어찌됐든 밤을 세야 한다😂 돈을 상당히 많이 받기 때문에 3개월 일하고 몇개월 쉬고 이렇게 한다.
다만, 정신력이 강해야 한다. 실력은 베이스고

중간 QnA
__깃헙 관리?(Wade answer)__
-> <U>프로젝트 하나당 한 레퍼지토리</U>로 관리하는것을 추천드립니다. 왜냐면 레퍼지토리에 <U>한개의 README.md 파일</U>이 붙게 되는데 README 에 프로젝트의 설명을 잘 적어 놓으시는 것이 <U>프로젝트 파악에 중요</U>하기 때문입니다. 예를 들어 프로젝트에 사용한 기술 스택이라든지, 툴이라든지, 개발 이슈에 대한 내용도 적어 놓을수 있고요 ㅎㅎ 프로젝트 하나 하나를 소중히 관리해주시면 포트폴리오로 깃허브를 제출하실때도 많은 가산점을 받으실 수 있을거에요

- -webkit-이란 웹브라우저에 따라 지원안하는 것일 떄 앞에 적어주자.(크롬 어떤 버전에는 box가 사용되지 않는다.)

> 표기법  
> co_info 이런 방식은 snake 방식  
> coInfo 이런 방식은 camel 방식

- 오늘 실습에서 예매하기 예고편과 같은 버튼은 article(한 가지 정보를 담는 틀) 안에 넣어서 묶기에는 적절하지 않은 듯 하다.

> 깨알 팁  
> HTML,CSS 동영상 강의 같은 거 2배속으로 뇌이징하기  
> 기업문화는 잘 안바뀐다. 어떤 유명한 기업이라도 싸이코 보존의 법칙(?) 마크업을 좀 안이쁘게 짰다고 상사가 욕을 박는다? 버티다가 마음의 상처만 받고 그만두지 말고 그냥 나와라 개발자를 원하는 좋은 회사들 많다. 그렇게 나온 회사는 그냥 적지 말아라. 그동안 뭐했냐? 그건 적절한 답변을 준비해야함  
> 스타트업 취업 추천 성장에 굿굿  
ex 🥕같은 회사도 서비스와 개발자가 함께 성장하는 경험
대기업은 이미 성장된 서비스는 서비스와 내가 함께 성장을 느끼기 힘듦
보통 이직시 직전 회사 연봉의 30%가 국룰(?)
아주 많은 유저, 트래픽에서 성장을 경험하는 것도 좋은 경험 추천

- float은 어떤 display에? inline-block에는 안되는 모양 일단

- a태그간  Enter(new line)을 인식해서 발생하는 문제해결
1. float 이용
2. 개행하지 않고 a 태그끼리 붙여 작성하기



### 오후 수업(13:00~17:50) 호준님(Licat) 수업

_오전 과제003 이어서_

웹 접근성까지 고려한 스킵내비게이션

**svg 실습**

html 같은 코드로 적혀있다.

위니브 캐릭터 선택 or 인터넷 캐릭터

png → svg 변환 채색

**perspective**

팔게 너무 많아서 수업 시간 한거만 다루자 추가적인 건 혼자하기로

**hover, active, focus**

넣어준 box에서 효과가 자연스럽게 일어나게 해주려면 transition을 그 box에 넣어줘야 한다. 효과 :active 이런곳에 넣어주면 발생할때만 일어나고 갑자기 돌아간다

**transition, transform**

transition-timing-function이란 간단히 말하면 linear은 일정한 속도로 변하고 cubic-bezier 등을 통해서 좀 더 다이나믹하게 바꿀 수도 있다.

그때그때마다 mdn등 잘 검색해서 사용하기

transform을 권장한다는 얘기가 있다. → transform의 속도에 관해 이야기하는 posting 참고

transform: rotate(360deg) scale(2) → 이렇게 쓸 수도 있다

**웹페이지 렌더링**

파싱(변환)

DOM Tree

실제 나무를 뒤집은 모습

DOM Tree를 제대로 이해하고 있지 못하면 나중에 JS 가서 힘들다.

JS로 해줄 일들이 DOM Tree에서 자손 태그를 만들고 막 그런 일을 해줄 거임

transform은 GPU를 사용하기 때문에 빠르다.

WASM(Web Assembly~) 이용해서 게임 만들때 transform등 잘 이용한다.


**transition vs. animation**
animation이 transition보다 정밀한 구현이 가능하다.

- naming 규칙 → JS 가서 자세히

시간 다룰 때 보통 ms까지 쓰지 μs까지 쓰지는 않음

iteration-count는 보통 쓸일이.. 보통 쓰면 infinite를 씀

- 과제
    
    사각형이 11시 → 1시 → 5시 → 7시 갔다가 돌아가기 총 6s
    
    정답: 092.html로 있음
    

- keyframe 안에 또 다른 keyframe을 넣을 수 있을까?

→ 아마 예제가 있을거 같은데 찾아보자

animation 실행시 다시 처음 상태로 돌아가는 것 어떻게 해결? → animation-fill-mode를 사용하면 마지막에 멈춘다.

step(n): n단계동안 딱딱 끊어져서 animation하게 해준다.

디자이너에게 처음 요구할 때부터 몇개를 몇px로 달라고 요구하는 게 최고 따라서? 디자이너랑 친하게 지내자

**perspective(원근법)**

언급+과제 → QnA

perspective가 작을 수록 더욱 눈 앞에 온 것과 같다. 클 수록 멀리 있는 느낌

[https://imjignesh.com/how-css-perspective-works/](https://imjignesh.com/how-css-perspective-works/)

실습해보기 좋다.

perspective-origin: 50% 50%가 default다.

**perspective 통해 회전 할 때 문제점?**

→ 뒤집혔을 때도 뒷면에서 글씨가 보인다.

앞뒷면이 다른 걸 보고 싶다고 한다면

뒷면카드를 하나 더 붙여서 해결해야 한다!

**perspective 좋은 예제들 사이트**

[https://3dtransforms.desandro.com/card-flip](https://3dtransforms.desandro.com/card-flip)

이걸 많이 사용하는가?

FE개발자의 의지에 따름

**오늘의 실습 코드**

> 상기 perspective의 문제점을 해결하기!

```html
<!DOCTYPE html>
<html lang="ko">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>card</title>
    <style>
        .scene {
            display: flex;
            justify-content: center;
            align-items: center;
            width: 500px;
            height: 500px;
            position: relative;
        }
        .scene .cont-card {
            width: 300px;
            height: 300px;
            perspective: 400px;
        }
        .scene .cont-card .item-card {
            width: 100%;
            height: 100%;
            backface-visibility: hidden;
            transition: all 2s;
        }
        .scene .cont-card .item-card {
            position: absolute;
        }
        .scene .cont-card .item-card.front{
            background: aqua;
            transform: scale(0.3) rotateY(720deg);
        }
        .scene .cont-card .item-card.back {
            background: yellow;
            transform: scale(0.3) rotateY(540deg);
        }
        .scene .cont-card:hover .item-card.front {
            transform: scale(1) rotateY(180deg);
        }
        .scene .cont-card:hover .item-card.back {
            transform: scale(1) rotateY(0deg);
        }
    </style>
</head>
<body>
    <div class="scene">
        <div class="cont-card">
            <div class="item-card front">
                <h1>앞면입니다</h1>
            </div>
            <div class="item-card back">
                <h1>뒷면</h1>
            </div>
        </div>
    </div>
</body>
</html>
```