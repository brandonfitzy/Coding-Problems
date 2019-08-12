/*Sort an array from largest to smallest*/

#include <stdio.h>

int main(){
	int arr[] = {23,63,41,72,73,10,99};
	int i; int j; int value;
	for (i=0; i<=5; i++){
		for (j=i+1;j<=6; j++){
			if (arr[i]<arr[j]){
				value=arr[i];
				arr[i]=arr[j];
				arr[j]=value;
			}
				
		}
		
	}
	int k;
	for (k=0;k<=6;k++){
		printf("%d ", arr[k]);
	}
	return 0;
}
