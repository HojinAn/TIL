**오전 9시 생활코딩 WEB2-CSS 수강**

# 킹갓제너럴 조코딩님의 원데이 특강!!

[https://www.youtube.com/c/조코딩JoCoding](https://www.youtube.com/c/%EC%A1%B0%EC%BD%94%EB%94%A9JoCoding)

## 오전(10:00~11:50) 수업 by jocoding

### 쿨찐 테스트 만들기!

- 테스트류는 가벼우면서 임팩트가 있기에 준비했다
- 그냥 만들고 끝나면 노의미 → 배포까지 해보자[https://tescoolzin.shop/index.html](https://tescoolzin.shop/index.html)
- 희망찬 동기 바이럴이 터지면

**수업시작**

- vscode로 할거임
- 기본 마크업
- Bootstrap
[https://getbootstrap.com/](https://getbootstrap.com/)
- css를 미리 만들어놓은 사이트 정도 표준화된 규격을 제공하는 CSS 프레임워크
- ress.css든 reset.css든 읽어보고 알맞은 걸 사용해주자.
- cdn, reset, style 중에서 제일 중요한건 내 css가 가장 마지막에 써주는 것이 좋다.
- 가장 먼저 reset해주고 하는 게 좋겠지?
- bootstrap으로 적용하는 법 학습
- 조코딩님은 html, css 작업할 때 크롬 개발자 도구 창에 바로 쳐가며 작업하신다. → 바로바로 직관적으로 확인 할 수 있어서 좋다
- **꿀팁**
    
    Bootstrap은 class를 다 정리해주는 거라서 class 명에다가 mt-5 이런식으로 하면 margin-top: 5px; 이런식으로 정의를 해놨다. 세세하게 하려면 물론 CSS를 따로 써줘야겠지만 ㅎㅎ 귀찮을 때 쓰면 좋다.
    
- Bootstrap, tailwind 등과 같은거 하나만 사용하기는 쉽지 않다. 최대한 CSS 안쓰고 그냥 프레임워크 쓰신다고
- button이냐 a냐.. semantic 관점에서도 크게 차이가 없지 않을까. 지금은 tag를 눌렀을 때 이동하는 역할이니깐 a를 사용하는게 좀 더 semantic에 맞지 않을까 싶다.
- 아무리 잘 짜봤자 트렌드 모르면 또 묻힌다.

---

## 오후(13:00~18:00) 수업 by jocoding

**(약 스포)대형컨텐츠 큰거온다..!**

- 리액트를 왜 써야하나 의문이 들 수도 있는데,
    
    →여러 article 복사해서 쓰는거 귀찮다는 생각이 들텐데 그 때 도움을 주는 리액트..!
    
- 디자인 좀 어렵고 하면 프로토 타입 그냥 bootstrap으로..!
- bootstrap에서 버튼 색 고를 때도 class 이름으로 설정된거 가져오면 된다(!)
- radio는 name을 기준으로 함께 동작하는 방식!! 복습
- script는 body 닫기 전에 위에 올려주는 게 ~~국룰~~이 됐다.
    
    → 페이지 인코딩을 전부 다 한 이후에 script를 먹여주는 것이 맞다고 보기 때문에
    
    → 사실 이게 국룰이 아니다..! 새로운 지식
    
    defer와 async에 관한 내용
    
    [https://ko.javascript.info/script-async-defer](https://ko.javascript.info/script-async-defer)
    
    [https://stackoverflow.com/questions/10808109/script-tag-async-defer](https://stackoverflow.com/questions/10808109/script-tag-async-defer)
    
- ~~(여담)~~립제이가 사촌이시라는...ㄷㄷ
    
    

### Deploy

- 사이트를 만들었을 때 컴퓨터 안에만 있으면 의미가 없다. 세상에 site를 공개해야 의미가 있다.
    
    → 다른 사람이 다운로드 할 수 있어야한다.
    
    1. 내 IP 공개하고 뿌려주기 → 해도 되지만 귀찮.. 기업마다 갖고 있는 서버실이 있었지만
    2. AWS와 같이 서버만 빌려주는 서비스도 있음
- 우리는 netlify를 할 것임
- netlify는 왜 잘나가는지?
    
    → 무료로 엄청나게 제공을 하기 때문에 사용자들이 엄청나다. 트래픽 방어도 잘 되어있다.
    
- 많은 업체가 AWS 쓰는 이유?
    
    → netlify는 단순 웹호스팅에만 최적화 되어 있다.
    
    AWS가 규모도 크고 안정적이긴 함 제품도 어마어마하고 웹호스팅은 극히 일부 기능 중 하나일 뿐 / 비즈니스는 아무래도 안정적인 서버를 원하니
    
- heroku도 무료로 할 수 있지만 시간제한이 있다ㅠ

### favicon 쉽게 만들기

- [https://www.favicon-generator.org/](https://www.favicon-generator.org/)
    1. 여기에서 원하는 이미지를 favicon으로 만들어서
    2. 넣어주려는 html 파일이 있는 곳에 해당 favicon을 넣어주고
    3. 각 html head 마다 favicon 만들때 생겼던 link들을 넣어준다.
- 싼 도메인 - 가비아[https://www.gabia.com/](https://www.gabia.com/) → 1년에 500원 꼭 1년 단위로 바꿔놔야 550원! 휴대전화도 아무거나 해놓아도 괜찮다.
- freenom은 오류가 어마어마하다.
- meta.com을 소유하고 있던 사람 400억에 facebook에 판매..ㄷㄷ
- DNS는 전화번호부처럼 도메인만 관리해주는 것
- http vs https → 엄청 critical한 것은 아니어도 s 넣어주는 게 기분 더 좋지 않겠는가..!

### AddThis

- [https://www.addthis.com/](https://www.addthis.com/)
    
    footer 부분 ~로 공유를 여기서 만들어줄 수 있다.
    
- [https://adfit.kakao.com/](https://adfit.kakao.com/)
    
    광고 붙이기 심사가 덜 빡셈
    

### 검색 결과 등장

- 검색엔진이라는 것이 기본적으로 크롤러가 각 웹사이트를 탐방해서 naver, google 등에 알려준다.
- sitemap.xml등의 지도를 제공 → 접근성 상승
- robots.txt를 통해 크롤러가 접근해도 되는지 가장 먼저 확인한다.
- sitemap generator → [https://www.xml-sitemaps.com/](https://www.xml-sitemaps.com/)
    1. 여기에 우리 주소를 올려둔다
    2. start를 누르면 xml을 만들어준다.
    

### SEO(Search Engine Optimization)

- 외부 - 역링크가 많을 수록, 방문자 수가 많을 수록, 연식이 오래된 사이트일 수록 올라간다. → 광고의 영역
- 내부 - semantic 마크업(얼마나 정렬이 잘되어 있나 등), meta tag → 검색에 대한 정보가 풍부하게 → 개발 시 최대한 최적화
- 궁극적인 목적은 내 사이트가 양질의 사이트인지 판단해서 양질의 사이트이면 상단부로 올려준다.
- 이 사이트 하나면 정리 끝이다.
    
    [https://seositecheckup.com/](https://seositecheckup.com/)
    
- SEO 100점 받으면 내부적으로 할 수 있는 것은 다 해준거지만 결국 외부 요인이 제일 중요하다. 그냥 개발자가 할 수 있는 일은 다 한것. 그 이후는 마케팅의 영역

**도메인 설정**

- 구매한 도메인 사이트를 netlify에서 관리해주고 싶다면 가비아 등에서 도메인 명을 바꾸고 netlify domain settings 들어가서 일련의 과정을 거치자
- netlify에서 nameserver 주소가 뜨면(여러개가 뜬다. 4개 정도) → 가비아 도메인 관리 에서 DNS 정보에서 네임서버 설정에 netlify에서 받은 nameserver으로 바꿔준다.
- 제일 중요한건 네임서버 설정!!!

**p.s.**

- 실시간 수업이다보니 조코딩님이 구입하려 하셨던 도메인을 이미 다른 수강생께서 선점하셨다😂