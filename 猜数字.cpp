#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0;
	srand((unsigned int)time(NULL) );
	int n=rand()%100+1;
	int a;
	cout<<"s����1~100������"<<endl; 
	do{
		cin>>a;
		cnt++;
		if(a>n)
		{
			cout<<"�����������̫����"<<endl; 
		}
		else if(a<n)
		{
			cout<<"�����������̫С��"<<endl;
		}
		
	}while(a!=n);
	if(cnt>=1&&cnt<=3) 
	cout<<"��ϲ������"<<cnt<<"�β¶�������"<<n; 
	else if(cnt>3)
	cout<<"�����Ƿ���,����"<<cnt<<"�β¶�������"<<n<< ",�������ؿ�"<<endl; 
	system("pause");
	
}
