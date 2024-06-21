#include<stdio.h>
int main()
{ int a;

for (int i=0;; i++){
scanf("%d", &a);
if(a==0){
    printf("Zero");
    }

    else if (a>0){
   printf(" positive");
    }
    break;
}


for (int i=0;; i--){
if(a<0){
    printf("nagetive");
}
break;
}

    return 0;
}