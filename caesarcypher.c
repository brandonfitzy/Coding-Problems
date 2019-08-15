#include <stdio.h>

main () {
	char alphabet[26]={"abcdefghijklmnopqrstuvwxyz"};
	printf("Would you like to encrypt or translate?");
	char choice[20];
	char newword[20];
	scanf('%s',choice);
	if (choice=="encrypt"){
		int n;
		printf("How many places over would you like to shift?");
		scanf('%d', n);
		printf("What word would you like encrypted?");
		char word[20];
		scanf('%s', word);
		int i; int j;
		for (i=0;i<20;i++){
			for (j=0;j<26;j++){
				if (word[i]==alphabet[j]){
					newword[i]=alphabet[j+n];
				}

			}

		}
		printf("Your encrypted word is: %s", newword);

	} else {
		int n;
		printf("How many places over is the shift?");
		scanf('%d',n);
		printf("What word would you like translated?");
		char word[20];
		scanf('%s', word);
		int i; int j;
		for (i=0;i<20;i++){
			for (j=0;j<26;j++){
				if (word[i]==alphabet[j]){
					newword[i]=alphabet[j-n];
				}

			}

		}
		printf("Your translated word is: %s", newword);
	}



return 0;
}
