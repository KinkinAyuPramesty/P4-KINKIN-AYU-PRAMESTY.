#include <stdio.h>

main()
{
	printf("Nama : kinkin ayu pramesty\nNIM : F1B019075\nKelompok : 13\n\n");
	char* x [5];
	printf("masukkan nim mahasiswa pertama = ");
	scanf("%s",&x[0]);
	printf("masukkan nim mahasiswa kedua = ");
	scanf("%s",&x[1]);
	printf("masukkan nim mahasiswa ketiga = ");
	scanf("%s",&x[2]);
	printf("masukkan nim mahasiswa keempat = ");
	scanf("%s",&x[3]);
	printf("masukkan nim mahasiswa kelima = ");
	scanf("%s",&x[4]);
	printf("nim mahassiswa pertama = %s\n",&x[0]);
	printf("nim mahassiswa kedua = %s\n",&x[1]);
	printf("nim mahassiswa ketiga = %s\n",&x[2]);
	printf("nim mahassiswa keempat = %s\n",&x[3]);
	printf("nim mahassiswa kelima = %s\n",&x[4]);
}
