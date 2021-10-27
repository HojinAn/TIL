#include <stdio.h>

#define MAX 10000
int main_file(void)
{
    // 파일 입출력
    // 파일에 어떤 데이터를 저장
    // 파일에 저장된 데이터를 불러오기

    // fputs, fgets 쌍 -> 주로 문자열 저장
    char line[MAX]; // char line[10000]
    //파일에 쓰기
    // FILE * file = fopen("test1.txt", "wb"); // r(read)읽기전용 w(write)쓰기전용 a(append)이어쓰기 / 뒤에 붙는 거 t(text) b(binary)
    // if ( file == NULL)
    // {
    //     printf("파일 열기 실패\n");
    //     return 1;
    // }

    // fputs("fputs 를 이용해서 글을 적어보기\n", file);//앞에는 작성할 내용, 뒤에는 파일 pointer를 적어주면 된다.
    // fputs("잘 적히는지 확인해주세요\n", file);

    // 파일 읽기
    // FILE * file = fopen("test1.txt", "rb"); // r(read)읽기전용 w(write)쓰기전용 a(append)이어쓰기 / 뒤에 붙는 거 t(text) b(binary)
    // if ( file == NULL)
    // {
    //     printf("파일 열기 실패\n");
    //     return 1;
    // }

    // while(fgets(line, MAX, file) != NULL)
    // {
    //     printf("%s", line);
    // }


    // 파일을 열고 나서 닫지 않은 상태에서 프로그램에 어떤 문제가 생기면?
    // 데이터 손실 발생 가능 ! 그래서 항상 파일은 닫아주는 습관을 가져야 한다.
    //fclose(file);


    // fprintf, fscanf 쌍  -> 정형화 된 포맷에 대해서 파일을 읽고 쓰고 할 때 쓴다 문자열 때 쓰면 안된다는 것은 아니다.
    // printf("%d %d %s ...") 주로 정형화된 포맷에 맞춰 입력하고 싶을 때 주로 쓴다
    // scanf("%d %d", &num1, ...) 이런식으로
    int num[6] = { 0, 0, 0, 0, 0, 0 }; // 추첨번호
    int bonus = 0; // 보너스 번호
    char str1[MAX];
    char str2[MAX];

    // 파일에 쓰기
    // FILE * file = fopen("test2.txt", "wb");
    // if (file == NULL)
    // {
    //     printf("파일 열기 실패\n");
    //     return 1;
    // }

    // // 로또 추첨 번호 저장
    // fprintf(file, "%s %d %d %d %d %d %d\n", "추첨 번호 ", 1, 2, 3, 4, 5, 6);
    // fprintf(file, "%s %d\n", "보너스 번호", 7);
    
    // 파일 읽기
    FILE * file = fopen("test2.txt", "rb");
    if (file == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
    printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

    fscanf(file, "%s %d", str2, &bonus);
    printf("%s %d\n", str2, bonus);

    fclose(file); 
    //원래 이렇게 짜면 파일에 써있는대로 나와야할텐데 왜 
    //추첨 0 0 0 0 0 0 
    //번호 1
    //이렇게 나오지 gcc랑 c랑 좀 달라서 그런가 이건 나중에 연구


    return 0;
}