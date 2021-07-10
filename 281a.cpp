#include<iostream>
using namespace std;

int main(){
    
    string in;cin>>in;
    
    if(in[0]>=97)
    {
        in[0]=in[0]-32;
        cout<<in;
        return 0;
    }
    
    
    cout<<in;
    
    return 0;
}