
/* Emirp Numbers*/


#include <stdio.h>
#include <stdlib.h>

int isprime(int a);
int numreverse(int c);

int main() {
    printf("An emirp number is a prime number that when its digits are reversed it creates another prime number.\n");
    printf("Enter the number you would like to test if it is emirp:");
    int num;
    scanf("%d",&num);
    if (isprime(num)==1){
        printf("%d is not prime nor emirp.",num);
    } else {
        int revnum=numreverse(num);
        if (isprime(revnum)==1){
            printf("%d is prime but not emirp.",num);
        } else {
            printf("%d is prime and emirp.",num);
        }
    }
	return 0;
}

int isprime(int a){
    int i;
    int b=0;
    for (i=2;i<a;i++){
        if (a%i==0){
            b=1;
        }
    }
    return b;
}

int numreverse(int c){
    int d=0;

    while (c!=0){
        d=d*10;
        d=d+c%10;
        c=c/10;
    }

    return d;
}
