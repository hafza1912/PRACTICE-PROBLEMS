//Program to print all numbers between 1 to n which is power of 2
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int val=1;
    while(val<=n){
        printf("%d ",val);
        val=val*2;
    }
    return 0;
}
