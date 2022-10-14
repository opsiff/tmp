// remove until ']' before kernel.log diff
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        string p;
        int i=0;
        for(;i<s.size();++i) if(s[i]==']') {i++;break;}
        for(int j=i;j<s.size();++j)p+=s[j];
        cout<<p<<'\n';
    }
}
