// Print Lowercase/Uppercase alphabets
#include <stdio.h>
int main() 
{
    char c;
    printf("\n Enter u to display uppercase alphabets.\n");
    printf("\n Enter l to display lowercase alphabets. \n");
    scanf("%c", &c);

    if (c == 'U' || c == 'u') 
		{
        for (c = 'A'; c <= 'Z'; ++c)
            printf(" %c ", c);
    	} 
	else if (c == 'L' || c == 'l') 
		{
        for (c = 'a'; c <= 'z'; ++c)
            printf(" %c ", c);
    	} 
	else 
		{
        printf("Error! You entered an invalid character.");
    	}

    return 0;
}

