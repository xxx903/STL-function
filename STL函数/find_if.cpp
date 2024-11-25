#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
class bigfive
{
	public:
		bool operator()(int val)
		{
			return val>5;
		}
		
}; 
class Person
{
	public:
	string m_name;
	int m_age;
		Person(string name,int age)
		{
			this->m_name=name;
			this->m_age=age; 
		}
	
};
class big20
{
   public:
   
   	bool operator()(Person &p)
   	{
   		return p.m_age>20;
	   }
   	
   	
	  	
};
 void test02()
 {
 	vector<Person>p;
 	Person p6("s3e3s",450);
 	Person p5("eess",340);
 	Person p1("aaa",10); 
 	Person p2("baa",20); 
 	Person p3("caa",30); 
 	Person p8("ssq",3) ;
 	Person p4("sss",40); 
 	Person p7("a2a",2); 
 	p.push_back(p1);
 	p.push_back(p2);
 	p.push_back(p3);
 	p.push_back(p4);
 	p.push_back(p5);
 	p.push_back(p6);
 	p.push_back(p7);
 	vector<Person>::iterator i=p.begin();
 	while(i!=p.end())
 	{
 		vector<Person>::iterator it=find_if(i,p.end(),big20());
 	if(i==p.end())
 	cout<<"no";
 	else 
 	cout<<it->m_name<<" "<<it->m_age<<" ";
 	i=++it;
 	
 	
 	
	 }
 	
 }

 
void test01()
{
	vector<int >v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}
	vector<int >::iterator it=find_if(v.begin(),v.end(),bigfive());
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
	test02();
}
