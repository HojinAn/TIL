# 멋쟁이 사자처럼 프론트 엔드 스쿨 19일차 w/ 제주코딩베이스캠프

## 오전(09:00~11:50) 수업 w/ Licat

### morning break

어제 특강에 관하여

- 연봉에 관하여
    
    → 초봉 5천? 문화 조성보다는 그만큼의 능력자를 뽑겠다는 의미에 가깝다 생각
    
    쓸 수 있는 카드 중에 연봉을 낮추는 카드도 있다.
    
    대표님 생각의 마지노선은 3000,,ㅎ → 물론 경력자는 논외
    
    1년간은 돈 받으면서 훈련 받는다고 생각하자!!
    
- [https://youtu.be/wfInwxT0UUA](https://youtu.be/wfInwxT0UUA), [https://youtu.be/fv5pIa_l7ns](https://youtu.be/fv5pIa_l7ns)
    - 영상에 관하여
        
        이력서 소개 때 주의 깊게 읽어야할 포인트가 어디인지를 찝어 줘야함.
        
        ex. 모호한 코드를 클린하게 해주는 능력을 가지고 있는 개발자입니다
        
        라는 표현은 모호한 표현이다.
        
        차라리 하루에 1000줄 이상 짜는 개발자 입니다
        
        와 같은 문구가 중요
        
        블로그, 발표 너무너무 중요
        
        발표 압박은 성장으로..!
        
        사수를 찾아 다녀라
        
        상황에 맞게끔 판단해라
        
        회사별로 바라는 분야가 다르다 스타트업도.
        
        - 넓게 여러 것을 알아야할지 이것저것 할 확률이 높다.
        - 분업화 되어 전문화가 필요한지
        
        그래서 회사의 스테이지를 보고 아는게 중요하다.
        
        회사 역량 별로 다른데
        
        어느 스테이지를 갈지는 각자의 상황에 따라
        

### 수업

**Sass 계속**  

- 반복되는 코드를 만들지 말라 → Sass 유명한 책(실용주의 프로그래머)에 나오는 내용
- css는 반복적인 코드를 너무 많이 쓴다.. 태생부터가 그렇다. 그래서 함수 그런 걸 안쓴거고. 커버해주려고 Sass가 나온거고. ~~Sass를 안쓰려고 한다?~~ 써라
    1. 중복된 코드로 인한 혼란  
    2. 작업의 증가로 인한 효율성 악화  
    - 밴더 프리픽스 포함, border, gradient등 효율 극대화
- less보다 많은 기능 but 각 장단점은 확실히 있음
- reset.css 같은 경우에도 포함해 사용할 수 있음. 작업의 일관성
- 미디어 쿼리에도 적용

**제어문**

- js의 문법의 영향을 정말 많이 받았다.
- default가 설정되어 있어도 @include로 중복되어 적어주는게 협업하고 유지보수 하기에 좋다.
- 디버그를 위해 Node Sass를 꼭?
    
    → 사실 숙련되면 Sass에서 에러 낼 일이 없다. 편의성만 봤을 때는 Node Sass까지는 좀 헤비하다
    
- 보통 scss를 정리된 걸로 갖고 있는다
- 같은 파일에 작성하다가 분기하기보다는 분기 작성하고 나중에 합치는 게 더 좋다.
- 변하는 text만 보면 된다!
- #{$i}  vs $i?
    
    → #{ } 내부에서 연산 가능
    
    #{$i}로 계산 하려면 내부에서 해줘야 하고 $i는 해당 값을 바로 사용해줄 수 있다.
    
    ```scss
    // i가 for 안의 변수이고 *100을 해주고 싶을 때
    #{%i*100}px;
    $i*100px; //둘은 같다.
    ```
    
- FE 개발자를 일하면서 평생 Sass를 안볼일이 있을까..? 물론 회사에서 안 쓸 수도 있지 하지만 FE개발자라면 안 볼 수가 없다
- **@debug type-of($100px)==number 은 true다!**

[https://discord.com/channels/900580244820488232/900580245277650965/913259730401656932](https://discord.com/channels/900580244820488232/900580245277650965/913259730401656932)

---

## 오후(13:00~18:00) 수업 w/ Wade

**어제 특강에 관하여**

- .blind 질문 굿굿
- 실리콘 밸리 가보고 싶다.. 자극 받고 싶다면 판교라도 한번 가보자
- mdn 번역 등에 기여하는 법이 예전과 좀 달라졌다.

[https://github.com/mdn/translated-content/blob/main/docs/ko/translation-guide.md](https://github.com/mdn/translated-content/blob/main/docs/ko/translation-guide.md)

[https://github.com/mdn/translated-content/issues/827](https://github.com/mdn/translated-content/issues/827)

→ 원래는 웹에서 바로 할 수 있었는데 가능하다면 기여하자

- 번역한 페이지 링크 달아서 프로필에 남기는 거..!!
- mdn 안되어있는 페이지들 진짜 많다.
- 은님은 성취를 위한 의욕이 대단하신 분..!

**지난 과제 질문**

- flex → space-between으로 했는데 각 상자들 너비가 다를 때, 가운데 것을 정가운데 두고 싶다면??
    1. flex: 1? → 거의 해결. text-align center까지 이용해서
    2. nth:child이용 position absolute까지
    3. grid-template-columns이용 1과 비슷
- float 속성은 flex container 안에서 먹지 않는다.
- nav는 원래 block 속성
- position absolute를 먹이면 display 속성 자체가 block이 된다.
- select box 작업에서
- border top, right, bottom, left가 모서리만큼으로 가져가는 거를 이용해서 transparent까지 이용해서 기상 천외한 삼각형들을 만들 수 있다. 그거로 이미지 안쓰고 화살표 만들 수 있다..!!

**지난 select 과제 리뷰**

완전 잊고 있었다 바보..

- 포지션 속성이 웹브라우저에 부담을 주는 경우는 언제인가?
    
    → 배치를 다시 할 때 영향을 준다. 부모 요소를 다시 건들게되는 경우(animation등) 문제가 된다.
    
- box-sizing은 용도에 맞게 써야되는 곳에 주는 편
- 말줄임에 쓰는 Utility Class 만들어두기

**반응형 상황에서 컨텐츠를 어떻게 만들지**

- 반응형 이미지, 백그라운드, 동영상
- 대표적으로 GIF, JPG/JPEG, png, max-width
- gif는 256 컬러만 가능
- jpg 화소가 높고 용량도 작다, but 투명도 처리가 안된다... 그래서 투명 배경을 사용할 수가 없다.
- 반응형 이미지 만들기는 매우 쉽다. → width: 100%
    
    max-witdh: 100%? 원본크기 기준으로 더 안늘어난다.
    
- background-image의 기본 속성은 원본 크기만큼만 크기를 가지고 있다. background 한번 정리하자
- bg-size에서 contain은 이미지의 삭제가 없고, cover는 삭제가 있다.
    
    언제 contain이 좋고 언제 cover가 좋을까?
    
    먼저 이 이미지가 잘려도 괜찮은지 아닌지 확인
    
    png 처럼 alpha(투명)값이 있는 경우 contain을 하는게 낫다. 좋다 나쁘다 얘기할 수는 없지만 이미지와 컨텐츠의 배경이 어떻게 녹아들지 기획적인 부분을 따라서
    
    이미지가 잘려도 되는지, 전부 보이는거 유지해야하는지 비교해서 중요한거로
    
- 비디오 태그
    
    브라우저가 지원하는 동영상 포맷이 정해져있다.
    
    [https://developer.mozilla.org/en-US/docs/Web/Media/Formats/Containers](https://developer.mozilla.org/en-US/docs/Web/Media/Formats/Containers)
    
    video라는 태그가 있다.
    
    [https://developer.mozilla.org/en-US/docs/Web/HTML/Element/video](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/video)
    
    그냥 삽입만 해서는 재생이 안된다. controls
    
    preload 페이지 로드시 영상도 로드할지 결정 기본으로 auto
    
    poster 썸네일
    
    autoplay → muted가 없으면 안되더라 왜 이렇게 했을까? 사파리는 muted 없어도 자동재생
    
    1. 소리가 갑자기 나오면 시각 장애인분들은 너무 놀라도 바로 끌 수 있는 방법을 제공을 하던지 접근성고려가 되는 것
    2. 과도한 트래픽 방지
    
    반응형 비디오도 매우 쉽다 width 통해서
    
    자동재생 → 기본적으로 mute
    

- **iframe**
    
    iframe도 반응형? article등으로 감싸서
    
    검은 영역 발생 해결?  
    
    **iframe padding 값에 %값은 부모의 width값 기준**이다! 부모의 너비 top, bottom은 세로로 생각하기 쉬운데 부모의 너비기준 (left, right도 너비기준)
    
    iframe은 기본적으로 inline 속성이라, img 때처럼 빈공간이 생긴다. 따라서 vertical-align top 등으로 빈공간 제거하자
    
    ```css
    article {
        position: relative;
        padding-top: 56.25%;/*9/16*/
    } 
    
    article iframe {
        position: absolute;
        top: 0;
        left: 0;
        width: 100%;
        height: 100%;
    }
    ```