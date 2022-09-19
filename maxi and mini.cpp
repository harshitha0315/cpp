#include<iostream>
using namespace std;
int findminimum(int a[],int n)
{
	int mn=a[0];
	for(int i=0;i<n;i++)
	{
		mn=min(mn,a[i]);
	}
	return mn;
}
int findmaximum(int a[],int n)
{
	int mx=a[0];
	for(int i=0;i<n;i++)
	{
		mx=max(mx,a[i]);
	}
	return mx;
}
int main()
{
	int n;
	cout<<"enter no.of elements:";
	cin>>n;
	int arr[n],i,pos;
	cout<<"\n enter the "<<n<<" elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n the"<<n<<" elements are:";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
	int mn=findminimum(arr,n);
	int mx=findmaximum(arr,n);
	cout<<"\n the smallest element is:"<<mn;
	cout<<"\n the largest element is:"<<mx<<"\n";
	return 0;
}
	

