#include<iostream>
using namespace std;

int main(){
    
    int tc;cin>>tc;
    while(tc--){
        int n,x;
        cin>>n,x;
        
        
        bool cannotLinearlyAdd = false;
        int index = -1;
        
        int maxGreaterThanX = -1;
        
        int *arr = new int[n];
        bool allNumsGreaterThanX = true;
        int sum = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i] ;
            sum+=arr[i];
            if(sum == x){
                cannotLinearlyAdd = true;
                index = i;
            }
            if(arr[i] > x){
                maxGreaterThanX = i;
            }
            
            if(arr[i] < x){
                allNumsGreaterThanX = false;
            }
            
        }
        if(!cannotLinearlyAdd || allNumsGreaterThanX){
            cout<<"YES"<<endl;
            for(int i = 0 ; i < n ; i++ ){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        
        if(maxGreaterThanX != -1){
            int temp = arr[0];
            arr[0] = arr[maxGreaterThanX];
            arr[maxGreaterThanX] = temp;
            
            cout<<"YES2"<<endl;
            for(int i = 0 ; i < n ; i++ ){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        
        if(n == 1 && x == arr[0]){
            cout<<"NO"<<endl;
            continue;
        }
        
        
        
        
        
    }
    
    return 0;
}