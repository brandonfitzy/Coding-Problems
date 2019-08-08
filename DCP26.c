/* DCP 26 */

/* Given an array of the start and end of time intervals find how many rooms you need so each group meeting in those intervals 
   has a place to meet*/

#include <stdio.h>

int main() {
    int scheds [5][2] = {{30,75},{0,50},{60,150},{0,160},{170,180}};
    int rooms = 1;
    int i; int j; int k; int l;
    for (i=0;i<4;i++){
        for (j=i+1;j<4;j++){
            if (scheds[i][1]>scheds[j][0]){
                rooms++;
                printf("%d %d %d \n", i, j, rooms);
            }
        }
        
    }
    printf("You need %d", rooms);
	return 0;
}
