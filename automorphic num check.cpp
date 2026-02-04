//Program to check given number is automorphic number or not
#include<stdio.h>
int main(){
	int n,rem=0;
	scanf("%d",&n);
	int sqr=n*n;
	if(n>9&&n<100){
		rem=sqr%100;
	}
	else{
		rem=sqr%10;
	}
	if(rem==n){
		printf("Automorphic number");
	}
	else{
		printf("Not Automorphic number");
	}
	return 0;
}
