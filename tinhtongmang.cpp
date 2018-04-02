#include<iostream>
using namespace std;

int main()
{
	int m,t,j,i,n,s=0,max,min;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	cout<<a[i];
	
	for(i=0;i<n;i++)
	s=s+a[i];
	cout<<"tong mang la:";
	cout<<"s"<<"="<<s<<endl;
	
	max=a[1];
	for(i=0;i<n;i++)
	if(a[i]>max) max=a[i];
	cout<<"phan tu lon nhat la:";
	cout<<max<<endl;
	
	min=a[1];
	for(i=0;i<n;i++)
	if(a[i]<min)  min=a[i];  
	cout<<"phan tu nho nhat la:";
	cout<<min<<endl;
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++){
	if(a[i]<a[j])
	{
		m=a[i];
		a[i]=a[j];
		a[j]=m;
		}
		}
	cout<<"sap xep tu be den lon"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    
    for(i=0;i<n;i++)
    for(j=0;j<n;j++){
    if(a[i]>a[j])
    {
    	t=a[i];
    	a[i]=a[j];
    	a[j]=t;
    	}
    	}
    cout<<"sap xep tu lon den be:"<<endl;
    for(i=0;i<n;i++)
    
    cout<<a[i]<<endl;
    return 0;
    }
	
	
