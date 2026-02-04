//Program to check given number is strong number or not
#include<stdio.h>
int main(){
	int n,rem=0;
	scanf("%d",&n);
	int res=0;
	int temp=n;
	while(temp!=0){
		int fact=1;
		rem=temp%10;
		for(int i=1;i<=rem;i++){			
			fact=fact*i;
		}
		res+=fact;
		temp/=10;	
	}
	if(res==n){
		printf("Strong number");
	}
	else{
		printf("Not strong number");
	}
	return 0;
}
