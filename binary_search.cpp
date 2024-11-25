#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//binary_search 
void test01()
{
	vector<int > a;
	for(int i=0;i<10;i++)
	{
		a.push_back(i);
	}
	a.push_back(1);
     //sort(a.begin(),a.end());
	bool ret=binary_search(a.begin(),a.end(),9);
	if(ret)
	{
		cout<<"y";
		
	}
	else 
	cout<<"n";
 } 
int main()
{
	test01();
}
