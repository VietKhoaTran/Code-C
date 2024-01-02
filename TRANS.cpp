#include <iostream>

using namespace std;

int main()
{
    freopen("TRANS.INP", "r", stdin);
    freopen("TRANS.OUT", "w", stdout);
    int n,b,a;
    cin>>n>>a>>b;
    int y=0;
    int cost=0;
    int min_cost=((n-1)/50+1)*a;
    int s50=0;
    int s4=0;
    for(int i=0;i<=(int)(n-1)/50+1;i++){
        y=(n-50*i-1)/4+1;
        if(n-50*i-1<0){
            y=0;
        }
        cost=i*a+y*b;
        if(cost<=min_cost){
            min_cost=cost;
            s50=i;
            s4=y;
        }
    }
    cout<<s50<<" "<<s4;
    return 0;
}
