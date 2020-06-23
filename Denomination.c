#include<stdio.h>
main()
{
	long int n[10]={2000,500,200,100,50,20,10,5,2,1};
	long int amt,i=0;
	printf("\nEnter Amount --> ");
	scanf("%ld",&amt);
	printf("\n\nTotal Number of Notes (Denomination)::\n");
	for(;i<10;i++)
	{
		printf("\n%ld * %ld = %ld",n[i],amt/n[i],amt/n[i]*n[i]);
		amt-=(amt/n[i])*n[i];
	}
}
