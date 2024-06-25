 #include <stdio.h>
int main()
{
    int sum = 0;
    int i;
    for (int i = 1; i <= 10; i = i+1)
    {
        sum += i;
    }
    printf("%d", sum);
    
    return 0;
}




/*
#include <stdio.h>
int main()
{
    long long int sum = 0;
    int i;
     int n;
    scanf("%d" , &n);
    for (int i = 1; i <= n; i = i+1)
    {
        sum += i;
    }
    printf("%lld", sum);
    
    return 0;
}
*/


