#include <stdio.h>

int main()
{
    int a, b;
   
    printf("�� ������ �Է��ϼ��� : ");
    scanf("%d %d", &a, &b);
    while (1)
    {
        char ch;
        scanf("%c", &ch);
        if (ch == 'F') break;
        
        if (a > b)
        {
            printf("Yes \n");
        }
        else if (a == 0 && b == 0)
        {
            printf("Yes \n");
            break;
        }
        
        else
        {
            printf("No \n");
        }
        printf("�׸��ϰ� �ʹٸ� F�� �����ÿ�. \n");
        printf("�ٽ� �Է��ϼ��� : \n");
        scanf("%d %d", &a, &b);

    }

    return 0;
}