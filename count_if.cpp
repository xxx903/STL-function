#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class person{
	public:
		string m_name;
		int m_age;
		person(string name,int  age)
		{
			this->m_name=name;
			this->m_age=age;
		 } 
};
class agebig20{
	public:
		bool operator ()(const person &p)
		{
			return p.m_age>20;
		}
};
class big20{
	public:
		bool operator()(int val)
		{
			if(val>20)
			return true;
			else
			return false;
			
			
		 } 
};
void test02()
 {
 	vector<person>v;
 	person p("0",35);
 	person p1("1",2);
 	person p2("2",5);
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
 	int h=count_if(v.begin(),v.end(),agebig20());
 	cout<<h;
 }
void test01()
{
	vector<int >a;
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);
	a.push_back(40);
	a.push_back(50);
	
	int n=count_if(a.begin(),a.end(),big20());
	cout<<n;

	
	
}
int main()
{
	test01();
	test02();
 } 
