## 오전(09:00~11:50) 재현님(Wade) 수업

### flex

flex order를 통한 순서는 rendering화면상의 순서지 markup 상의 순서가 아니다!
    flex froggy, css dinner 등 게임으로 재밌게 익힐 수 있는 곳들이 있다. (깨알 Tip. 100vh는 height를 꽉 채운다.)

> flex로 9칸같은 칸을 채울 때 마지막 칸이 비는 문제 발생?
> ```
> ::after를 이용해서 가상요소를 넣어서 채워줄 수 있음
> 이런 부분에서는 flex보다는 grid가 반응형 웹을 짜는데 있어서 더 유리하다.
> ``` 



### grid

- flex의 main, cross 축과 같은 역할은 grid에서 행과 열

- grid에만 쓰는 단위 fr(fraction)

- 한줄에 3개 칸이 있을 때 각각 columns마다 1fr 1fr 1fr 써주면 각각의 너비들이 같다! 

- repeat()이라는 함수도 사용한다! css 함수 ㄷㄷ

```css
    grid-template-columns: 1fr 1fr 1fr;
    grid-template-columns: repeat(3,1fr);
    /* repeat(3, 1fr)이렇게 하면 위랑 같은거 */
```

<p><img src="./img/grid_row_example.png" height="200px" alt="2 same height & fill rest height" align="left" diplay="inline-box"></img></p>
예를 들어 행이 3개인데 grid-template-rows: 100px 100px; 이렇게 2개만 주면 마지막 행은 기존 height 값에 따라 맞춰진다.







- grid는 item의 넓이를 강제하는 애가 아니다. contents 친화적이라서 늘어난다. 자식들의 속성을 억제하지 않고 따라가준다(?) 정도랄까

> ##### fraction 과 % 차이?
> item 간에 gap을 줄 때 fraction으로 안하고 %로 하면 gap생각을 못해주고 스크롤이 생겨버린다.


- grid-column-start? 영역 묶기 시작하는 라인번호 & grid-column-end는 묶는 영역 라인(암튼 grid start~end 이거는 병합은 아니고 그만큼을 차지한다? 정도)

- grid-row: 1/3;은 몇번째 line까지 & grid-row:1/span 3;은 1line 시작으로 3칸 차지!

---
## 오후(13:00~17:50) 호준님(Licat) 수업

중간 QnA & Tip
- **지난 주말 footer부분에서 section이 들어갈 수 있는가?**
-> whatwg.org에 markup 모범 example이 있음
[https://html.spec.whatwg.org/multipage/sections.html#the-footer-element](https://html.spec.whatwg.org/multipage/sections.html#the-footer-element)

- 98%를 채우자 100% 채우는 게 아니라

- 대기업 2차 같은 곳을 갔을 때 markup에서 여기에 왜 h3를 넣는지 왜 여기에 section으로 넣는지 물어볼 때 확실히 대답할 기준이 있어야 한다.
제출 기한이 넘었다 해도 '몇 군데 수정했다 이유는 이렇다' 얘기하면서 마지막까지 포기하지 않는 자세도 중요하다.

- 인상 깊은 면접자
임원 면접 떄 질문 하나도 못받다가 마지막 끝날거같을때 제가 준비해온게 있는데 1분 스피칭 해보겠습니다 한 사람이 붙었다.
과제 제출을 나중에 했다 하더라도 계속 했다는게 중요


> 과제
> [과제(레이아웃 구현 프로젝트 - 1)](https://www.notion.so/1-8518ad081f054db6a818819326b2c011)
> [과제(레이아웃 구현 프로젝트 - 2)](https://www.notion.so/2-da1de9ad425842769baed0b8f48679cf)

#### 실습 수업 시작

중간 내 생각 (markup css 수정할 때 위에서부터 순서대로 가면 좋은듯)

- infinite하게 돌아가는 글자 animation 보여지는 걸 구현하려고 하면 처음 나오는 거랑 마지막이랑 같게 해주면(눈속임처럼) 구현해줄 수 있다.

- 똑 띄어서 다른데 갖다놔도 그냥 그 정보 그대로라면(영화 포스터, 제목 같은 정보가 담긴 box) article로 잡기

- 어떤 section, 어떤 article마다 heading은 하나!

- a 사용시 href 값을 #으로 해주면 페이지가 아예 refresh 된다. 그래서 싫으면 #none을 넣어주자

```html
<a href="#none">
	<img src="src/images/movie_weniv.png" alt="위니브 월드 : 새로운 시대 상세 정보 페이지로 이동합니다.">
</a>
<strong>위니브 월드 : 새로운 시대</strog>
```
> **이런 코드에서 alt 값을 지워주지 않는 이유?**
> alt는 이미지가 없을 때 설명하는거라서 그 경우와는 다르다. 여기서는 a tag를 설명해주기 위한 alt가 필요하다.


footer 안에 section 가능

```html
<footer>
    <h2></h2>
    <section>
        <h3></h3>
    </section>
</footer>
```

    이것보단

```html
<footer>
    <section>
        <h2></h2>
    </section>
</footer>
```

    이렇게가 낫다

**왜?**
footer는 section, article 같은 구역이 아니니깐

```html
<dt></dt>
<dd></dd>
```
    이렇게 썼어야 했다... 바보

마크업 짤 때 항상 스크린 리더로 읽어내려갈 때 읽힐 정보를 <U>생각하며 짜자</U>
예를 들어 footer에 기업 이름 나오고서 뜬금없이 facebook, instagram 나오면 순서 상 이상하니깐

> 중간 잡담
> AWS → java/spring → FE → devops → Python/django(1일만에 배우셔서 바로 프로덕트) → vue-node 개발자분이 계시다고..!(엄청난...ㄷㄷ)
> 어느 한 쪽 전문성이 있을 수 있지만 내꺼 아니더라도 완전 무관심하지는 말자

- class의 작명법은 회사별 컨벤션 따라가자

- 눌렀을 때 눈에 띄게 하는 것은 나중에 JS로 class 이름을 바꿔서 할 수 있다!

- -webkit~~~이런거는 호환 안하는 것들이 있어서 써주는 것

- css 작성시 자식 class가 달라도 같은 부모로 묶인 컨텐츠끼리는 한줄 안띄어 작성하기도 한다.

- 실무에서 오늘 같은 CSS 노가다는 실무에서는 노노해.. SaaS등을 배우면 쉽게 할 수 있다.

> ### 특정 클래스로 선택해줄 때 부모와 자식 다 명기해줘서 정확히 지정해주는 게 좋다.
> 1. 같은 자식 class를 또 쓸일이 있을 수도 있으니
> 2. 또한 막 2천줄 가량의 엄청난 양의 코드에서도 자식에 있는 li 태그 경우도 어디에 위치한 li인지 알 수 있어서 유지 보수하기에 용이하다.

내일 진도는 '라이캣 구현, animation, perspective(→ 요게 진짜 재밌다 / 조금 과욕인거 같기도 하지만 ㅎㅎ)

오늘은 주로 함께 과제 만들어보기 시간이 많았다.

- dt, dd 감쌀 때 dl 말고 유일하게 할 수 있는게 div

---

## 저녁(19:00~21:00) 스프린트 동준님(makerjun)

- 코로나 이후로 중요해지는 역량 - 김난도
계획을 세우고 수행하는 루틴 계획 수행 능력? 계획을 세우는 능력?

- 모든 프로그램이든 계획이든 처음부터 완벽할 수 없다. 애자일한 방법으로 계속 개선해나가자!

1. 가장 개선하고 싶은 액션 플랜?
서로 간에 피드백을 통해 손에 잡힐 듯이 구체적인 계획으로 수정하기
피드백을 받으며 수정해나갈 떄 달성할 확률들이 더 높아진다.

2주간 진행할 수 있는 것으로 계획하면 좋겠다.

2. 개인차원 / 그룹차원으로 계획
팀원들의 피드백을 받아 다음 스프린트까지 달성할 수 있도록 액션 플랜을 개선
개인적인 액션과 회고그룹 차원에서의 액션을 1가지 이상씩 만들기
> 예시)
> - 데일리로 회고그룹 채팅채널에 진행 상황 간단히 공유하기
> - 수업끝나고 10분만 오늘 진행할 사항들 체크하기
> - 다음주 월요일에 자체적으로 중간 점검 가지고 조정하기
그룹 차원이 더 나올 수 있게 계획해보기

그룹 차원에서 한가지씩

**블로그 글 쓸 때 동준님 Tip**
오늘 학습한 마크업에서 가장 중요한 내용은 ~이다.
그 중요한 ~를 위해서는 3가지를 기억해야 한다.
구조부터 쓴다는 생각으로 간단하게 작성하고 채워넣자