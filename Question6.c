#include<stdio.h>
int main(){
     int n;
     int i=1;
     int fac=1;
     printf("Enter the value of n: ");
     scanf("%d",&n);
     while(i<=n){
        fac=fac*i;
        i++;
     }
     printf("The factorial of %d is %d",n,fac);

    return 0;
}