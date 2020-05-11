#include <stdio.h>
#include <conio.h>
using namespace std;

    char snack[17][30]={"milkita\t","tictac\t\t","bengbeng\t","panser\t\t","komo\t\t","better\t\t","mie gemes\t","oreo\t\t","piatos\t\t","taro\t\t","yupi\t\t","jelly\t\t","nabati\t\t","malkist\t","padimas\t","biskuat\t","chokychoky\t"};
    int harga[17]={1,2,2,1,1,1,1,2,2,1,1,1,2,3,1,2,1};
    int jumlah;
void listsnack(){
    printf("****************************************************************\n");
    printf("   nomer\t\t  snack\t\t\tharga\n");
    printf("****************************************************************\n");
   for(int i=0;i<17;i++){
        printf(" %d\t\t %s",i,snack[i]);printf("\t\tRp. %d.K\t\t\n",harga[i]);
   }
   printf("*****************************************************************\n");
   getch;
}

int belian(){
    int nomer,jml,total;
    char lagi;
    ulang:
        printf("Masukkan nomer snack : ");
        scanf("%i",&nomer);
        printf("Nama snack \t: %s\n",snack[nomer]);
        printf("Harga snack \t: Rp. %d.K\n",harga[nomer]);
        printf("Jumlah snack yg dibeli = ");scanf("%d",&jml);
        total=jml*harga[nomer];
        jumlah=jumlah+total;
        printf("total belanja \t: Rp. %d.K\n",total);
        printf("belanja lagi? (y/n) : ");
        scanf("%s",&lagi);
    if(lagi=='Y' || lagi=='y'){
    	
   printf("*****************************************************************\n");
    	goto ulang;
	}else{}
}

int main(){
    printf("\n\t\t     Selamat Datang di Warung K13\n");
    printf("\t!!jika ada yang lebih murah,dijamin uang kembali!!\n");
    printf("\t\t ***********************************\n\n");
    listsnack();
    belian();
    printf("*******************************************************************\n");
    printf("\n\tAnda membeli snack dengan jumlah di atas\n");
    printf("\n\tTotal harga yang harus anda bayar adalah : ");
    printf("Rp. %d.K\n",jumlah);
    printf("\n\tTerimakasih telah berbelanja di warung kami.");
    printf("\n*****************************************************************\n");
}
