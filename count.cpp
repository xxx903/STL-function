#include<bits/stdc++.h>
using namespace std;
//count统计第三个参数出现的个数 
class person{
	public:
		string m_name;
		int m_age;
		person (string name,int age)
		{
			this->m_name=name;
			this->m_age=age;
		}
	bool operator==(const person &p)//防止p被更改 
	{//重载判断 
		if(this->m_age==p.m_age)
		return true;
		else 
		return false;
	}
	
};

void test01()
{
	vector<int >a;
	a.push_back(2);
	a.push_back(2);
	a.push_back(2);
	a.push_back(2);
	a.push_back(2);
	int n=count(a.begin(),a.end(),2);
	cout<<n; 
	
 } 
 void test02()
 {
 	vector<person>v;
 	person p("0",35);
 	person p1("1",35);
 	person p2("2",45);
 	person p3("3",45);
 	person p4("4",45);
 	person p5("5",35);
 	person p6("6",45);
 	person p7("7",35);
 	v.push_back(p);
 	v.push_back(p1);
 	v.push_back(p2);
 	v.push_back(p3);
 	v.push_back(p4);
 	v.push_back(p5);
 	v.push_back(p6);
 	v.push_back(p7);
 	int r=count(v.begin(),v.end(),p1);
 	cout<<r;
 }
int main()
{
	test01();
	test02();
 } 
