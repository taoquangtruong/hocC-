#include<iostream>
using namespace std;

int main()
{   int a[1000];
	a[1]=1,a[2]=1;
	int dem,i,n;
	cin>>n;
	for(i=3;i<=1000;i++)
	{	a[i]=a[i-1]+a[i-2];if(a[i]>n) break; dem=i;
	}
	for(i=1;i<=dem;i++)
	cout<<(a[i])<<endl;
	return 0;
	}
		
