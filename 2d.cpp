//2-D array
#include<stdio.h>
main()
{
	int r,c,i,j,A[r][c],B[r][c],S[r][c];
	printf("Enter the no of rows");
	scanf("%d",&r);
	printf("enter the no of columns");
	scanf("%d",&c);
	//input A matrix
	printf(" the A  matrix input \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
			
		}
	}
	//print matrix A 
	printf("\n the  A matrix are: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",A[i][j]);
			
		}printf("\n");
	}
	//input B matrix
	printf("the B  matrix input \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&B[i][j]);
			
		}
	}
	//print matrix B 
	printf("\n the  B matrix are: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",B[i][j]);
			
		}printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			S[i][j]=A[i][j]+B[i][j];
		}
	printf("\n");
    }
    
    
    printf("Sum matrix: \n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d\t",S[i][j]);
		}printf("\n");
	}
    
    
    
}
