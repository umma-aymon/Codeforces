#include<bits/stdc++.h>
using namespace std;
#define max 2^100
char a[max];
 long long int n,b,rem,i;
int main()
{
    cin>>b;
    while (b != 0)
   {
      rem = b % 10;
      b /= 10;
      n += rem * pow(2, i);
      ++i;
   }
    cout<<n<<" ";
  //  cout<<ceil(log(131276610799)/log(4.0));
    return 0;
}
