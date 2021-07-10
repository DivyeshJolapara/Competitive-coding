#include<iostream>

using namespace std;

int main(){
    
    int wt;
    cin>>wt;
    if(wt==2 || wt&1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}