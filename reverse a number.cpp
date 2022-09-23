#include<iostream>
using namespace std;
int main()
{
	int n,r=0,m;
	cout<<"enter the number ";
	cin>>n;
	try
	{
		if(!(cin>>n))
		throw n;
		while(n!=0)
		{
			m=n%10;
			r=r*10+m;
			n=n/10;
		}
		cout<<"reversed number "<<r;
    }
    catch(...)
    {
    	cout<<"enter the numbers only";
    }
}
