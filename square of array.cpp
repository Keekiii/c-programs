#include <stdio.h>

int main()
{
	int arr[5];
    int i;
    printf("\nEnter elements : \n"); 
    for(i=0; i<5; i++) 
    { 
        printf("Enter arr[%d] : ",i); 
        scanf("%d",&arr[i]); 
    } 
    printf("\nSquare of array elements: \n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i] * arr[i]);

    printf("\n");

    return 0;
}
