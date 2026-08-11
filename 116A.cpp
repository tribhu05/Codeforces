#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    int count=0;
    int m=0;
    
    for (int i=0; i<n; i++){
        cin>>a;
        cin>>b;
        count=count-a+b;
        m=max(count,m);

        
    }
    cout<<m;
    

    return 0;
}