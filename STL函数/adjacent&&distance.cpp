#include<bits/stdc++.h>
using namespace std;
void test01()
{
	vector<int >v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);
	vector<int >::iterator it=adjacent_find(v.begin(),v.end());
	if(it==v.end())
	{
		cout<<"no";
	}
	else//distance计算第一个参数到第二个参数的距离 
	cout<<"相邻重复元素的下标为"<<distance(v.begin(),it)<<"它是"<<*it;
}
 int main()
 {
 	test01();
 }
