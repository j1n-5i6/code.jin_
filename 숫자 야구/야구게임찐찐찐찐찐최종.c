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

    printf("�߱� ����\n��ȸ�� 10���Դϴ�.\n");

    for (Try=0; Try<10; Try++)
    {
        printf("�����ڸ� ���� �Է��ϼ���.\n");
        scanf("%d", &UserHundred);
        printf("�����ڸ� ���� �Է��ϼ���.\n");
        scanf("%d", &UserTen);
        printf("�����ڸ� ���� �Է��ϼ���.\n");
        scanf("%d", &UserOne);

        if (UserHundred==UserTen || UserTen==UserOne || UserOne==UserHundred)
            {
                printf("���� �ߺ��� �Ұ����մϴ�.");
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

        printf("\n������ȸ%d\n%d��Ʈ����ũ\n%d��\n%d�ƿ�\n\n", 9-Try, Strike, Ball, Out);

        if (Strike==3)
        {
            printf("�����Դϴ�.");
            printf("�ƹ� Ű�� ������ ����˴ϴ�...\n");
            getchar();
            getchar();
            return 0;
        }
    }
    printf("�����Դϴ�. ����%d%d%d�Դϴ�.", Hundred, Ten, One);
    printf("�ƹ� Ű�� ������ ����˴ϴ�...\n");
    getchar();
    getchar();
}
