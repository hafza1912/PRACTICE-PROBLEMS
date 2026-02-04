//Program to calculate sum of digits of a given number
#include<stdio.h>
int main(){
	int n,rem=0,sum=0;
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	printf("%d",sum);
	return 0;
}
