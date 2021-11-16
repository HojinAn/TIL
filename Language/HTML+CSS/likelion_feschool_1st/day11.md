## 오전(09:00~11:50) 수업 by Licat

### **morning break**

- 과제는 내일 재현님과 함께
- 코드 리뷰는 멘토들이 해줄 것, 재현님 코드는 재현님 시간에
- 면접 질문은 노드까지는 가야..
- 비전공자는 코테 빡센 기업보다는 좀 쉬운 코테 회사를 노려보자
- br 태그에 관하여 → 너무 많은 br 태그는 금지라 생각하자
많은 기업들이 사용하고 있기 때문에 금지라기보다는 권장으로 방향을 바꾸자
대표님 깃헙 자료 106_br.html 참고
의미없는 줄바꿈이면 의미 없는 태그(ex. div class="br")가 낫지 않느냐는 의견도

결론: 개행에 이유가 있을 것이니 개행의 목적에 맞게 사용하자!
- 디플 홈페이지를 보면 버튼을 flex로 해놨는데 외국 기업은 flex를 많이 쓰는 경향이 보인다.
class명에 grid가 있길래.. 환경에 따라 그리드로 구현한 국가도 있겠다는 생각
- 모듈화
- 관심 있는 기업이라면 홈페이지 사이트 쯤은 한번 분석(무슨 태그를 썼고, 무슨 언어로 만들었는지)해보자

### 수업

**로컬 font 적용해보기**

- 

[Google Fonts](https://fonts.google.com/)

[눈누 - 상업용 무료한글폰트 사이트](https://noonnu.cc/)

- @규칙

[@-규칙 - CSS: Cascading Style Sheets | MDN](https://developer.mozilla.org/ko/docs/Web/CSS/At-rule)

- 폰트는 용량이 큰 편이라 1~2개 사용할 것 권장
- 폰트 저작권은 꼭꼭 확인하기. 다만, 내용증명 날라와도 너무 당황하지 말고
- font-set으로 묶을 때는 당연히 같은 글꼴끼리만 해야한다.
- 한 글자만 사용한다 or 정말 적은 부분만 사용하는 font가 있다면 이미지로 변환해서 띄우기도 한다. 글자 조금 쓰겠다고 font 로딩하면 너무 용량이 낭비다.
- 폰트 타입 관련
    - 폰트 변환 사이트에서 다른 타입으로도 넣을 수 있음.
    - format
        - truetype(인쇄글꼴과 화면글꼴이 같음)
        - eot(embeded-open-type, 익스플로러 8 이하)
        - woff (익스플로러 9 이상)등이 있음
- 구글 링크 가져올 때 써있던 preconnect에 관하여 rel="preconnect" 옵션
    - 현재 페이지가 외부 도메인의 리소스를 참고하는 것을 브라우저에게 알려 미리 외부 도메인과 연결을 설정할 수 있게 해준다.
    - preconnect를 사용하면 브라우저가 사이트에 필요한 연결을 미리 예상할 수 있다. 
    브라우저는 필요한 소켓을 미리 설정할 수 있기 때문에 DNS, TCP, TLS 왕복에 필요한 시간을 절약할 수 있게 된다.
    - 결론적으로 말하자면 사이트 도메인 내에 업로드된 웹폰트가 아닌경우 이를 브라우저에게 알려줘서 미리 사전작업을 하게 해서 빠르게 연결할 수 있게 하는 역할을 하는 것이다.
- 회사 가면 폰트 관련된건 이미 처리가 되어있을 수도 있다.
- 웹 폰트 최적화 방법

[https://velog.io/@vnthf/%EC%9B%B9%ED%8F%B0%ED%8A%B8-%EC%B5%9C%EC%A0%81%ED%99%94-%ED%95%98%EA%B8%B0](https://velog.io/@vnthf/%EC%9B%B9%ED%8F%B0%ED%8A%B8-%EC%B5%9C%EC%A0%81%ED%99%94-%ED%95%98%EA%B8%B0)

- 폰트 용량? 등의 문제 해결하는 건 회사마다 정해진 게 있긴 할거다. 그래서 사실 sub_set까지 이용하는건 좀 과하다 싶긴한데 결론적으로 회사마다 다를것
    
    → 참고 사이트 
    
    [NAVER D2](https://d2.naver.com/helloworld/4969726)
    

**flex**

- flex할 때 골격부터 잡고 가자
- FE 개발자 가장 중요한 부분은 HTML, CSS다!
- flex-basis → 주축에 대한 공간차지
- flex-shrink → 창을 줄일 때 줄어드는 속도? 0로 해주면 자기 공간을 양보할 생각이 없는 것

- **실무에서 홈페이지를 만든다?**
    
    → 기존에 가지고 있던 header, menu bar, footer 등등. html 코드들을 가져와서 class, style 정도 바꿔서 똑같이 넣을 것. 즉, 모듈화 해서 사용
    효율성 측면에서도 좋지만, 검증된 코드들(특히, 회사에서 기존에 안정적으로 잘 사용하고 있던 것들)을 이용하는 것이 더 안전하다.
    
- 오늘 001. flex 폴더에서 만든 순서처럼 다 모듈화해서 만들고 나중에 홈페이지에 딱딱딱딱 넣는 순서로 만들거임
- 내부 bar는 보통 ul, li로 만든다.
- 남들의 포트폴리오를 엿보는 것은 정말 중요하다!
- em을 쓸 것인가, rem을 쓸 것인가?
→ 근데 사실 rem이 계산하기 쉽긴 하다.

[Why designers should move from px to rem - and how to do that in Figma](https://uxdesign.cc/why-designers-should-move-from-px-to-rem-and-how-to-do-that-in-figma-c0ea23e07a15)

- 질문에 따른 좋은 링크는 db처럼 저장해놓기

---

## 오후(13:00~18:00) 수업 by Licat

- 로고를 맨 왼쪽에 두고 나머지 메뉴를 오른쪽에 두고싶다면?
→ margin-right: auto
- 폰트 어썸

[Font Awesome](https://fontawesome.com/)

- 안정적으로 쓸꺼면 cdn을 얼마나 쓸지를 고민해야한다. cdn 서버를 너무 많이 활용하면 서버가 느려질 수도 있다.
ex. 카카오 전사 서비스 30분간 마비 → cdn 서버 마비
암튼 cdn을 쓸거면 cdn 관련 이슈를 꼭 염두해둬야 한다.
cdn을 쓰고 안쓰고는 전사 정책이라서 선호에 따라서 움직이지 않는다는 사실을 알아두자
- icon 크기 font-size로 컨트롤
- order를 이용해서 정렬을 할 수 있다.
- 카드 vs 타일?
구분하는 사람도 있고 안하는 사람도 있고
- 카드 뒤집기 등의 문서에서는 카드 하나를 article로 묶어도 되겠지만 그냥 바로 continer, card class로 접근할 수도

**layout 실습**

→ 전체를 flex주고 wrap으로 감싸줘서 header에 width 100%, main에 width 100% 줘서 footer는 자동적으로 밑으로 떨어지게 해준다.

- div, span은 최후의 수단
- 실력이 좀 되는 사람들은 지금부터 회사 서칭을 좀 해야한다. 피그마 등을 주면 2박 3일이라도 걸려서 해결할 수 있으면 슬슬 회사를 알아보면 좋음
8차까지 보는 회사도 있고 → 이러면 보통 4~5개월다 준비를 해두고 계속해서 접수를 해둬야 한다. 눈치껏 잘 하자 8차까지 가서 떨어지지 말고. 수습 기간 눈치껏 잘 하자!!
- 하지만 어차피 코테를 통과 못하면 아무것도 할 수 없다..
- 프로그래머스 카카오 코테 문제가 아주 깔끔하게 잘 되어있다. 풀어볼 것을 권함
- 일단 답을 외워서 익숙해질 때까지
- 수업시간에 하시는 말씀을 받아적습니다.

## 수업 마치고 잠깐 팀 회고 피드백 타임

- 생각보다 지난 주 액션 플랜이 현실적 방향이었는지 지난번 스프린트보다 다들 수행들을 많이 했다. ㅎㅎ 서로 더 독려하는 게 좋겠다.
- 저녁에 모여서 비어있는 디코 음성채널에서 혼자 공부하더라도 목소리라도 공유되는 모각공을 하자
- 유튜브 클론코딩 따라하는 것도 좋은 학습 방법이 될 수 있겠군
- 자기 속도를 찾자! 지치기 노노..