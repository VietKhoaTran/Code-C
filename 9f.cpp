#include <iostream>

#include <bits/stdc++.h>
#include <stdio.h>

#include <cmath>
using namespace std;

int main()
{   int n;
    cin>>n;
    string a="",b="";
    a= to_string(n);
    for(int i=0;i<a.size();i++){
        b=a[i]+b;
    }
    if(a==b){
        cout<<"n la so doi xung"<<endl;

    }
    else{
        cout<<"n ko la so doi xung"<<endl;
    }
    return 0;
}
