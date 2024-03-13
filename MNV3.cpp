#include <stdio.h>

int rnumber(int num) 
{
    int digit1, digit2, digit3;

    
    digit1 = num % 10;
    num /= 10;
    digit2 = num % 10;
    num /= 10;
    digit3 = num;

    
    int rnumber = digit1 * 100 + digit2 * 10 + digit3;
    return rnumber;
}

int main() 
{
    int n;

    
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    
    int rev = rnumber(n);
	 printf("The reversed number is: %d\n", rev);
}
