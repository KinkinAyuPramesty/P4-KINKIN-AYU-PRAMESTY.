#include <stdio.h>
main()
{
	int i,j;
	int matrik1[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("Masukkan nilai matrik %i,%i = ",i,j);
		scanf("%i",&matrik1[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%i ",matrik1[i][j]);
	}
		printf("\n");
	}
	printf("nilai matrik setelah di transpose = ");
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%i ",matrik1[j][i]);
		}
		printf("\n");
	}
}
