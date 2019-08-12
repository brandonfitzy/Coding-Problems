/*Floyd's Triangle*/

#include <stdio.h>

int main(){
	int i; int j; int rows=10; int num=1;
	for (i=1;i<=rows;i++){
		for (j=1; j<=i; j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
	return 0;
}