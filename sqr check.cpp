//Program to check given integer is perfect square or not
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int sqr=sqrt(n);
	int prdt=sqr*sqr;
	if(prdt==n){
		printf("Perfect square");
	}
	else{
		printf("Not Perfect square");
	}
}
