/*#include<iostream>

using namespace std;

int main(){
    
    int tc;cin>>tc;
    while(tc--){
        
        int n;cin>>n;
        // int *arr=new int(n);
        int arr[50];
        int count=0;int count2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i%2==0 && (arr[i] % 2) == 0){
                continue;
            }
            if(i%2!=0 && (arr[i]%2)!=0){
                continue;
            }
            if(i%2==1) count++;
            if(!i%2) count2++;
        }
       
       if(count+count2%2==0){
        //good case
        if(count==0){
            cout<<0<<endl;
            continue;
        }
        //not possible case
        if(count%2!=0){
            cout<<-1<<endl;
            continue;
        }
        //possible case
        cout<<count<<endl;
       }
       cout<<-1;
    }
    
    return 0;
}*/

#include<iostream>

using namespace std;

int main(){
    
    int tc;cin>>tc;
    while(tc--){
        
        int n;cin>>n;
        // int *arr=new int(n);
        int arr[50];
        int count=0;int count2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i%2==0 && (arr[i] % 2) == 0){
                continue;
            }
            if(i%2!=0 && (arr[i]%2)!=0){
                continue;
            }
            if(i%2==1) count++;
            if(i%2==0) count2++;
        }
       
       if(count==count2){
        
        if(count==0){
            cout<<0<<endl;
            continue;
        }
        
        cout<<count<<endl;
        continue;
       }
       cout<<-1<<endl;
    }
    
    return 0;
}