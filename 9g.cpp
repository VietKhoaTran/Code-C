#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int n;
    cin>>n;
    int x=0;
    int a=n;
    int GTLN=a%10;
    int dem =0;
    int dem1=0;
    while(a>0){
        a=a/10;
        dem++;
    }
    a=n;
    while(a>0){
        a=a/10;
        x=a%10;
        if(GTLN>x){
            dem1++;
        }
        GTLN=x;
    }
    if(dem1==dem){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
