#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class ta 
{
	public:
	
		int operator()(int v)
		{
			return v+10;
		}
	
	
};
class print{
	public:
	
		void operator()(int val)
		{
			cout<<val<<" ";
		}
	
};
void test01()
{
	vector<int > v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}
	vector<int >v1;
	v1.resize(v.size());//ʹ��transform��Ҫ��ǰΪĿ�����鿪���ڴ�ռ� 
    transform(v.begin(),v.end(),v1.begin(),ta());
    for_each(v1.begin(),v1.end(),print());
}
int main()

{
	test01();
	return 0;
 } 
