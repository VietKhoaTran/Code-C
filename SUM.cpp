#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    long long s;
    cin>>s;
    long long b[s];
    long long m[s];
    long long x=0;
    long long x1=0;
    long long k =0;
    for(int a=1;a<=s/2;a++){
        x1=(2*a-1)*(2*a-1)+8*s;
        x=sqrt(x1);
        if(x*x==x1&&(x-1)%2==0){
        k++;
        b[k]=(x-1)/2;
        m[k]=a;
        }
    }

    cout<<k<<endl;
    for(int i=1;i<=k;i++){
        cout<<m[i]<<" "<<b[i]<<endl;
    }
    cout<<s<<" "<<s<<endl;
    return 0;
}
