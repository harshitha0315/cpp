#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  char names[10][10], temp[5];     
  int i, j;
  cout<<"Enter any 5 names  : ";
  for(i=0; i<5; i++)
  {
    cin>>names[i];
  }
  for(i=5; i>=0; i--)              
  {
    for(j=0; j<=i; j++)
    {
      if(strcmp(names[j], names[j+1])>0)  
      {
        strcpy(temp, names[j]);
        strcpy(names[j], names[j+1]);
        strcpy(names[j+1], temp);
      }
    }
  }
  cout<<"Names rearranged in alphabetical order : \n";
  for(i=0; i<5; i++)
  {
    cout<<names[i]<<"\n";
  }
  return 0;
}
