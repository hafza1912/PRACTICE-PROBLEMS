//Program to find gcd and lcm of 2 numbers
#include<stdio.h>
int main(){
	int a,b,gcd=0;
	scanf("%d %d",&a,&b);
	int temp=a;
	a<=b?a=a:a=b;
	for(int i=1;i<=a;i++){
		if(a%i==0&b%i==0){
			gcd=i;
		}
	}	
	int lcm;
	lcm=(temp*b)/gcd;
	printf("%d\n",gcd);
	printf("%d",lcm);
}
