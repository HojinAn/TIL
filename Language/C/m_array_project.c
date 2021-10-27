#include <stdio.h>
#include <time.h>
#include<stdlib.h>
// 10마리의 서로 다른 동물 (각 카드 2장씩)
// 사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
// 모든 동물 쌍을 찾으면 게임 종료
// 총 실패 횟수 알려주기

int arrayAnimal[4][5]; // 카드 지도 (20장의 카드)
int checkAnimal[4][5]; // 뒤집혔는지 여부 확인
char * strAnimal[10];


void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();
int foundAllAnimals();

int main_m_array(void)
{
    srand(time(NULL));

    initAnimalArray();
    initAnimalName();

    shuffleAnimal();

    int failCount = 0; //실패 횟수

    while(1)
    {
        int select1 = 0; // 사용자가 선택한 처음 수
        int select2 = 0; // 사용자가 선택한 두번째 수

        printAnimals(); // 동물 위치 출력
        printQuestion(); // 문제 출력 (카드 지도)
        printf("뒤집을 카드를 2개 고르세요 : ");
        scanf("%d %d", &select1, &select2);

        if(select1 == select2) // 같은 카드 선택시 무효
            continue;

        // 좌표에 해당하는 카드를 뒤입어 보고 같은지 안같은지 확인
        
        // 정수 좌표를 (x,y)로 변환
        int firstSelect_x = conv_pos_x(select1);
        int firstSelect_y = conv_pos_y(select1);

        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);

        // 같은 동물인 경우
        if ((checkAnimal[firstSelect_x][firstSelect_y] == 0 && checkAnimal[secondSelect_x][secondSelect_y] == 0) // 카드가 뒤집히지 않았는지
        && (arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y])) // 두 동물이 같은지
        {
            printf("\n\n빙고! : %s 발견\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]); // first로 하든 second로 하든 상관 없음
            checkAnimal[firstSelect_x][firstSelect_y] = 1;
            checkAnimal[secondSelect_x][secondSelect_y] = 1; // 1로 바꿔놔야 다음 조회때 선택된 카드라는 걸 알려줄 수 있다.
        }
        //다른 동물인 경우
        else
        {
            printf("\n\n 땡!! (틀렸거나, 이미 뒤집힌 카드입니다)\n");//뒤집힌 카드를 잘못 선택할 수도 있다.
            printf("%d: %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            printf("%d: %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
            printf("\n\n");

            failCount++;
        }

        // 모든 동물 찾았는지 여부, 1 : 참, 0 : 거짓
        if (foundAllAnimals() == 1)
        {
            printf("\n\n 축하합니다 ! 모든 동물을 찾았습니다. \n");
            printf("지금까지 총 %d 번 실수하였습니다.\n", failCount);
            break;
        }

    }

    return 0;
}

void initAnimalArray()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arrayAnimal[i][j] = -1;//arrayAnimal을 일단 -1로 초기화
        }
    }
}

void initAnimalName()
{
    strAnimal[0] = "monkey";
    strAnimal[1] = "hippo";
    strAnimal[2] = "dog";
    strAnimal[3] = "cat";
    strAnimal[4] = "pig";

    strAnimal[5] = "elephant";
    strAnimal[6] = "giraffe";
    strAnimal[7] = "camel";
    strAnimal[8] = "ostrich";
    strAnimal[9] = "tiger";
}

void shuffleAnimal()
{
    for (int i = 0; i < 10; i++)//10마리 동물의 포지션
    {
        for (int j = 0; j < 2; j++)
        {
            int pos = getEmptyPosition();//빈 공간 받아올 함수
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);//getEmptyPosition로 받아온 값을 위치좌표로 변환

            arrayAnimal[x][y] = i;//받아온 빈 공간에 동물 포지션 넣기
        }
    }
}

//좌표에서 빈 공간 찾기
int getEmptyPosition()//이 함수를 int 대신 point라는 구조체 class를 쓰면 return을 바로 각 x,y로 반환 할 수 있는데, 암튼 아직 안배웠으니
{
    while (1)
    {
        int randPos = rand() % 20; // 0 ~ 19 사이의 숫자 반환
        //□□□□□   0  1  2  3  4
        //□□□□□   5  6  7  8  9
        //□□□□□  10 11 12 13 14
        //□□□□□  15 16 17 18 19
        // ex. 19면 (3,4)로 변환 되어야 함
        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);//19라고 치면 3,4의 위치를 알아냈다.

        if (arrayAnimal[x][y] == -1)//초기화 상태는 -1, 즉 비어있는 공간
        {
            return randPos;//빈공간이면 지금 위치를 반환해달라, getEmptyPosition함수가 구조체 point형이면 바로 xy로 반환(return)할텐데 우선 이렇게 return하고서 실행할 때 다시 변환해준다.
        }
    }
}

int conv_pos_x(int x)
{
    // 19 -> (3,4) x = 3
    return x / 5;
}

int conv_pos_y(int y)
{
    // 19 -> y = 4
    return y % 5; // y를 5로 나눈 나머지 값
}

void printAnimals()
{
    //□□□□□   1  1  2  2  3
    //□□□□□   3  4  4  5  5라고 가정해보자(숫자들은 위에서 선언한 동물들)
    //□□□□□  
    //□□□□□  
    printf("\n====== 원래 비밀인데 답 확인차 보여주기 ======\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%8s", strAnimal[arrayAnimal[i][j]]); // 0: monkey라면 1이 어디 저장되어 있다? arrayAnimal[i][j]에 저장되어 있다.
        }
        printf("\n");
    }
    printf("\n====================================\n\n");
}

void printQuestion()
{
    printf("\n\n(문제)\n");
    int seq = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            //카드를 뒤집어서 정답을 맞췄으면 '동물 이름'
            if (checkAnimal[i][j] != 0)
            {
                printf("%8s", strAnimal[arrayAnimal[i][j]]);
            }
            //아직 뒤집지 못했으면(정답 맞히기 전) 뒷면 -> 위치를 나타내는 숫자
            else{
                printf("%8d", seq);
            }
            seq++;
        }
        printf("\n");
    }
}

int foundAllAnimals()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(checkAnimal[i][j] == 0)
            {
                return 0;
            }
        }
    }
    return 1; // 모든 동물 찾음.
}