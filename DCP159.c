/* DCP 159 */
/* given a string return the first character than repeats, or if none repeat*/

#include <stdio.h>
#include <string.h>

int main() {
	char str[]={"mountains"};
	int l=strlen(str);
	int i; int j; int k=0;
	char repeats[l];
	for (i=0;i<l;i++){
		for (j=i+1;j<l;j++){
			if (str[i]==str[j]){
				repeats[k]=str[i];
				k++;
				break;
			}
		}
	}
	if (k==0){
	    printf("No letters repeat.");
	} else {
    printf("The first letter that repeats is '%c'.", repeats[0]);
	}
return 0;
}
