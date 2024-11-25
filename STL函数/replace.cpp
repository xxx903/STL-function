#include<bits/stdc++.h>
using namespace std;
class p{
	public:
		void operator()(int val)//仿函数 
		{
			cout<<val<<" ";
		 } 
}; 
//class big4{
//	public:
//	bool operator()(int val)
//	{
//		return val>4;
//	 } 
//	
//};
class big4{
	public:
		
		bool operator()(int val)
		{
			return val>4;
		}
};
void test01()
{
	vector<int>v;	
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(2);
	v.push_back(56);
	v.push_back(12);
	v.push_back(23);
	v.push_back(13);
	for_each(v.begin(),v.end(),p());
	replace(v.begin(),v.end(),2,22222);//第三个参数为旧值，第四个参数为新值 
		for_each(v.begin(),v.end(),p());
 } 
 void test02()
 {
 	vector<int >a;
 	a.push_back(2);
 	a.push_back(3);
 	a.push_back(4);
 	a.push_back(5);
 	a.push_back(6);
 	a.push_back(7);
 	a.push_back(8);
 	a.push_back(9);
 	a.push_back(9);
 	for_each(a.begin(),a.end(),p());
 	cout<<endl;
 	replace_if(a.begin(),a.end(),big4(),2000);
 	for_each(a.begin(),a.end(),p());
 	cout<<endl;
 }
int main()
{
	test02();
 } 
