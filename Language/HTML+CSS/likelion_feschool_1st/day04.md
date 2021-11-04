morning qna

1. zoom 입장 소리 제거
2. css 작성 순서?
3. 클래스 선택자 보강
4. 우선순위 계산법 <tip> class 11개 vs id 1개+class 1개 → id 포함된게 우선순위 더 높다 / 상속까지 생각해야 된다🤮 css 책에서는 선택자 가중치 점수 계산법만 30페이지가 넘는단다..^^
- 재현(Wade)님 tip -

무에서는 주로 클래스 선택자를 많이 사용합니다. ID 선택자는 중복을 허용하지 않으니 사용하기 힘들고, 요소 선택자는 모든 요소에 영향을 주기 힘드니 조심스럽게 사용해야하죠. 클래스 선택자는 중복을 허용하고 이름도 요소의 용도에 맞게 지어놓으면 클래스의 역할을 알기 쉬워져서 좋은 것도 있습니다.
저렇게 점수로 선택자를 계산한다라고 아는건 실무자들도 잘 모르실거에요. 여러분들 이런 지식을 베이스로 깔고 취업하시면 분명 다른 실무자들과 차이가 생기실거에요

box 모델부터~

오해들 하는게 border는 background에 들어가 있지 않다.

width, height는 딱 box의 사이즈

padding은 background 색깔의 영향을 받는다.

border는 background 색의 영향 X

하지만 box-sizing: border-box; 을 css안에 넣어주면 border padding도 안으로 들어온다.

emmet $는 숫자에 따라 증가하는 값을 반영해준다

class 이름 짓는 것도 컨벤션이 따로 있다

margin 병합현상

child가 parent의 영역을 벗어날 때 의도한것이 아니라면 잘못 overflow된것이므로

우선 markup이 잘못된 부분을 찾아줘야 한다.

그리고 CSS 확인해줘야 함

child box가 포함되는 영역은 parent box의 border, padding 제외한 내부 box 영역

child box의 포함 영역 기준은 왼쪽 위부터

font 적용시(구글 font 사용법 참고) - 강의안 참고

1. 링크로 넣는 방법
2. import해서 쓰는 법이 있는데

보통 import를 선호한다고 한다.

폰트사용 저작권 의식을 갖자! 조심하고

Gmartket 폰트가 예쁘다고

넥슨 Lv.1도

나눔~

배달의 민족 주아체

무료 웹폰트 사이트 font awsome 같은 곳에서 가져다가 로고처럼 쓰는 방법도 있다. 좋음

태그는 속성들의 mapping일 뿐이다.

font는 사용하면 안되는 태그다!! 웹표준에 걸리기 때문에

color code에서 #999 랑 #999999는 같다.

#FF9933 -> #f93 두자리 같을 때는 1개로 쓸수 있다

absolute의 기준이 되는 것은 relative고, relative가 없다면 전체 body가 기준이다.

opacity(는 요소 전체가 투명해짐)나 rgba에서 alpha로 투명도 조절 가능

부모요소에 position 속성(fixed, relative,)이 있으면 absolute가 눈치를 보게된다.

position:absolute는 부모 tag를 타고 올라가다가 마주치는 static이 아닌 position(absolute,relative,fixed 셋중 하나)을 갖고 있는 부모 tag 기준으로 잡는다

ppt에서 box를 맨 앞으로 맨 뒤로 할 때 방법은 z-index를 이용 z-index 값이 클수록 앞으로 온다.

그림 그릴 때 box-sizing: border-box;를 꼭 쓰자. 나중에 헷갈린다.

귀만 바깥으로

얼굴 요소들은 face를 부모 태그로 다 child화 되어있다!

부모 요소 안에 들어가야 하는 자식 요소에 css float이 들어갔을 때 포함되지 않고 붕 떠버릴 수 있다.

이 때 해결법

1. 부모 요소에 overflow 속성을 추가
2. 부모 요소의 높이 값등 크기 자체를 바꿔준다(좋은 방법이 아니므로 비추)
3. clear 속성을 사용한다.

fixed 연습 추천 : 네이버 첫화면 우측하단에 '다크모드로보기' ,'탑으로가기' 2개 fixed 예제 등 다양하게 실습해보셔도 좋습니다.

p태그는 그 자체로 style을 주지 않기