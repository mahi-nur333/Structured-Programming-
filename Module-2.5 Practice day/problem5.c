#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 10000)
    {
        printf("gucchi beg\n");
        if (tk > 20000)
        {
            printf("gucchi belt");
        }
    }
    else if (tk >= 5000)
    {
        printf("lavis beg");
    }

    else
    {
        printf("something");
    }

    return 0;
}