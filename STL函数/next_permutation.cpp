#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,m=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	do{
	if(k==m)
		{
			for(int i=0;i<n;i++)//��һ�δ�ӡ���ǵ�һ������ 
			{
				cout<<a[i]<<' ';
			}
			 cout<<endl;
		}
	m++;
		
		
	}while(next_permutation(a,a+n));
	
	
	
	
	
	
	
}
