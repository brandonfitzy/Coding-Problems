/* DCP 26 */

/* Given an array of the start and end of time intervals find how many rooms you need so each group meeting in those intervals 
   has a place to meet*/

#include <stdio.h>

int main() {
    int scheds [5][2] = {{30,75},{0,50},{60,150},{160,170},{0,200}};
    int rooms=1;
    int next=0;
    int i; int j;
    for (i=0;i<4;i++){
        for (j=i+1;j<5;j++){
            if (scheds[i][1]>scheds[j][0]  && scheds[i][1]<scheds[j][1] && scheds[i][0]>scheds[j][0]  && scheds[i][0]<scheds[j][1]){
                next=1;
                printf("%d \n",i);
            }else{
                next=0;
            }
        }
        rooms=rooms+next;
    }
    printf("%d", rooms);

	return 0;
}
