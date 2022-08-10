#include<stdio.h>
int main(){
     int a,b,max,min,lcd;
     int i,fac=1;
     printf("Enter two number: ");
     scanf("%d%d",&a,&b);
     min=a<=b?a:b;
     max=a>=b?a:b;
     for(i=min;i>=1;i--){
         if(max%i==0 && min%i==0){
              fac=fac*i;
         }  
     }
     lcd=a*b/fac;
     printf("The LCM of %d & %d  is %d ",a,b,lcd);

    return 0;
}