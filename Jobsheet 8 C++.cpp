#include <iostream>
using namespace std;

int main()
{
	int x[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"masukkan nilai "<<i+1<<"= ";
		cin>>x[i];
	}
	cout<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"nilai ke- "<<i+1<<"= "<<x[i]<<endl;
	}
	cout<<endl;
return 0;
	
}
