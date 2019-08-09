#include <stdio.h>

int factorial(int a);

int main(){
	printf("%d \n", factorial(1));
	printf("%d \n", factorial(3));
	printf("%d \n", factorial(5));
	printf("%d \n", factorial(0));
	printf("%d \n", factorial(10));
}

int factorial(int a){
	int num=a;
	if (a==1){
		num=1;
	}
	else if (a>1){
		num*=factorial(a-1);
	} else {
		num=0;
		printf("ERROR...not a positive integer!");
	}
	return num;
}
