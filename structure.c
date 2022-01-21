#include <stdio.h>
struct employee
{
	int empno;
	char empname[20];
	char department[10];
	float salary;
}emp[20];

void main()
{
    int n,i;
    printf("\nEnter no of employee : ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
    	printf("\n Enter %d employee details ",i+1);
    	printf("\n Enter Employee ID : ");
    	scanf("%d",&emp[i].empno);
    	printf("\n Enter Employee Name : ");
    	scanf("%s",emp[i].empname);
    	printf("\n Enter Employee Department : ");
    	scanf("%s",&emp[i].department);
    	printf("\n Enter Employee Salary : ");
    	scanf("%f",&emp[i].salary);
    	printf("\n\n\n\n");
    }
    display(n);

}
void display(int n)
{
	int i;
	printf("\n EmpId\t\tName\t\tDepart\t\tSalary\t\t\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%s\t\t%s\t\t%f\t\t\n",emp[i].empno,emp[i].empname,emp[i].department,emp[i].salary);
	}
}
