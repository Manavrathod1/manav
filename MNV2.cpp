#include <stdio.h>

int main() 
{
    int array[10],n;
    int small;
    
	printf("Enter the size of the array: ");
    scanf("%d", &n);
    
	printf("Enter elements of array:\n");
    for(int i = 0; i < n; i++) 
	{
        scanf("%d", &array[i]);
    }
    small = array[0];
    for(int i = 1; i < n; i++) 
	{
        if(array[i] < small) 
		{
            small = array[i];
        }
    }
    printf("The smallest element in the array is %d\n", small);
}
