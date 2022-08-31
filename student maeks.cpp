#include<stdio.h>
int main()
{
    int markspy,marksC,marksmath,marksphy;
    printf("Enter your Python Marks: ");
    scanf("%d",&markspy);
    printf("Enter your C Programming marks ");
    scanf("%d",&marksC);
    printf("Enter your Mathematics marks ");
    scanf("%d",&marksmath);
    printf("Enter your Physics marks ");
    scanf("%d",&marksphy);
    int Total = (markspy+marksC+marksmath+marksphy);
     printf("Total = %d ",Total);
    int Aggregate = (Total/4);
    printf("\nThe Aggregate is: %d", Aggregate); 
    
    if(Aggregate <0 || Aggregate>100)
    {
        printf("Wrong Entry");
    }
    else if(Aggregate<50)
    {
        printf("Grade F");
    }
    else if(Aggregate>=60 && Aggregate<75)
    {
        printf("First Division");
    }
    else if(Aggregate>=50 && Aggregate<60)
    {
        printf("Second Division");
    }
    else if(Aggregate>=40 && Aggregate<50)
    {
        printf("Third Division");
    }
    else if(Aggregate>=80 && Aggregate<100)
    {
        printf("\nDistinction");
    }
    else
    {
        printf("Fail");
    }
}


