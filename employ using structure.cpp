#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    char name[20];
    int salary;
};

void printEmployeeDetails(struct employee emp);

void printEmployeeDetails(struct employee emp)
{
    printf("Employee CODE is: %d\n" ,emp.code);
    printf("Employee NAME is: %s\n" ,emp.name);
    printf("Employee SALARy is: %d\n",emp.salary);     

}

int main()
{
    struct employee e1;
    printf("Enter your CODE\n");
    scanf("%d",&e1.code);

    printf("Enter your NAME\n");
    scanf("%d",&e1.name);

    printf("Enter your SALARY\n");
    scanf("%d",&e1.salary);

    printEmployeeDetails(e1);
    return 0;
}
