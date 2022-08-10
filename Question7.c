#include<stdio.h>
int main(){
     int n;
     int count=0;
     int i=1;
     printf("Enter the value of n: ");
     scanf("%d",&n);
     int a=n;
     for(i=0;a>=1;i++){
        a=a/10;
        count++;
     }
     printf("The number of digits in %d is %d",n,count);

    return 0;
}