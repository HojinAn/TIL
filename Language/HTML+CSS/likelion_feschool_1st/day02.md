**팁**

[https://validator.w3.org/nu/](https://validator.w3.org/nu/)  
\-> html 표준을 지켰나 볼 수 있는 사이트  
[https://caniuse.com/](https://caniuse.com/)  
\-> 해당 태그를 어떤 브라우저에서 사용 가능한가 확인 할 수 있는 사이트

마크업 작성  
\- 전체를 section으로 잡고 각 칸칸을 article로 잡으면 될듯  
\- 포럼소개 등 footer 쪽은 ul, li등으로 되어 있음 주소 부분도 address 태그로 넣기  
\- 사각형 그리기부터 하기  
\- 미디어 태그 비디오 태그 설명 vimeo 같은 거는 로그인을 해야만 사용할 수 있다.  
\- form 태그는 request 등을 이해해야 한다.

**Query String**

\- query string에서 해쉬는 해당 페이지의 id로 가게 된다. 계속 &(앤 퍼센트) 뒤에 나오는 것은 key와 value

\- 이런 것이 get 방식이다. url 인코딩 꼭해줘야 한다.

\- ? 뒤에 query string으로 키워드, value 쌍들을 서버로 던져주면 서버는 해당 정보들을 찾아서 반환 이것이 get 그런데 보안과 관련돼서 사용하는게 post

\- 서버는 어찌 됐든 던지는 method를 받고 정보를 반환한다. post 방식으로 서버에 넘기게 되면 서버로 데이터로 보이게 된다.

\- 서버 입장에선 string을 받는 방식은 get이든 post든 똑같다. 그냥 post는 이미지, 대용량의 데이터 같은 경우 보내는게 맞다. get은 이미지 보낼 수 없다. 일일이 url을 인코딩해서 보내기는 번거로운 일

\- 게시물 번호 등을 url에 노출되어 있으면 비밀 게시물도 그냥 url 입력으로 들어갈 수도 있으니까 조심해야함

**get, post 방식**

\- 자세한 설명은 http 수업 때 / query string으로 처리할 수 있는 정보들은 get 방식으로 대용량 데이터는 post로 암튼! key와 value로 맵핑 / 인증정보 전달 내용은 서버에서 다룰 것

\- radio는 한 개를 선택할 때 다른 것은 빠지는 것. action attribute는 method 방식으로 정보를 던져줄 곳

\- select, option 태그 등 선택하는 곳에서는 던져지는 정보는 select tag의 name: device와 option tag의 value값이다. \-> /?device=galaxy

\- form으로 묶인 태그들 중 input들의 data를 submit이라는 type의 button을 눌렀을 때 action이 가리키는 파일에 get이라는 method로 던져준다

\- label tag의 for attribute는 input tag의 id와 연결된다

\- fieldset은 그룹화된 정보들을 던져주고 싶을 때

**button vs submit**

\- 보통 button을 많이 사용한다. </button> 태그를 닫아줄 수 있기 때문에 꾸미기에 더 좋다 다만 type="submit"은 꼭 해주기

\- radio가 배타적으로 가동(즉, 정상적으로 작동)되기 위해서는 각각의 input tag의 name attribute가 같아야 한다.
