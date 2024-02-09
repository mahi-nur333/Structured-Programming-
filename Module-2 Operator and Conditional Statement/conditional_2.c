#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("i will eat burger");
    }
    else if (tk >= 50)
    {
        printf("i will eat hot dog");
    }
    else
    {
        printf("i will eat nothing");
    }
}