#include<stdio.h>
void swap(int a, int b);
void swap_addr(int * a, int * b);
void changeArray(int * ptr);
int main_pointer(void)
{
    // // 포인터

    // //[철수] : 101호
    // //[영희] : 201호
    // //[민수] : 301호
    // //각 문 앞에 '암호'가 걸려 있음
    // int chulsoo = 1;
    // int younghee = 2;
    // int minsoo = 3;

    // printf("철수네 주소 : %p, 암호 : %d\n", &chulsoo, chulsoo);
    // printf("영희네 주소 : %p, 암호 : %d\n", &younghee, younghee);
    // printf("민수네 주소 : %p, 암호 : %d\n", &minsoo, minsoo);

    // //미션맨 ! 

    // //첫 번재 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
    // int * missionman; // 포인터 변수
    // missionman = &chulsoo;
    // printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", missionman, *missionman);

    // missionman = &younghee;
    // printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", missionman, *missionman);

    // missionman = &minsoo;
    // printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", missionman, *missionman);

    // //두번재 미션: 각 암호에 3을 곱해라
    // missionman = &chulsoo;
    // *missionman = *missionman * 3;
    // printf("미션맨이 암호를 바꾼 곳 주소 : %p, 암호 : %d\n", missionman, *missionman);

    // missionman = &younghee;
    // *missionman = *missionman * 3;
    // printf("미션맨이 암호를 바꾼 곳 주소 : %p, 암호 : %d\n", missionman, *missionman);

    // missionman = &minsoo;
    // *missionman = *missionman * 3;
    // printf("미션맨이 암호를 바꾼 곳 주소 : %p, 암호 : %d\n", missionman, *missionman);

    // //스파이
    // // 미션맨이 바꾼 암호에서 2를 빼기

    // int * spy = missionman;
    // printf("\n ... 스파이가 미션 수행하는 중 ... \n\n");
    // spy = &chulsoo;
    // *spy = *spy - 2; //chulsoo = chulsoo - 2
    // printf("스파이가 방문하는 곳 주소 : %p, 암호 : %d\n", spy, *spy);

    // spy = &younghee;
    // *spy = *spy - 2; //younghee = younghee - 2
    // printf("스파이가 방문하는 곳 주소 : %p, 암호 : %d\n", spy, *spy);

    // spy = &minsoo;
    // *spy = *spy - 2; //minsoo = minsoo - 2
    // printf("스파이가 방문하는 곳 주소 : %p, 암호 : %d\n", spy, *spy);

    // printf("\n ... 철수 영희 민수는 집에 온 뒤 바뀐 암호를 보고 깜놀 ... \n\n");

    // printf("철수네 주소 : %p, 암호 : %d\n", &chulsoo, chulsoo);
    // printf("영희네 주소 : %p, 암호 : %d\n", &younghee, younghee);
    // printf("민수네 주소 : %p, 암호 : %d\n", &minsoo, minsoo);

    // //참고로 미션맨의 주소는 &missionman으로 확인
    // printf("미션맨의 주소 : %p\n", &missionman);
    // printf("스파이의 주소 : %p\n", &spy);

    // 배열 ?
    // int arr[3] = { 5, 10, 15};
    // int * ptr = arr;//ptr 과 arr은 똑같은 녀석들
    // for(int i = 0; i < 3; i++)
    // {
    //     printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
    //     printf("배열 arr[%d] 의 값 : %d\n", i, *(arr + i));//arr[i] 자체가 arr의 첫 주소에서 i만큼 더했을 때의 주소의 값을 출력하는 거라? 맞나 암튼 그래서 *(arr + i)랑 arr[i]는 완전히 똑같다.
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
    //     printf("포인터 ptr[%d]의 값 : %d\n", i, *(ptr + i));
    // }
    // ptr[0] = 100;
    // ptr[1] = 200;
    // ptr[2] = 300;
    // for(int i = 0; i < 3; i++)
    // {
    //     printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
    //     printf("배열 arr[%d] 의 값 : %d\n", i, *(arr + i));
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
    //     printf("포인터 ptr[%d]의 값 : %d\n", i, *(ptr + i));
    // }
    // // *(arr + i) == arr[i] 똑같은 표현
    // // arr == arr 배열의 철번째 값의 주소와 동일 == &arr[0]
    // printf("arr 자체의 값: %p\n", arr);
    // printf("arr[0]의 주소: %p\n", &arr[0]);

    // printf("arr 자체의 값이 가지는 주소의 실제 값: %d\n", *arr); // *(arr + 0)
    // printf("arr[0]의 실제 값: %d\n", *&arr[0]);

    // // *&는 아무것도 없는 것과 같다. &는 주소이며, *은 그 주소의 값이기 때문에 
    // // *&는 서로 상쇄된다.
    // printf("arr[0]의 실제 값: %d\n", *&*&*&*&*&*&*&*&*&*&*&*&*&arr[0]);
    // printf("arr[0]의 실제 값: %d\n", arr[0]);

    // SWAP
    // int a = 10;
    // int b = 20;
    // printf("a의 주소 : %p\n", &a);
    // printf("b의 주소 : %p\n", &b);

    // // a와 b의 값을 바꾼다.
    // printf("Sawp 함수 전 => a: %d, b: %d\n", a, b);
    // swap(a, b);
    // printf("Sawp 함수 후 => a: %d, b: %d\n", a, b);

    // // 값에 의한 복사 (Call by Value) -> 값만 복사한다는 의미

    // // 주소값을 넘기면? 메모리 공간에 있는 주소값 자체를 넘기면
    // printf("(주소값 전달)Sawp 함수 전 => a: %d, b: %d\n", a, b);
    // swap_addr(&a, &b);
    // printf("(주소값 전달)Sawp 함수 후 => a: %d, b: %d\n", a, b);

    //배열일 대, arr2 -> 주소
    int arr2[3] = { 10, 20, 30};
    //changeArray(arr2);
    changeArray(&arr2[0]);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr2[i]);
    }

    //scanf 에서 &num 과 같이 & 를 사용하는 이유?

    return 0;
}

void swap(int a, int b)
{
    printf("(Swap 함수 내)a의 주소 : %p\n", &a);
    printf("(Swap 함수 내)b의 주소 : %p\n", &b);//main에서 선언된 a,b의 주소값과 swap 함수 내에서 사용되는 a,b의 주소값이 다르다. 그래서 swap이 안된다.

    int temp = a;
    a = b;
    b =temp;
    printf("Sawp 함수 내 => a: %d, b: %d\n", a, b);
}

void swap_addr(int * a, int * b)
{
    printf("(Swap 함수 내)*a의 주소 : %p\n", a);
    printf("(Swap 함수 내)*b의 주소 : %p\n", b);
    int temp = *a;
    *a =* b;
    *b =temp;
    printf("(주소값 전달)Sawp 함수 내 => a: %d, b: %d\n", *a, *b);
}

void changeArray(int * ptr)
{
    ptr[2] = 50;
}