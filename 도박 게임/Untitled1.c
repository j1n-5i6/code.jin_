#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int Money=100;
    int UserFirst, UserSecond, UserThird, UserFourth, UserFifth;
    int First, Second, Third, Fourth, Fifth;
    int Bet, Reward, Match;

    printf("������\n");
    printf("1�� ������ 1��, 2�������� 2��...5�������� 5��\n");
    while (Money>0)
    {
        srand(time(NULL));
        First = rand() % 10;
        Second = rand() % 10;
        Third = rand() % 10;
        Fourth = rand() % 10;
        Fifth = rand() % 10;

        printf("\n���� �ڱ�:%d\n", Money);
        printf("������ �ݾ� �Է�");
        scanf("%d", &Bet);
        if (Bet>Money || Bet<=0)
        {
            printf("�ڱ��� �����մϴ�.\n");
            continue;
        }

        printf("\n1���� 9������ ���� �� 5���� �ϳ��� �Է��ϼ���.\n");

        printf("ù��° ���� �Է�");
        scanf("%d", &UserFirst);
        printf("�ι�° ���� �Է�");
        scanf("%d", &UserSecond);
        printf("����° ���� �Է�");
        scanf("%d", &UserThird);
        printf("�׹�° ���� �Է�");
        scanf("%d", &UserFourth);
        printf("�ټ���° ���� �Է�");
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

        printf("\n�÷��̾��� ����..%d, %d, %d, %d, %d", UserFirst, UserSecond, UserThird, UserFourth, UserFifth);
        printf("\n����� ����......%d, %d, %d, %d, %d\n", First, Second, Third, Fourth, Fifth);

        if (Match>0)
        {
            printf("��÷! �� %d�� ����!\n", Match);
            Reward=Bet*Match;
            Money+=Reward;
        }
        else
        {
            printf("��÷... ���� ��ȸ��\n");
            Money-=Bet;
        }
    }
    printf("���� ���� �����ϴ�.\n");
    printf("�ƹ�Ű�� ������ ����");
    getchar();
    getchar();
}
