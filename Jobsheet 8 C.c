#include <stdio.h>

main()
{
	int x[5],i;
	for(i=0;i<5;i++)
	{
		printf("masukkan nilai %i = ",i+1 );
		scanf("%i",&x[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("nilai ke- %i = %i \n",i+1,x[i] );
	}
}
	
