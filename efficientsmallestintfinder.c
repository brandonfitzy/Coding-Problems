#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 9

int main()
{
    int array[] = { 23, 68, 45, 43, 11, 99, 78, 52, 61 };
    int largest = 0;
    int i;
    for ( i=0 ; i < ARRAY_SIZE ; i++ )
    {
        if ( array[i] > largest )
        {
            largest = array[i];
        }
    }
    printf( "%d" , largest );
    return 0;
}
