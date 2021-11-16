## **수업(09:00~18:00) by Licat**

**morning break**

1. Python 오픈 소스 프로젝트 준비 중
2. markup layout에 맞게 작성할 수 있게 도와주는 프로그램 짜면 좋을 것 같다.

**작명 규칙(Convention)**

- 작명 방법론 되게 긴데
- snake 규칙을 지키면 이름이 너무 길어진다. weniv는 snake법으로 작성하지 않는다.

**이상한 class name**

- 대기업 간다? class 명을 정한다는게 의미가 없을 수 있다. 왜? → 보안 때문에
- 내부적으로는 지켜도 프로그램을 돌려서 사용자가 볼때에는 해슁된 것 마냥 이상한 이름으로 보인다. 암호화된 class 명으로 바뀐 것
- 어떤 보안 이득이 있을까?
→ 크롤링을 막기 위해

**크롤링?**

- 웹에 있는 정보를 가져오는 것
- 업무 자동화 관련
- JS, Python 다 가능
- 사람이 일일이 확인하러 접속하고 하는 것 보다 크롤링으로 각종 사이트에서 쫙 긁어올 수 있다.
- 크롤링에서 하는 일 중 하나가 class를 잡는 과정이 있다.
- 서비스부하
- API Server 우리가 줄게 크롤링 하지마 가 해당 사이트 입장

**코드 컨벤션 다시**

- NHN 과거 컨벤션(공개된 자료)
[https://nuli.navercorp.com/data/convention/NHN_Coding_Conventions_for_Markup_Languages.pdf](https://nuli.navercorp.com/data/convention/NHN_Coding_Conventions_for_Markup_Languages.pdf)

- 구글
[https://google.github.io/styleguide/htmlcssguide.html](https://google.github.io/styleguide/htmlcssguide.html)

→ 회사에서는 진짜 이렇게 일한다! 한국 vs 미국


- 보통 공통되는 규칙들
- 대문자로 시작 X
    - 숫자로 시작 X
    - _ 로 시작하거나 끝나지 않기
    - 다른 용도로 사용하면 안되는 class name도 있다.
- 보안으로 취업했는데 웹개발부터 다시 교육 받는게 좀 곤욕스러우셨다고..ㅎㅎ
- HTML,CSS, JS등에서는 홑따옴표(') 사용하지 않기 Python은 ''도 많이 쓰기 때문에 헷갈릴 수 있지만
- 컨벤션은 기업마다 다르니 새로 배울 준비할 것

- 중간 QnA
    - **컨벤션 하나를 잡고 코딩해보고 싶다면 어디 기업을 추천?**
    → 구글 컨벤션으로 연습해보길 추천 / 너무 타이트하지도 않고 좋음    
    - **꿀팁(Wade)**    
    지원 회사 면접 전에 공개된 컨벤션이 있다면 미리 보고 가는 것이 좋다! 사실 물어물어 알 수는 있다.
   
- 이해하기 힘든 컨벤션이 있을 수 있다. (자식, 부모 태그의 위치가 같다던가 → 얘네는 Spacebar와 Tab 작업을 프로그래밍으로 일괄적으로 해주기 위해서이기도 하다.)
- 회사가 허용한 IDE, extension만 사용해야 한다.
- 금융권 백엔드의 경우는 외부 인터넷 차단 & 커맨드창에 CLI로만 작업
- 신규 마크업에 대한 문서를 코드스닛펫에 작성해놓고 사용하기도 한다.
- 특정 요소에 class, style은 제일 뒤로 넣는 컨벤션도 존재 style 인라인으로 주는 경우도 거의 없지만

### 한국
- Naver는 보통 snake(_)표기법 사용(JS는 Camel많이 쓰는데) 익숙해지는데 시간이 좀 걸린다.
- head와 body 간 빈줄 1줄
- \<title\>도 "메뉴 : 브랜드 서비스" 이런 식으로
- table 작성 규칙도 참고할만하다.
- 의미 있는 그룹 간 빈줄 1줄
- 줄 바꿈 → 속성, 속성값 사이 줄바꿈 허용 X
- color의 경우에도 CSS filter 인식 오류가 발생 가능하므로 속성 값 축약 X
- 실제 z-index의 최대값은 21억~~ 이지만 기업마다 정한 최대가 있을 듯
- 홑따옴표 쌍따옴표가 절대적으로 중요할 때?
→ json 작성시

### 외국(Google) 컨벤션
**html**
- semantic하게 작성 → 기계가 이해할 때에도 명료하게 작성
- < , & 외의 entity 요소는 허용 X / ex. &nbsp - 공백..
[https://oinam.github.io/entities/](https://oinam.github.io/entities/)
- attribute에서도 key, value를 잘 볼 수 있게 new line 적절히

**css**
- background 이미지 utl 따옴표 아예 안쓰고
- font-family 홑따옴표
- 비교해보니 어떤가?
→ 한국이 좀 더 조직 동원하기에 용이하다. / 구글이 좀 더 너그러운(?) 느낌
- Camel(camelWay), Snake(snake_way), Kebob(kebob-way)등등 다양하게 있다.

**snake  표기법이 더블클릭해서 옮기고 하기가 쉽지 않나?**
→ 보통 클래스 네이밍을 할때 형태-의미 이런식으로 작성을 하는데, 언더바(_)를 사용하면 전체 복붙은 편하지만 형태 or 의미만 바꾸기는 번거롭다.
***
**수업**
- 어제 카드 뒤집기 실습 함께 → 강사님께서 알려주시는 방법(099html, 100html)이 좀 더 formal한 방법

- CSS 연습해보기 좋은 사이트
[https://gygyna.tistory.com/208](https://gygyna.tistory.com/208)
완성도 있는 좋은 책 가지고 연습하면 좋다.

**button**
- 버튼만 300개 만들어보는 실습 강좌도 있다..ㅋㅋ

**미디어쿼리**
- 웹개발할 때 모바일 사이트 먼저 만들고 나서 PC화면을 설정을 하자
- 같은 페이지에 4개의 화면을 만드는 것이다. → 디자이너가 4개 준다.
- css를 재정의해주지 않는한 미디어쿼리 안에서도 똑같이 동작해준다.
- 어디서부터 어디까지가 예를 들어 flex의 영역인지 미디어쿼리의 영역인지 알아야 짤 수 있다.
- 반응형은 flex랑 찰떡궁함


- Vuexy 이런 곳 페이지 가격이 왜이렇게 살까? → 박리다매
- FE 개발자인데 FE 페이지를 구매했다? → 이유가 타당하면 모르겠는데 여러 홈페이지 중에서 1개, Node할껀데 이거용 페이지는 샀어요 하면 모르겠는데 FE개발자인데 온통 Bootstrap이다? 이건 좀...
- White 베이스의 페이지 개발을 많이 한다. 색이 너무 많으면 촌스러울 수 있으므로
- 코드는 잘 짜여있어도 UI가 너무 안예쁘면 용납이 좀 힘들 것 같다. 유용한 디자인 사이트들만 알아도 자신의 포트폴리오를 충분히 예쁘게 만들어줄 수 있다.
- 각 회사 홈페이지들이 언제부터 흑자를 냈는가? 를 보면 좋다. 모든 페이지들이 그 흑자를 넘어설 때까지 버티는 게 힘들다.

> 과제
> > 개행이 생길 때 p태그로 하거나 article 넓이 조절을 통한 개행
> > \<br\>을 통한 개행은 금지
> > \<span class="br"\> 이것도 비권장
    
***

## 저녁 이수진님(19:00~21:00) 특강

- 독일 베를린에 계심 / 어떻게 개발자로 커리어를 시작할 수 있나 함께 고민하고 생각해보는 시간이 되었으면 좋겠다. / 비개발자라는 말을 그리 좋아하지 않음
→ 어떤 background든 프레임 안에 갇히지 말아달라

- 학부 작곡 전공, 취업 difficult, 다른 프로젝트 학교에서 하다 첫 직장 오퍼 받고 PM으로 3년 근무 → 개발자가 되고 싶다는 생각, 준비, 붓캠, 유데미 등등 → 대학원 다니다가 싱가폴로 취업 / 싱가폴 PressHoldings, 영자 신문사 영자 시각화 등 개발 / 2년 넘게 번역도 활발히

- FE 개발 취업에 관한 이야기, 특히 해외취업 / 리액트를 해도 취업 후 리액트를 하게 되는 게 아니다. / 공부를 하는 길에서 충분히 많은 길이 열려있고 업무 관심사에 따라 로드맵이 완전 다르다.
- 어느쪽으로 depth있게 하겠다는 고민을 계속 해야 한다. / 어느부분이 부족한지를 정확히 알기 위해선 기술 set를 정리를 해야한다.
ex. React하는데 JS가 약하다 생각하면 React한거 줄이고 JS를 강화
- 부트 끝나면 어느 수준의 개발자가 될 것인지 예측할 수 있어야 한다. 막연히 말고.

- **기술 set을 쭉 정리하고 부족한 역량을 발견하기!**

- roadmap을 보고 내 현재 능력 확인하기

- 회사마다 요구하는 게 조금씩 다르기 때문에 원하는 기업에서 필요로 하는 기술 알아보고 

- 쭉 정리 정리 **정리가 중요하다** 정리해보면 아 요즘 회사가 어떤 사람을 원하는 구나 라는 것이 명확해진다.

- 혼자 공부하다 보면 실무자들을 만날 기회가 흔치 않다. 잘하시는 분들, 유명한 분들 기술 블로그를 보고 따라가보기
    1. 기술 set
    2. 닮고 싶은 분의 모습
    → 내가 어떤 모습, 상태인지를 알게된다.

- 커리어 레더리라는 큰 틀이 있다. lv1~lv8 이런식으로 제시해주는 회사가 있다. like Google.

> 질문을 스스로 할 수 잇어야 한다.

- 현재 내 지식과 역량이 업계 요구 수준에 미치는가?
- 특정 지식(Vue, React)을 학습하는데 얼마나, 어느 정도 걸리는가? 배우면 할 수 있는가?
→ 이걸 잘 알아야 기술 면접 때도 자신 있게 얘기할 수 있다.
나 공부 잘 할 수 있고 이 언어, 프레임워크가 얼마나 걸린다는데 나 학습해갈 수 있다. 내 커리어가 뭔지를 안다면 자신있게 말할 수 있고, 어필 할 수 있다.
내 상황을 판단하는 것이 중요

- 공고문 보면서 안해본것들이 몇개 있을 거임. 동그라미 치면서 해본거랑 비교할 수 있어야해

- 비즈니스 요구사항을 어떻게 기술적 용어로 바꿀 것인지

- 내가 부족한 부분을 체크하는 것

- 프론트엔드 분야는 정말정말 넓다.

- 업계전문가 찾아내고 구독하기

1. 성취할 목표
2. 행동단계
3. 결과

- 내가 공부하는 게 있는데 시니어 개발자에게 코드리뷰 요청

- 역량, 목표, 현재상황, 목표기간, 장애물

- 구체적으로 적고 정리하기 / 표도 좋고 어떤 형식이든 좋으니깐 구체적 플랜을 세우자.

수진님 깃헙 sujinleeme

- 단기간 성취할 수 있는 아주 작은 것부터 시작하기
- 기본기에서 탁월함이 나온다.(프로그래밍 기초의 중요성)
- 소프트스킬(커뮤니케이션 능력, 리더십)도 역량이며 경쟁력 → 페어프로그래밍 등을 할 때 잘 드러난다. → 지금 멋사 기간 동안 이런 걸 쌓는 것도 하나의 목표가 될 수 있다. 역량이라는게 너무 막연하게 느껴질 수도 있지만

- CS 베이스가 워낙 없다 보니깐 상당히 고민을 많이 했다. 어떻게 하면 프로그래머인척하면서 이력서를 쓸 수 있을까
→ 개인적인 목표가 있었다. 글로벌 서비스, 해외 사람들 타겟

- **어떤 자리에서든지 이력서를 발송할 수 있게 항상 최신으로 유지**

- 이력서에 깃허브 주소 포함

- 학생은 교수님 추천서까지 받아놓으면 좋음

- 커버레터는 요청시 포함 → 그리 중요한 것은 아님

- 이력서
> 이력서 Technical Skill / Project / Experience / Education 이런 순서로 쓰자.
> Technical Skill을 보고 거르게 된다. 과거 경험도 SW, IT에 가까운 말로 보이도록 풀어내는 것도 좋다.이력서는 1장 이내로 상당히 tight하고 clear하게

**면접 및 과제**

- 해외 취업을 원하면? → 고급 어휘 구사까지는 필요하지 않지만, speaking 연습이 많이 필요함 / React interview 깃헙 검색하면 나오는 것들 찾아서 보고 외우는거까진 아니어도 질문 받았을 때 어떻게 답변할지를 생각하고 말로 만들어보기. 중요 개념들에 대해 명확히 알고 있어야 한다.

- 기술 문서를 보는 연습을 하는게 무조건 좋다. 구글링 할 때 한국어로 검색하면 한국 블로그, 글들부터 뜰텐데, React 같이 금방금방 바뀌는 것들은 Update가 느리다. 영어로 검색, 공식 문서 위주로 보자.

- 인성 면접을 기술 면접만큼 중요하게 생각한다. 아무리 뛰어난 능력을 가진 개발자여도 사용하는 어휘, 인성에 따라서 당락이 결정되기도.. / pair programming하면서도 인성 알게됨 / 함께 일하게 되는 팀원들과 함께 식사를 가져보기도

- 행동 인터뷰 4~5가지 에피소드 준비(ex. 최근 성취했던 일은 무엇인가) 어디서든 잘 써먹을 수 있는 것
```
ex) 내 전공은 이런데~~ 최근 React프로젝트 뭐하는데 vscode에서 불편한게 있었는데 opensource로 뭘 만들어봤다
```
이런 식으로

- 레퍼런스 체크를 위해 영어 가능한 지인을 미리 섭외 
- 면접 질문등을 친구들과 서로 이야기 오가면서 놀듯이 연습하자

- 실제 웹서비스 일부분을 떼어서 기능 등과 같은 부분을 만들어줘와 같은 과제 면접도 가능 2~3가지 challenge를 준다.
> music play bar 느린 렌더링 이슈와 같은 문제 해결
> 커밋도 기능 별로 나눠서(어떤 기능을 추가했는지 볼 수 있게)
> 설명하기 어려운 기능 등은 비디오로 찍어서 보내주기도
> 과제가 너무 어렵다 하면 충분히 negotiate가 가능.
> 과제를 다 못할 수도 있지만 코드 주석으로 pseudo 코드로라도 구현할 것
> pair programming 과제도 제안이 오면 시니어 개발자가 계속 질문할 것

- 시나리오 쓰고 test-code 작성하면 좋다.

---

**1. 영어로 개발 지식을 쌓자**

- 해외 취업은 정말 좋은 기회 → 이때 중요한 게 영어 더 큰 무대에서 일할 수 있을 것이고, 기회도 많을 것이다.
- 최신의 트렌드는 다 영어로 되어 있다. 공식문서랑 친해지기
- 개발자들도 앉아서 코딩만 하는게 아니라 말하는 기회도 상당히 많다. 발표할 일도 많고 
- 영어에 대해서 친숙하면 좋겠다.
- CS에 대해 좀 더 공부하고 싶다 하면 이미 인터넷에 좋은 게 많다.

**수료증 ≠ 취업**
- 수업 많이 듣기보다는 코딩, 프로그래밍을 더 많이 하는 것을 추천
- 팟캐스트, 유튜브 채널 등 구독 / 번역 / 해외 컨퍼런스 발표, 네트워킹하기 -> 온라인으로도 충분히 가능하다.
- 한국에 있지만 미래에 분명 기회가 더 많아질 것
- 시니어들에게 해외 권장 많이 하지만 주니어에게도 지금부터라도 열심히 하면 언제라도 가능하다 이야기하고 싶다.

---

**2. 학습&취업 동시에 잡는 개발 프로젝트**

**70-20-10의 학습 법칙**
- 70은 업무경험 20은 타인과의 상호작용 10은 교육으로 성장
업무 경험이 너무너무 중요 -> 프로젝트해볼 것을 추천

**중요한 것**
- 문제발견 → 문제구체화&해결(여러 솔루션을 보면서) → 리서치 꾸준히 → 학습 → 블로그 기록으로 남기기 → 추후 발표까지 가능하다.
- 프로젝트를 만들 때는 단순 졸업 마인드보다는 비즈니스 마인드 셋이 중요하다.
-> 신입, 주니어들의 실수는 프로젝트 만들었으니 이력서에 써야지! 인데 이러지 말고 실제 홍보까지 잘 생각해보기

**신입**
- 프로젝트 최소 3개 준비 - 프로젝트 설명을 정말 정말 정말 잘 쓰는 것이 중요하다. library를 안쓰고 스스로 구현해보는 게 좋다. 정말 basic 한거 vanillaJS로 만들어보는 게 좋다.
- 깃헙도 FE 와 맞게 setup해놓는 게 중요하다.
- 무료로 배포할 수 있는 사이트가 정말 많다. 시니어에게 코드리뷰 한번 받기 / 뭐가 문제인지, 잘하고 있는지 등
- 프로젝트는 그냥 내버려두는 것이 아니라 어필 하는 것이 중요하다. 평소 느꼈던 문제점이나 todo-list, blog등도 괜찮다. 다만 그냥 내버려 두지 말자.
- 오픈소스 참여하는 것 자체가 자신의 프로젝트가 될 수 있다. 그냥 지나칠 수 있는 문제. 그냥 죽을 수도 있는 문제들을 계속 디벨롭 하는 것
- 프로젝트를 그냥 잘 만들기만 해도 취업 될 확률이 정말정말 높아질 거임

---

**3. 커뮤니티와 함께 성장하자**

- 임백준 작가 칼럼(2015)
- 커뮤니티는 문화와 성장을 함께 도와주는 학습 공동체. 혼자해서 성장할 수 있는데 궁극적으로 한계가 있다. 개발 문화는 오픈을 지향한다.
- 내가 혼자해서는 절대로 최신의 버전을 유지할 수 없다. 커뮤니티 참여가 중요하다.
- 비전공자여도 다양한 커뮤니티 활동에 참여할 수 있다. 주니어, 엔트리 레벨에게는 커뮤니티 참여로 더 경험 할 것이 많고, 그런 사람들을 만나야 나도 더 많이 성장할 수 있다. 실제 오픈소스에 참여

**실제 수진님 경험**
- 장고걸스, 레일걸스, 위먼후코드서울 등 
- 갖고 있는 능력들 더 디벨롭 시켜서 성장해야겠다는 생각 / 우연히 참여한 싱가폴 컨퍼런스에서 취업까지 함
- ReDI School → 멘토로 활동 중

**어떻게 참여?**
1. 로컬 커뮤니티
meetup.com 찾으면 좋음
컨퍼런스 행사 자원 봉사자, 발표자로 참여하기
커뮤니티 내 프로젝트 참여
2. 온라인 커뮤니티
오픈소스커뮤니티 방문
핵토버페스트 등 오픈소스 행사
온라인 강좌, 해커톤, 세미나, 워크샵 등에 참여
SO 등에 질문 남기고 답변 남기기
비전공자라는 프레임에 갇히지 말고

내 생각 : 인사이트를 넓히는 것이 중요하겠다.
***
**QnA**

[https://javascript.info/](https://javascript.info/) → 코딩 챌린지 풀어보는 것도 도움이 많이 될 것

FE는 오히려 React에 관련된거 많이 물어볼 듯

최신 문법 React6이상의 것들 알고 있기

TypeScript 왜 쓰는지 장점 정도 알고 있기 → must는 아니지만 굉장히 + 다

주니어가 바로 넘어가기에 쉽지는 않다. 아예 안되는 것은 아니지만 일종의 트릭?으로 linkedin 거주 국가를 원하는 국가로 설정해두면 어떨까? ㅋ.ㅋ

2~3년차 mid-lv때 해외가면 정말 좋다.

검색은 <U>영어</U>로! 물론 쉽지는 않겠지만. 모르는 영어단어도 또 영어로 찾아야 하고😵 크롬이고 뭐고 컴퓨터 세팅을 다 영어로 무조건 영어로 모든 것을 default!

첫 회사가 정말 중요하다고 느낀게 첫 회사 vue가 정말 많은 회사에서 사용하지 않는다는 것 때문에 고민이 많았다.

**성장 원동력?**
→ 실패를 엄청 많이 했다. 하고 싶었던 목표가 뚜렷했다. 개발이 정말 잘 맞는 거라고 생각을 해서 지치지 않고 꾸준히 할 수 있었다. 만들었을 때의 희열? 나눌 떄 기쁨? 나에게 도전을 주고 영감을 주는 사람들을 많이 만나려고 한다. 개발자 친구들을 많이 두자

**PM → 개발자 전향 이유?**
PM을 하면서한국에서는 서포터라는 느낌이 강했고 전문성 쌓이는 느낌이 없었고 스트레스가 엄청 났다. 정체되어 있는 느낌이 싫었음.

referral의 목적은 전 직장의 동료의 의견이 중요. 얘가 어떤 팀에서 어떤 프로젝트를 했냐 이런 걸 물으니 신뢰할 수 있는 사람인지 

코딩 말고도 스포츠 활동 개인 취미 활동 하면 좋겠다.

**체력 관리?** 달리기를 계속 했다. 하루에 10km씩

사실 유럽에 영어를 쓰고 it 기업이 많은 곳이 많지가 않다. 베를린이 항상 스타트업 붐으로 주목 받는다.

자기 성향 라이프 스타일 세금? 도 잘 생각해서 하자.

**기술블로그?**
→ 최근 1년 블로그 많이 안했는데 잘쓰면 좋겠지만 스트레스 많이 받는다면 TIL로 시작하자. 영어 번역도 괜찮고. 저자에게 번역해보겠다 요청해서 번역해보는 것도 좋음 / 풀어본 문제 같은 해설?을 적어봐도 좋다.

[https://github.com/sujinleeme/learning-logs](https://github.com/sujinleeme/learning-logs)

[https://github.com/yjs03057/33-js-concepts](https://github.com/yjs03057/33-js-concepts)

**간단한 알고리즘 유즈케이스 테스트코드**
- 간단한 함수부터 테스트 코드 작성해보면서 해보는 것
- 그 다음으로 컴포넌트를 테스트코드로 작성해보고 하기
- 알고리즘 코테를 받고 테스트 코드 써놓고 하면 정말 가산점이 있다.
- 테스트 코드 짤때 테스트 케이스 추가하고
- 테스트케이스 →시나리오를 쓰고 정리하기
- 코드 제출하는 면접에서도 테스트 폴더를 따로 두고 작성하기
-> '너가 test-driven'한 개발을 하는구나'라는 인상을 줄 수 있다.


[https://jestjs.io/](https://jestjs.io/) 

- 페어프로그래밍할 때 liveshare를 하면 동시에 코딩 입력할 수 있어서 좋다.


**커뮤니티 선택 기준?**
->관심 따라 다를 것 같다.


- 사실 기술적인 질문이 그렇게 어려운 것들이 아니다. 간단한 js 함수 문제도 사실 challenge로 물어보면 아무리 시니어 개발자라도 잘 답변을 못한다.
즉, 자신감을 갖자!
기술면접 관련 질문 등은 깃헙에 검색만 해도 잘 나온다.
제목 몇개 뽑아서 아침에 30분정도 연습, 저녁에 다시 제목만 읽고 혼자 말하는 연습
구두로 설명, 코드 샘플 같은 거
중요한 건 계속 말하지만 물어보는 게 엄청 어려운게 아니라는 것

- 프로젝트 할 때 예쁜거에 집착하는 경우가 있는데 안중요하니까 기능 개발에 집중하는 게 더 중요

- React 상태관리, redering 이슈, hook이 뭔지 이런거 알자
왜 redux가 아니라 context api가 나왔나요? 왜? 뭐가 더 좋나? 이런걸 묻는다.
redux 쓰는 건 좋은데, saga 같이 많이 없는 건 굳이 안써도 된다는 것

궁금한 것들은 linkedin을 통해서