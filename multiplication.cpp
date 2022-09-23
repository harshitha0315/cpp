#include<iostream>
using namespace std;
int main()
{
	int n,range;
	cout<<"enter an integer:";
	cin>>n;
	cout<<"enter range:";
	cin>>range;
	for(int i=1;i<=range;i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
	return 0;
}
