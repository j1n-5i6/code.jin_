#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int Money=100;
    int UserFirst, UserSecond, UserThird, UserFourth, UserFifth;
    int First, Second, Third, Fourth, Fifth;
    int Bet, Reward, Match;

    printf("도박장\n");
    printf("1개 맞으면 1배, 2개맞으면 2배...5개맞으면 5배\n");
    while (Money>0)
    {
        srand(time(NULL));
        First = rand() % 10;
        Second = rand() % 10;
        Third = rand() % 10;
        Fourth = rand() % 10;
        Fifth = rand() % 10;

        printf("\n현재 자금:%d\n", Money);
        printf("배팅할 금액 입력");
        scanf("%d", &Bet);
        if (Bet>Money || Bet<=0)
        {
            printf("자금이 부족합니다.\n");
            continue;
        }

        printf("\n1부터 9까지의 숫자 중 5개를 하나씩 입력하세요.\n");

        printf("첫번째 숫자 입력");
        scanf("%d", &UserFirst);
        printf("두번째 숫자 입력");
        scanf("%d", &UserSecond);
        printf("세번째 숫자 입력");
        scanf("%d", &UserThird);
        printf("네번째 숫자 입력");
        scanf("%d", &UserFourth);
        printf("다섯번째 숫자 입력");
        scanf("%d", &UserFifth);

        Match=0;
        if(UserFirst==First)
            Match++;
        if(UserSecond==Second)
            Match++;
        if(UserThird==Third)
            Match++;
        if(UserFourth==Fourth)
            Match++;
        if(UserFifth==Fifth)
            Match++;

        printf("\n플레이어의 숫자..%d, %d, %d, %d, %d", UserFirst, UserSecond, UserThird, UserFourth, UserFifth);
        printf("\n행운의 숫자......%d, %d, %d, %d, %d\n", First, Second, Third, Fourth, Fifth);

        if (Match>0)
        {
            printf("당첨! 총 %d개 적중!\n", Match);
            Reward=Bet*Match;
            Money+=Reward;
        }
        else
        {
            printf("낙첨... 다음 기회에\n");
            Money-=Bet;
        }
    }
    printf("남은 돈이 없습니다.\n");
    printf("아무키나 누르면 종료");
    getchar();
    getchar();
}
