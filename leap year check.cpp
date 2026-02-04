//Program to check give year is leap year or not
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%100==0){
		if(n%400==0){
			printf("Leap year");
		}
		else{
			printf("Not leap year");
		}
		
	}
	else if(n%4==0){
		printf("Leap year");
	}
	else{
		printf("Not leap year");
	}
	return 0;
}
