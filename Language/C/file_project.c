#include <termio.h>
#include <stdio.h>
#include<string.h>

int getch(void)
{
    int ch;

    struct termios old;
    struct termios new;

    tcgetattr(0, &old);

    new = old;
    new.c_lflag &= ~(ICANON|ECHO);
    new.c_cc[VMIN] = 1;
    new.c_cc[VTIME] = 0;

    tcsetattr(0, TCSAFLUSH, &new);
    ch = getchar();
    tcsetattr(0, TCSAFLUSH, &old);

    return ch;
}

// 비밀번호를 입력 받아서
// 맞는 경우? 비밀 일기를 읽어와서 보여주고, 계속 작성하도록한다.
// 틀린 경우? 경고 메세지를 표시하고 종료한다.

#define MAX 10000

int main(void)
{
    // fgets, fputs 활용
    char line[MAX]; // 파일에서 불러온 내용을 저장할 변수
    char contents[MAX]; // 일기장에 입력할 내용
    char password[20]; // 비밀번호 입력
    char c; // 비밀번호 입력 할 때 키값 확인용 (마스킹) 입력된 비밀번호 가려주는 마스킹

    printf("'비밀일기'입니다\n");
    printf("비밀번호를 입력하세요 : ");

    //getchar() / getch() 의 차이?
    //getchar() : 엔터를 입력받아야 동작을 한다.
    //getch() : 키 입력시 바로바로 동작을 한다.
    int i = 0;
    while (1)
    {
        c = getch();
        if (c == 10) // Enter의 ASCII코드 -> 비밀번호 입력 종료 C에선 13인가본데 gcc에선 10인듯
        {
            password[i] = '\0';
            break;
        }
        else // 비밀번호 입력 중
        {
            printf("*");
            password[i] = c;
        }
        i++;
    }

    // 비밀번호 : 나도코딩(skehzheld)
    printf("\n\n === 비밀번호 확인 중 ... ===\n\n");
    if (strcmp(password, "skehzheld") == 0) // 비밀 번호 일치 0이면 일치라는 뜻
    {
        printf(" === 비밀번호 확인 완료 === \n\n");
        char * fileName = "secretdiary.txt";
        FILE * file = fopen(fileName, "a+b");
        //파일이 없으면 생성, 파일이 있으면 append를 한다.(뒤에서부터 내용을 추가한다.)
        if (file == NULL)
        {
            printf("파일 열기 실패\n");
            return 1;
        }

        while (fgets(line, MAX, file) != NULL)
        {
            printf("%s", line);// 파일에 있는 내용을 출력해줄 것
        }

        printf("\n\n 내용을 계속 작성하세요 ! 종료하시려면 EXIT 를 입력하세요 \n\n");

        while (1)
        {
            scanf("%[^\n]"/*줄바꿈이 나오기 전까지의 모든 문자열을 다 받아들여라 라는 의미*/, contents); // 새 줄(\n)이 나오기 전까지 읽어들임 (한 문장씩)
            getchar(); // Enter 입력 (\n) Flush 처리(buffer에 남아 있는 \n을 없애버린다.) 무시 처리

            if(strcmp(contents, "EXIT") == 0)
            {
                printf("비밀일기 입력을 종료합니다\n\n");
                break;
            }
            fputs(contents, file);
            fputs("\n", file); // Enter를 위에서 무시 처리 하였으므로 임의로 추가
        }
        fclose(file);
    }
    else // 비밀번호 틀린 경우
    {
        printf(" === 비밀번호가 틀렸어요 === \n\n");
    }
    return 0;
}