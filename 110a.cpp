#include<iostream>
using namespace std;

int main(){
    
    string in;cin>>in;
    int l=in.length();
    int count=0;
    for(int i=0;i<l;i++){
        if(in[i]=='4' || in[i]=='7'){
            count++;
        }
    }
    
    string ans=to_string(count);
    int l2=ans.length();
    for(int i=0;i<l2;i++){
        if(ans[i]!='4' && ans[i]!='7'){
            cout<<"NO";
            return 0;
        }
    }
    
    cout<<"YES";
    
    return 0;
}