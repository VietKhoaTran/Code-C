#include <iostream>
#include <cmath>
using namespace std;

long long a= pow(10, 5);
long long h[100000000];
long long FINDMIN(long long i_2, long long i_3, long long i_5){
    if(i_2*2<=i_3*3 && i_2*2<=i_5*5){
        return i_2*2;
    }
    if(i_3*3<=i_2*2 && i_3*3<=i_5*5){
        return i_3*3;
    }
    if(i_5*5<=i_3*3 && i_5*5<=i_2*2){
        return i_5*5;
    }
}
void CREATE (long long KO){
    long long i_2,i_3,i_5,t_2,t_3,t_5;
    i_2=i_3=i_5=t_2=t_3=t_5=1;
    h[1]=1;
    for(int i=2;i<=a;i++){
        long long t = FINDMIN(i_2,i_3,i_5);
        if(i_2*2==t){
            h[i]=i_2*2;
            t_2++;
            i_2= h[t_2];
        }
        if(i_3*3==t){
            h[i]=i_3*3;
            t_3++;
            i_3= h[t_3];
        }
        if(i_5*5==t){
            h[i]=i_5*5;
            t_5++;
            i_5= h[t_5];
        }
    }
}
long long FINDX(long long x){
    long long lo=1, hi=a;
    while (lo<=hi){
        long long m=(lo+hi)/2;
        if(x==h[m]){
            return m;
        }
        if(x<h[m]){
            hi=m-1;
        }
        else{
            lo=m+1;
        }
    }
    return 0;
}
int main()
{
    freopen("HAMMING.INP", "r", stdin);
    freopen("HAMMING.OUT", "w", stdout);
    long long t;
    cin>>t;
    long long KO=0;
    CREATE(KO);
    for(int i=1;i<=t;i++){
        long long x;
        cin>>x;
        if(FINDX(x)!=0){
            cout<<FINDX(x)<<endl;
        }
        else{
            cout<<"Not in sequence"<<endl;
        }
    }
    return 0;
}
