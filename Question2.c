#include<stdio.h>
int main(){
     int n;
     int i=2;
     int sum=0;
     printf("Enter the value of n: ");
     scanf("%d",&n);
     while(i<=2*n){
        sum=sum+i;
        i+=2;
     }
     printf("The sum of first %d even natural no. is %d",n,sum);

    return 0;
}