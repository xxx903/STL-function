#include<bits/stdc++.h>
using namespace std;
void o(int s)
{
	cout<<s<<" ";
}
void test01()
{
	vector<int>a1;
	vector<int>a2;
	vector<int>a3;
	for(int i=0;i<10;i++)
	{
		a1.push_back(i);
		a2.push_back(i+5);
		
		}
		a3.resize(a1.size()+a2.size());
		
		vector<int>::iterator it =set_union(a1.begin(),a1.end(),a2.begin(),a2.end(),a3.begin());	
		for_each(a3.begin(),it,o);
		
		
}
int main()
{
	test01();
 } 
