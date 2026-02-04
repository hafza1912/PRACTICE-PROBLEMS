//Program to print Fibonacci series upto a given number limit
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0,b=1,c;
    if(n>=0){
    	printf("%d ",a);
	}
    if(n>=1){
    	printf("%d ",b);
	}
    c=a+b;
    while(c<=n){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
