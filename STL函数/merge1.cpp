#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

void prrr(int n)
{
	cout<<n<<" ";
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	
	
		v1.push_back(2);
		v1.push_back(2);
		v1.push_back(32);
		v1.push_back(3);
		v1.push_back(1);
		v1.push_back(25);
		v1.push_back(23);
		v1.push_back(21);
		v1.push_back(56);
		v2.push_back(33);
		v2.push_back(63);
		v2.push_back(83);
	

	cout<<endl;
sort(v1.begin(),v1.end()); 
sort(v2.begin(),v2.end()); 	
for_each(v1.begin(),v1.end(),prrr);
cout<<endl;
	for_each(v2.begin(),v2.end(),prrr);
	vector<int>v3;
	v3.resize(v1.size()+v2.size());
	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
for_each(v3.begin(),v3.end(),prrr);
	cout<<endl;
	
}
int main()
{
	test01();
	
	
}
