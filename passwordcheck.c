/*Password validator*/

#include <stdio.h>
#include <string.h>

char numbers[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char uppercase[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
char lowercase[] = { "abcdefghijklmnopqrstuvwxyz" };
char specialchars[] = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '?' };

void passwordvalidator( char *a, int b );

int main()
{
	char password[] = { "manatees" };
    char *passwordpointer;
    int len;
    passwordpointer = password;
    len = strlen( password );
	passwordvalidator( passwordpointer, len );
	return 0;
}

void passwordvalidator( char *a, int b )
{
	int l; int num = 0; int up = 0; int low = 0; int spec = 0; int i; int j;
	char array[b];
	for ( l = 0 ; l < b ; l++ )
    {
		array[l] = a[l];
	}
	for ( i = 0 ; i < strlen( array ) ; i++ )
	{
		for ( j = 0 ; j <= strlen( numbers ) ; j++ )
		{
			if ( array[i] == numbers[j] )
			{
				num = 1;
			}
		}
		for ( j = 0 ; j <= strlen( uppercase ) ; j++ )
		{
			if ( array[i] == uppercase[j] )
			{
				up = 1;
			}
		}
		for ( j = 0 ; j <= strlen( lowercase ) ; j++ )
		{
			if ( array[i] == lowercase[j] )
			{
				low = 1;
			}
		}
		for ( j = 0 ; j <= strlen( specialchars ) ; j++ )
		{
			if ( array[i] == specialchars[j] )
			{
				spec = 1;
			}
		}
	}
	if ( num == 0 )
	{
		printf( "You need atleast one number. \n" );
	}
	if ( up == 0 )
	{
		printf( "You need atleast one uppercase letter. \n" );
	}
	if ( low == 0 )
	{
		printf( "You need atleast one lowercase letter. \n" );
	}
	if ( spec == 0 )
	{
		printf( "You need atleast one special character. \n" );
	}
	if ( num == 1 && up == 1 && low == 1 && spec == 1 )
	{
		printf( "Password meets requirements. \n" );
	}
}
