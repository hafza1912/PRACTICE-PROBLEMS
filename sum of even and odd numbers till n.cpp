//Program to calculate sum of even and odd numbers till n
#include<stdio.h>
int main(){
	int n,esum=0,osum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			esum+=i;
		}
		else{
			osum+=i;
		}
	}
	printf("%d\n",esum);
	printf("%d",osum);
	return 0;
}
