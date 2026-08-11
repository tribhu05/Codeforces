#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    char arr[]={'a','e','i','o','u','y'};
    for (int i=0;i<s.size();i++){
        bool isvowel=false;
        for(char v: arr){
            if(tolower(s[i])==v){
                isvowel=true;
                break;
            }
        }
        if(isvowel==false){
            cout<<'.'<<(char)tolower(s[i]);
        }
    }
    return 0;
}


