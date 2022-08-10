#include<stdio.h>
int main(){
     int n,a;
     int i=2;
     int count =0;
     printf("Enter the value of n: ");
     scanf("%d",&n);
     while(i<n){
        a=n%i;
        if(a==0){
            count++;
            break;
        } 
       i++;   
     }
     if(count==0 || n==2){
     printf("The number %d is a prime number",n);
}
     else{
     printf("The number %d is not a prime number",n);

     }

    return 0;
}