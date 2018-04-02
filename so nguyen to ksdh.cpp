#include<iostream>
using namespace std;

int main()
{
	int d,i,j,n;
	cout<<"nhap so nguyen :";
	cin>>n;
	cout<<'n'<<"cac so nguyen to khong vuot qua ";
	for(d=0,i=2;i<=(n);i++)
	for(j=2;j<=i/2;j++)
	if(i%j==0) break;
	if(j==i/2+1)
	{
		d++;
		cout<<'i'<<endl;
		
	}
	cout<<'d'<<'tong';
	return 0;
	}
