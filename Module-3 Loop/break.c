/*#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=10; i++)
    {
       if(i==4){
        break;
       }
        printf("%d\n", i);()  // it will never print 4 bcz printf use after the break condition so it can not print 4
    }




    return 0;
}*/



#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=10; i++)
    {
        printf("%d\n", i);

        
       if(i==4){
        break;
       }
    }




    return 0;
}