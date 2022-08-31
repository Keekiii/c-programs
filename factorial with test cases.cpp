#include<stdio.h>
#include<ctype.h>
int main()
{
	int x,fact=1,n;
	printf("Enter a number to find factorial: ");
	scanf("%d",&n); 
    if(n>=0 && n!='\0')
{
    
	{
		for(x=1;x<=n;x++)
    	{
			fact=fact*x; 
    	}
    		printf("Factorial of %d is: %d",n,fact);
	} 

	
}
else
{
	printf("enter only positive num, negetive numbers,alphabets,spl characters are not allowed] ");
}
    return 0;

}
