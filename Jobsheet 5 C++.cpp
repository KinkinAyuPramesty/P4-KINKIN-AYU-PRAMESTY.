#include <iostream>
using namespace std;

main ()
{
	int i, j;
	int matrik1[2][2] ,matrik2[2][2] ,jumlah [2][2];
	for (i = 0; i < 2; i++)
	{
		for (j=0; j<4; j++)
		{
			cout << "Masukkan nilai matrik 1 = " << i << "," << j << " = ";
			cin >> matrik1[i][j];
		}
	}
	cout << endl;
	for (i=0; i< 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << "Masukkan nilai matrik 2 = " <<i<< "," <<j<< " = ";
			cin >> matrik2[i][j];
		}
	}
	cout << endl;
	for (i=0; i< 2; i++){
		for (j = 0; j < 4; j++){
			jumlah[i][j] = matrik1[i][j]*matrik2[i][j];
			cout << jumlah [i][j] <<" ";
		}
		cout << endl;
	}
}
