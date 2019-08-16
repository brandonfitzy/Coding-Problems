/*Sort an array from largest to smallest*/

#include <stdio.h>

#define SIZE_OF_ARRAY   (8)
#define MIN(x,y)        (x<y)

int main()
{
	int arr[SIZE_OF_ARRAY] = {23,63,41,72,73,10,99,100};
	int i; int j;
	for (i=0; i<=(SIZE_OF_ARRAY)-2; i++)
    {
		for (j=i+1;j<=(SIZE_OF_ARRAY-1); j++)
		{
			if (MIN(arr[i],arr[j]))
            {
                int value;
				value=arr[i];
				arr[i]=arr[j];
				arr[j]=value;
			}

		}

	}
	for (i=0;i<=(SIZE_OF_ARRAY-1);i++)
    {
		printf("%d ", arr[i]);
	}
	return 0;
}
