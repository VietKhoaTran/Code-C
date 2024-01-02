#include <iostream>

using namespace std;

int DAOSO(int g){
    int s=0;
    while(g>0){
        s=s*10+g%10;
        g=g/10;
    }
    return s;
}


int UCLN(int n, int p){
    while(n*p!=0){
        if(n>p){
            n=n%p;
        }
        else{
            p=p%n;
        }
    }
    return p+n;
}

int main()
{
    freopen("NUMFRE.INP", "r", stdin);
    freopen("NUMFRE.OUT", "w", stdout);
    int a,b;
    cin>>a>>b;
    int dem=0;
    for(int i=a;i<=b;i++){
        if(UCLN(DAOSO(i),i)==1){
            dem++;
        }
    }
    cout<<dem;
    return 0;
}
