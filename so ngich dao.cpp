#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    
	int n,m,s=0;
	cin>>n;
	while(n>0)
	{
		m=n%10;
		s=s*10+m;
		n=n/10;
		}
		cout<<('s')<<'='<<s;
		return 0;
		}
	
	
	
