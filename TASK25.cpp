#include <iostream>

using namespace std;

int main()
{
    freopen("TASK25.INP","r",stdin);
    freopen("TASK25.OUT","w",stdout);
    long long n;
    cin >>n;
    long long a=n;
    long long day=0;
    long long gtln=0;
    long long x=0;
    long long khoa=0;
    while(a>0){
        x=a%10;
        if(x>0){
          day=day+1;
          if(gtln<day){
            gtln=day;
          }
        }else{
           day=0;
        }
        a=a/10;
    }
    a=n;
    day=0;
    while(a>0){
        x=a%10;
        if(x>0){
          day=day+1;
          if(gtln==day){
            khoa=khoa+1;
          }
        }else{
           day=0;
        }
        a=a/10;
    }
    cout<<khoa;
    return 0;
}
