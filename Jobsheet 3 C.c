#include <stdio.h>
#include <conio.h>
main()
{
	int matrix1[2][2],matrix2[2][2],i,j;
	printf("matrix 1\n");
	for(i=0;i<2;i++){
	for(j=0;j<4;j++){
	printf("Element[%d][%d] :",i,j);
	scanf("%d", &matrix1 [i][j]);
}
}
	printf("matrix 2\n");
	for(i=0;i<2;i++){
	for(j=0;j<4;j++){
	printf("Element[%d][%d] :",i,j);
	scanf("%d",&matrix1 [i][j]);
}
}
	printf("\nhasil penjumlahan\n\n");
	for (i=0;i<2;i++){
	for (j=0;j<4;j++)
	printf("%d\t",matrix1[i][j] + matrix2[i][j]);
	printf("\n");
	getch();
}
}
