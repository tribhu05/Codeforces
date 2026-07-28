#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char arr1[]={'a','e','i','o','u','y'};
    for (int i=0; i < s.size(); i++){
        bool isVowel = false;
        for(char v : arr1){
            if (tolower(s[i]) == v){
                isVowel = true;
                break;                
            }
        }
        if (!isVowel){
            cout<< "." << (char)tolower(s[i]); 
        }
    }
    return 0;     
}
