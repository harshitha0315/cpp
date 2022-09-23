#include <iostream>
#include<conio.h>
using namespace std;
void findTheSingleDigit(int n)
{
   int n;
   while(n > 0 || sum > 9) {
      if(n == 0) {
         n = sum;
         sum = 0;
      }
      sum += n % 10;
      n /= 10;
   }
   cout << sum << endl;
}
int main() {
   int n = 4543;
   findTheSingleDigit(n);
   return 0;
}
