#include<bits/stdc++.h>
using namespace std;
#include<numeric>
void p(int n)
{
	cout<<n<<' ';
}
void test01()
{
	vector<int>v;
	for(int i=0;i<=100;i++)
	{
		v.push_back(i);
	}//第三个参数值为起始值 
	int total=accumulate(v.begin(),v.end(),0);
	cout<<total;
	
 } 
void test02()
{
	
	vector<int>a1,a2;
	vector<int>a3;
	for(int i=0;i<10;i++)
	{
		a1.push_back(i);
		a2.push_back(i+5);
	}
	a3.resize(min(a1.size(),a2.size()));
	//五个参数,返回交集的最后一个迭代器 
	vector<int>::iterator it=set_intersection(a1.begin(),a1.end(),a2.begin(),a2.end(),a3.begin());
	for_each(a3.begin(),a3.end(),p);
	 
}
int main()
{
	test02();
	system("pause");
	test01();
}

