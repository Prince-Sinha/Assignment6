#include<stdio.h>
int main(){
     int n,r;
     int count=0;
     printf("Enter the value of n: ");
     scanf("%d",&n);
     while(n!=0){
       r=n%10;
       count=count*10+r;
       n/=10;
     }
     printf("The reverse no. is %d",count);
    return 0;
}