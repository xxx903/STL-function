#include<bits/stdc++.h>
using namespace std;
void p2(int n)
{
	cout<<n<<' ';
}
void p1(vector<int >&p)
{
	for_each(p.begin(),p.end(),p2);
	
	cout<<endl;
}
void test01()
{
	srand((unsigned int )time(NULL));
//	srand((unsigned int )time(NULL));
//	srand((unsigned int )time(NULL));
	//srand((unsigned int )time(NULL));
	//随机数种子 
	vector<int >a;
	for(int i=0;i<10;i++)
	{
		a.push_back(i);
		
	}
	p1(a);
	random_shuffle(a.begin(),a.end());
	p1(a);
	//cout<<a[0]; 
}
void test02()
{
	  srand((unsigned )time(NULL));
	  for(int i=0;i<200;i++)
	  {
	  	cout<<rand()%100+1<<" ";
	  }
	  
	  cout<<endl;
	  
}
int main() 
{
	test01();
	test02();
}
