#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    switch (n >= 0) 
	{
        case 1:
            printf("%d is positive.\n", n);
            break;
        case 0:
        	printf("%d is negative.\n", n);
                    break;
            
            
    }
}
