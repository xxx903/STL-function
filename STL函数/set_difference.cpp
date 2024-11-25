#include<bits/stdc++.h>
using namespace std;
void p(int n)
{
	cout<<n<<' ';
}

using namespace std;//set_difference 
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
	//a1和a2的差集是a1比a2多了那些元素
	//a2和a1的差集是a2比a1多了那些元素 
	a3.resize(max(a1.size(),a2.size()));
	vector<int>::iterator it =set_difference(a1.begin(),a1.end(),a2.begin(),a2.end(),a3.begin());
    for_each(a3.begin(),it,p);
		
	
}
int main()
{
	test01();
	system("pause"); 
}
