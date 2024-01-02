#include <iostream>
#include <cmath>
using namespace std;

int main()
{  int n;
   cin>>n;
   int dem=0;
   int a=n;
   while (a>0){
    dem++;
    a=a/10;
   }
   a=n;
   int x=n/10;
   cout<<x<<"\n";
   int k=pow(10,dem-1);
   a=((a%10)*k)+x;



   cout<<a;
return 0;
}
