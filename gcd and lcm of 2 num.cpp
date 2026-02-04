//Program to find gcd and lcm of 2 numbers
#include<stdio.h>
int main(){
    int a,b,gcd=0;
    scanf("%d %d",&a,&b);
    int x=a,y=b;
    int min=(a<b)?a:b;
    for(int i=1;i<=min;i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    int lcm=(x*y)/gcd;
    printf("%d\n",gcd);
    printf("%d",lcm);
    return 0;
}
