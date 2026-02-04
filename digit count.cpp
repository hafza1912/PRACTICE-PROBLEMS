//Program to count no.of digits in a given number
#include<stdio.h>
int main(){
	int n,rem=0,count=0;
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		count++;
		n/=10;
	}
	printf("%d",count);
	return 0;
}
