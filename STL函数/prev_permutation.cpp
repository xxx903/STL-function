#include<iostream>
#include<algorithm>//�Ӵ�С����ȫ���򣬱�֤�����ǴӴ�С 
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,greater<int >());
	do{
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<' ';
		}
		cout<<endl;
	}while(prev_permutation(a,a+n));
	
	
	
	
}
