//Program to check given number is Armstrong number or not
#include<stdio.h>
#include<math.h>
int main(){
	int n,rem=0,count=0;
	scanf("%d",&n);
	int temp=n;
	while(temp!=0){
		rem=temp%10;
		count++;
		temp/=10;
	}
	int res=0;
	temp=n;
	while(temp!=0){
		rem=temp%10;
		res+=pow(rem,count);
		temp/=10;
	}
	if(res==n){
		printf("Armstrong");
	}
	else{
		printf("Not Armstrong");
	}
	return 0;
}
