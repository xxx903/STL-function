#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0;
	srand((unsigned int)time(NULL) );
	int n=rand()%100+1;
	int a;
	cout<<"s输入1~100的数字"<<endl; 
	do{
		cin>>a;
		cnt++;
		if(a>n)
		{
			cout<<"你输入的数字太大了"<<endl; 
		}
		else if(a<n)
		{
			cout<<"你输入的数字太小了"<<endl;
		}
		
	}while(a!=n);
	if(cnt>=1&&cnt<=3) 
	cout<<"恭喜你用了"<<cnt<<"次猜对了数字"<<n; 
	else if(cnt>3)
	cout<<"你算是废了,用了"<<cnt<<"次猜对了数字"<<n<< ",建议你重开"<<endl; 
	system("pause");
	
}
