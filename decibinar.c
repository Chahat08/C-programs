#include<stdio.h>

int main(){
     int n, i, j, bin_rev=0,bin=0;
     printf("Enter a number to convert : ");
     scanf("%d",&n);
     i=1;
    while(n){
        bin_rev=bin_rev+(n%2)*i;
        i=i*10;
        n=n/2;
    }
     
    i=1;
    while(bin_rev){
        bin=bin+(bin_rev%10)*i;
        i=i*10;
        bin_rev=bin_rev/10;
     }
    
     printf("nBinary is %d",bin);
     
     return 0;
}
