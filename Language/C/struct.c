#include <stdio.h>

struct GameInfo {
    char * name;
    int year;
    int price;
    char * company;

    struct GameInfo * friendGame; //연관 업체 게임, 구조체 안에 구조체 포인터
};

typedef struct /*GameInformation 이렇게 얘 이름 지워줘도 밑에 GAME_INFO로 사용 할 수 있다.*/ {
    char * name;
    int year;
    int price;
    char * company;

    struct GameInfo * friendGame; //연관 업체 게임, 구조체 안에 구조체 포인터
} GAME_INFO; // 일케 쓰면 struct 어쩌고 쓸 필요 없이 그냥 GAME_INFO로 사용 가능

int main_struct(void)
{
    //[게임 출시]
    // 이름 : 나도게임
    //발매년도 : 2017년
    //가격 : 50 원
    //제작사 : 나도회사

    char * name = "나도게임";
    int year = 2017;
    int price = 50;
    char * company = "나도회사";

    //[또다른 게임 출시]
    //이름 : 너도게임
    //발매년도 : 2017
    //가격 : 100 원
    //제작사 : 너도회사

    char * name2 = "너도게임";
    int year2 = 2017;
    int price2 = 100;
    char * company2 = "너도회사";

    // 구조체 사용
    struct GameInfo/*여기까지 자료형*/ gameInfo1/*이게 변수명*/;
    //struct GameInfo gameInfo2;
    gameInfo1.name = "나도게임";
    gameInfo1.year = 2017;
    gameInfo1.price = 50;
    gameInfo1.company = "나도회사";

    // 구조체 출력
    printf("-- 게임 출시 정보 --\n");
    printf("  게임명   : %s\n", gameInfo1.name);
    printf("  발매년도 : %d\n", gameInfo1.year);
    printf("  가격     : %d\n", gameInfo1.price);
    printf("  제작사   : %s\n", gameInfo1.company);

    // 구조체를 배열처럼 초기화
    struct GameInfo gameInfo2 = {"너도게임", 2017, 100, "너도회사"};
    printf("-- 또다른 게임 출시 정보 --\n");
    printf("  게임명   : %s\n", gameInfo2.name);
    printf("  발매년도 : %d\n", gameInfo2.year);
    printf("  가격     : %d\n", gameInfo2.price);
    printf("  제작사   : %s\n", gameInfo2.company);

    // 구조체 배열
    struct GameInfo gameArray[2] = {
        {"나도게임", 2017, 50, "나도회사"},
        {"너도게임", 2017, 100, "너도회사"}
    };

    // 구조체 포인터
    struct GameInfo * gamePtr; //missionman
    gamePtr = &gameInfo1;//주소 받아오기
    printf("\n\n--미션맨의 게임 출시 정보 --\n");
    /*printf("  게임명   : %s\n", (*gamePtr).name);// *ptr은 주소값ptr의 값 (*gamePtr).name이라 하면 가리킨 주소에 저장된 값의 property를 지정
    printf("  발매년도 : %d\n", (*gamePtr).year);
    printf("  가격     : %d\n", (*gamePtr).price);
    printf("  제작사   : %s\n", (*gamePtr).company);*/
    printf("  게임명   : %s\n", gamePtr->name);//이렇게 쓰면 위에 쓴 방법이랑 똑같이 출력된다. 이것이 바늘로써의 포인터..?ㅎㅎ
    printf("  발매년도 : %d\n", gamePtr->year);
    printf("  가격     : %d\n", gamePtr->price);
    printf("  제작사   : %s\n", gamePtr->company);

    //연관 업체 게임 소개
    gameInfo1.friendGame = &gameInfo2;//friendGame도 구조체포인터, 포인터이기 때문에 위에서 gamePtr 같이 주소를 지정 가능하다.
    printf("\n\n--연관업체의 게임 출시 정보 --\n");
    printf("  게임명   : %s\n", gameInfo1.friendGame->name);
    printf("  발매년도 : %d\n", gameInfo1.friendGame->year);
    printf("  가격     : %d\n", gameInfo1.friendGame->price);
    printf("  제작사   : %s\n", gameInfo1.friendGame->company);   

    // typedef
    // 자료형에 별명 지정
    int i = 1;
    typedef int jeongsu;//이렇게 하면 이제부터 int는 jeongsu랑 똑같은 것
    typedef float shilsu;
    jeongsu jeongsoo = 3; // int i = 3;
    shilsu shilsoo = 3.23f; // float f = 3.23f;
    printf("\n\n정수변수 : %d, 실수변수 : %.2f\n\n", jeongsoo, shilsoo);

    typedef struct GameInfo gamejeongbo;
    gamejeongbo game1;
    game1.name = "한글 게임";
    game1.year = 2015;

    GAME_INFO game2;
    game2.name = "한글 게임2";
    game2.year = 2014;

    return 0;

}