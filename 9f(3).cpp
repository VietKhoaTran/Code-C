#include <iostream>
#include <math.h>
using namespace std;

int main()
{   int n;
    cin>>n;
    int temp = 10;
    int x=0;
    int y=0;
    int a=n;
    int dem1=0;
    int dem2=0;
    int dem3=0;
    while(a!=0){
        dem1++;
        a=a/10;
    }
	a = n;
        for(int i = dem1 - 1 ; i >= 0; i = i - 2)
            {
            dem2++;
            x=a % 10;
            temp = pow(10, i);
            y = (a / temp) % 10;
            a = a/10;
            if(x == y)
            {
                dem3++;
            }
            }

    if(dem3==dem2){
        cout<<"n la so doi xung"<<endl;
    }
    else{
        cout<<"n ko la so doi xung"<<endl;
    }

    return 0;
}
