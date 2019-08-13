/*DCP 21*/

/*
Given an array of ovelapping time intervals
return the minimum number of rooms
*/

#include <stdio.h>

int times[3][2] = {
	{30, 75},
	{0, 50},
	{60, 150}
};

int rows= sizeof(times)/sizeof(times[0]);

int cols = 2;

int largestinarray();

int main () {

    int n=largestinarray();

	int maxx=0;
	int x=0;
	int i; int j;
	for (i=0;i<n;i++){
		for (j=0;j<rows;j++){
			if (times[j][0]<i && times[j][1]>i){
				x++;
			}
		}
		if (x>maxx){
			maxx=x;
			x=0;
		} else {
			x=0;
		}
	}
	printf("%d", maxx);
	
	
	return 0;
}

int largestinarray(){
	int largest=0;
    int i; int j;
	for (i=0; i<rows; i++){
		for (j=0; j<cols; j++){
			if (times[i][j]>largest){
				largest=times[i][j];
			}
		}
	}
	return largest;
}
