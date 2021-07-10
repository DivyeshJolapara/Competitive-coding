#include <iostream>

using namespace std;

int main(){
    
    int tc;
    cin>>tc;
    while(tc--){
        
        string word;
        cin>>word;
        if(word.length()<=10)
        {
            cout<<word<<endl;
            continue;
            
        }
        cout<<word[0]<<word.length()-2<<word[word.length()-1]<<endl;
        
        
    }
    
    return 0;
}