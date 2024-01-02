#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int n;
    cin>>n;
    int a=n;
    int GTLN=n%10;
    int x=0;
    int khoa=0;
    int y=0;
    int dem=0;
    while(a>0){
        x=a%10;
        a=a/10;
        if(GTLN<x){
            GTLN=x;
        }
    }
    a=n;
    while(a>0){
        y=a%10;
        a=a/10;
        if(y==GTLN){
            dem++;
        }
    }

    cout<<GTLN<<endl;
    cout<<dem;
    return 0;
}
