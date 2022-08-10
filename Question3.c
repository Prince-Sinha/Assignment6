#include<stdio.h>
int main(){
     int n;
     int i=1;
     int sum=0;
     printf("Enter the value of n: ");
     scanf("%d",&n);
     while(i<=2*n){
        sum=sum+i;
        i+=2;
     }
     printf("The sum of first %d natural no. is %d",n,sum);

    return 0;
}