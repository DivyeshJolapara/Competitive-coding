#include<iostream>
#include <set>
using namespace std;

int lengthOfLongestSubstring(string s) {
        int max = 0;
        if(s.length() == 1) return 1;
        for(int i = 0;i<s.length();i++){
            int j = i+1;
            int count=0;
            set<char> s1;
            s1.insert(s[i]);
            while(j<s.length()){
                 if(s1.find(s[j])!=s1.end()){
                //if(s1.contains(s[j])){
                    break;
                }
                s1.insert(s[j]);
                count++;
                j++;
            }
            if(count>max)
                max = count;
            //i = j;
        }
            
        return max+1;
    }


int main(){
    string s;cin>>s;
    cout<<lengthOfLongestSubstring(s);
    return 0;
}