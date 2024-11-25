#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void test01()
{
	vector<int >v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
		
	}
	vector<int >::iterator  it=  find(v.begin(),v.end(),5);
	if(it==v.end()) 
	{
		cout<<"no";
	}
	else
	{
		cout<<*it;
	}
	
}
	
	
	

int main()
{
	test01();
}
