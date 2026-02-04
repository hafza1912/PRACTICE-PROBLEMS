//Program to read age of a candidate and determine whether he is eligible to vote
#include<stdio.h>
int main(){
	int age;
	scanf("%d",&age);
	if(age>=18){
		printf("Eligible to vote");
	}
	else{
		printf("Not eligible to vote");
	}
	return 0;
}
