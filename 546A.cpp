#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int Amt=0;
    for (int i=0; i< w; i++){
        Amt=Amt+(i+1)*k;
    }
    if(n<Amt){
        cout<<(Amt-n);
    }
    else{
        cout<<0;
    }
    return 0;
}