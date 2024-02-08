#include<stdio.h>
int main(){
 //int a =1000000000; more than +-10^9 will not acepted
 //printf("%d",a);
 
 //long long int a=100000000000000; more than +-10^18 will not acepted
 //printf("%lld",a);

  //float a= 25.556789; after decimal point 6 digit can take
  //printf("%f",a);

  double a=5.556789058864769; //after decimal point 15 digit can take 
  printf("%0.15lf",a);

}
