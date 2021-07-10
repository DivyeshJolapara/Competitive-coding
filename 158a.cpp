#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    int *arr=new int(n);
    int cutoff;
    
    for(int i=0;i<n;i++){
           cin>>arr[i];
           if(i==k-1)
                cutoff=arr[i];
    }
     if(arr[0]==0)
    {
        cout<<0;
        return 0;
    }

    if(cutoff==0){
        int c=0;
        int d=k;
        while((arr[d-1]==0)){
            d--;
        }
        cout<<d;
        return 0;
    }
    
    
   
    int j=k;
    int count=0;
    while(arr[j]==cutoff && j<n){
        count++;j++;
    }
    cout<<count+k;


    return 0;
}a