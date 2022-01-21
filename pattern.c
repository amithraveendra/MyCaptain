#include <stdio.h>

int main()
{
    int n,i,j;

    
    printf("Enter number of steps: ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
    	printf("\n01");
    	for(j=0;j<i;j++)
    	  printf("01");
	}
    

   


}
