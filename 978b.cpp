#include<iostream>
#include<unordered_map>
#include<iterator>
#include<vector>
using namespace std;

int main(){
    int n;cin>>n;
    string str;cin>>str;
    // unordered_map<

    //storing length of sub x's greater than 2
    // int *arr=new arr(n);
    vector<int> xs;

    for(int i=0;i<n;i++){
        int count=0;
        int flag=0;
        while(str[i]=='x'){
            count++;
            i++;
            flag=1;
        }
        if(flag==1){
            i--;
            if(count>2)
                xs.push_back(count);
        }
    }


    int ans=0;
    vector<int>::iterator it;
    for(it=xs.begin();it<xs.end();it++){
        ans+=(*it)-2;
    }
    cout<<ans;

    return 0;
}