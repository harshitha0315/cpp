#include<iostream>
#include<math.h>
using namespace std;
int isPerfect(long long int n)
{
	long long int sum=0;
	long long int i;
	for(i=1;i<=sqrt(n);++i)
	{
		if(n%i==0)
		{
			if(i==n/i)
				sum=sum+i;
			else
			    sum=sum+i;
				sum=sum+n/i;
		}
	}
	sum=sum-n;
	if(sum==n)
	    return true;
	else
	    return false;
}

int main()
{
	long long int n,i,temp;
	cout<<"enter n:";
	cin>>n;
	i=1;
	while(n>0)
	{
		if(isPerfect(i)==1)
		{
			cout<<i;
			n=n-1;
		}
		i=i+1;
	}
	cout<<"\n";
	return 0;
}

