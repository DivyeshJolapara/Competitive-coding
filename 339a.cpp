#include<iostream>
using namespace std;

int main(){
    
    string in;cin>>in;
    
    int ones=0,twos=0,threes=0;
    int l=in.length();
    for(int i=0;i<l;i++){
        if(in[i]=='1') ones++;
        if(in[i]=='3') threes++;
        if(in[i]=='2') twos++;
        
    }
    string ans="";
    for(int i=0;i<ones;i++){
        ans+="1+";
    }
     for(int i=0;i<twos;i++){
        ans+="2+";
    }
    for(int i=0;i<threes;i++){
        ans+="3+";
    }
    ans.pop_back();
    cout<<ans;
    
    return 0;
}