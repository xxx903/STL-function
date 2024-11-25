#include<bits/stdc++.h>
using namespace std;

vector<int >a;

void p(int n)
{
	cout<<n<<" ";
}
void p1()
{
		for_each(a.begin(),a.end(),p);
		cout<<endl;
}
void test01()
{
	
	for(int i=10;i>=0;i--)
	{
		a.push_back(i);
	}
	a.push_back(12);
p1();

reverse(a.begin(),a.end());
p1();	
sort(a.begin(),a.end());
p1();
reverse(a.begin(),a.end());
p1();
}
int main()
{
	test01();
	}
  
