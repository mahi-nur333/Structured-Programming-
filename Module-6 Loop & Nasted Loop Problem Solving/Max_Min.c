#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, min = INT_MAX ,max= INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a < min)
        {
            min = a;
        }

        if(a>max){
            max=a;
        }
    }
    printf("min:%d\nmax:%d", min,max);

    return 0;
}