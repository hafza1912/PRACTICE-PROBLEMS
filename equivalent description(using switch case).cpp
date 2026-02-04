//Program to accept a grade and declare the equivalent description(using switch case)
#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	switch(ch){
		case 'e':
			printf("Excellent");
			break;
		case 'E':
			printf("Excellent");
			break;
		case 'v':
			printf("Very good");
			break;
		case 'V':
			printf("Very good");
			break;
		case 'G':
			printf("Good");
			break;
		case 'g':
			printf("Good");
			break;
		case 'A':
			printf("Average");
			break;
		case 'a':
			printf("Average");
			break;
		case 'f':
			printf("Fail");
			break;
		case 'F':
			printf("Fail");
			break;
		default:
			printf("Not valid");
			break;
	}
	return 0;
}
