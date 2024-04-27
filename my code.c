#include<stdio.h>
void primefactor(int n);
int main(){int k;
printf("enter a number:");
scanf("%d",&k);
primefactor(k);


}
 void primefactor(int n){
    int i=2;
   while(n>1){
        if(n%i==0){
            printf(" %d ,",i);
            n=n/i;
        }
        else{
            i++;
        }
    }
 }
  
  

