#include <stdio.h>
int main()
{
    int a;

    for (int i = 0; i >= 0; i++);
    {
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            printf("even");
        }

        else
        {
            printf("odd");
        }
    }

    return 0;
}