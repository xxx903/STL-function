#include<iostream>
#include<algorithm>//从大到小进行全排序，保证数据是从大到小 
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
