#include <stdbool.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        {
            printf("we will go to cox's bazar\n");
        }
        if (tk >= 10000)
        {
            printf("we will go to saint martin");
        }
        else
        {
            printf("we will back from cox's bazar");
        }
    }

    else
    {
        printf("we won't going anywhere");
    }

    return 0;
}