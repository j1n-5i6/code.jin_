#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int Try=0;
    int UserHundred, UserTen, UserOne;
    int Hundred, Ten, One;

    srand(time(NULL));

    while (1)
    {
        Hundred = (rand() % 9) + 1;
        Ten = rand() % 10;
        One = rand() % 10;

        if (Hundred!=Ten && Ten!=One && Hundred!=One)
            break;
    }

    printf("야구 게임\n기회는 10번입니다.\n");

    for (Try=0; Try<10; Try++)
    {
        printf("백의자리 수를 입력하세요.\n");
        scanf("%d", &UserHundred);
        printf("십의자리 수를 입력하세요.\n");
        scanf("%d", &UserTen);
        printf("일의자리 수를 입력하세요.\n");
        scanf("%d", &UserOne);

        if (UserHundred==UserTen || UserTen==UserOne || UserOne==UserHundred)
            {
                printf("숫자 중복은 불가능합니다.");
                continue;
            }

        int Ball=0;
        int Strike=0;

        if (UserHundred==Hundred)
            Strike++;
        else if (UserTen==Hundred || UserOne==Hundred)
            Ball++;

        if (UserTen==Ten)
            Strike++;
        else if (UserHundred==Ten || UserOne==Ten)
            Ball++;

        if (UserOne==One)
            Strike++;
        else if (UserTen==One || UserHundred==One)
            Ball++;

        int Out=3-(Strike+Ball);

        printf("\n남은기회%d\n%d스트라이크\n%d볼\n%d아웃\n\n", 9-Try, Strike, Ball, Out);

        if (Strike==3)
        {
            printf("정답입니다.");
            printf("아무 키나 누르면 종료됩니다...\n");
            getchar();
            getchar();
            return 0;
        }
    }
    printf("실패입니다. 정답%d%d%d입니다.", Hundred, Ten, One);
    printf("아무 키나 누르면 종료됩니다...\n");
    getchar();
    getchar();
}
