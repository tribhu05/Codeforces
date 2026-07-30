#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    int year=0;
    cin>>a>>b;
    while(a<=b){
        year++;
        a=a*3;
        b=b*2;

    }
    cout<<year;

    return 0;

}