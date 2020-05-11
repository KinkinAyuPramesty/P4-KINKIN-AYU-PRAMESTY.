#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

    string snack[17]={"milkita\t","tictac\t","bengbeng","panser\t","komo\t","better\t","mie gemes","oreo\t","piatos\t","taro\t","yupi\t","jelly\t","nabati\t","malkist\t","padimas\t","biskuat\t","chokychoky"};
    int harga[17]={1,2,2,1,1,1,1,2,2,1,1,1,2,3,1,2,1};
    int jumlah;
void listsnack(string snack[],int harga[]){
    cout<<"****************************************************************************\n";
    cout<<"  nomer\t\t  snack\t\t\tharga\n";
    cout<<"****************************************************************************\n";
   for(int i=0;i<17;i++){
        cout<<" "<<i<<"\t\t"<<snack[i]<<"\t\tRp. "<<harga[i]<<"K\t\t"<<" "<<endl;
   }
   cout<<"******************************************************************************\n";
   cout<<endl;
}

int belian(){
    ulang:
        int nomer,jml,total;
    	char lagi;
        cout<<"Masukkan nomer snack : ";
        cin>>nomer;
        cout<<"Nama snack \t: "<<snack[nomer]<<endl;
        cout<<"Harga snack \t: Rp. "<<harga[nomer]<<"K"<<endl;
        cout<<"Jumlah snack yg dibeli = ";cin>>jml;
        total=jml*harga[nomer];
        jumlah=jumlah+total;
        cout<<"total belanja \t: Rp. "<<total<<"K"<< endl;
        cout<<"belanja lagi? (y/n) : ";
        cin>>lagi;
        cout<<endl;
    if(lagi=='Y' || lagi=='y'){
    	
   cout<<"******************************************************************************\n";
    	goto ulang;
	}else{cout<<endl;}
}

int main(){
    int pilih;
    cout<<"\t\t     Selamat datang di warung K13     "<<endl;
    cout<<"\t!!jika ada yang lebih murah, dijamin uang kembali!!"<<endl;
    cout<<"\t\t     *******************************\n"<<endl;
    listsnack(snack,harga);
    belian();
    cout<<"******************************************************************************\n";
    cout<<"\n\tAnda membeli snack dengan jumlah di atas"<<endl;
    cout<<"\n\tTotal harga yang harus anda bayar adalah : ";
    cout<<"Rp. "<<jumlah<<"K"<<endl;
    cout<<"\n******************************************************************************\n";
    cout<<"\n****************Terima Kasih Sudah Berbelanja di warung Kami******************\n";
}
