#include <stdio.h>
int main()
{
	static int array[5];
	int i;
	int sum;
	printf("\nEnter elements : \n"); 
    for(i=0; i<5; i++) 
    { 
        printf("Enter array[%d] : ",i); 
        scanf("%d",&array[i]); 
    } 
 
  	int addnum(int *ptr);
     	sum = addnum(array);
 
        printf("Sum of all array elements = %5d\n", sum);
 
}
 int addnum(int *ptr)
{
	int index, total = 0;
	for (index = 0; index < 5; index++) 
        {
		total += *(ptr + index);
	}
	return(total);
 
}
