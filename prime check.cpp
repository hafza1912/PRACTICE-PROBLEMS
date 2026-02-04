//Program to check given number is prime number or not
#include<stdio.h>
int main(){
	int n,count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	count>2?printf("Not Prime number"):printf("Prime number");
	return 0;
}
