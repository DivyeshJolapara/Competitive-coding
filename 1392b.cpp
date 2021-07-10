/* not working on codeforces, Python implementation is*/

#include<iostream>

using namespace std;

int main(){

    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        long long k;cin>>k; 

        int *arr = new int(n);
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>max){
                max = arr[i];
            }
            if(arr[i]<min){
                min = arr[i];
            }
        }
        //edge case n = 1
        if(n==1){
            cout<<0<<endl;
            continue;
        }


        // odd iteration 
        if((k&1) == 1){
            for(int i = 0;i<n;i++){
                arr[i] = max - arr[i];
            }
        }
        else{
            //for even iterations it is observed that just subtract  -1 from initial array
            for(int i=0;i<n;i++){
                arr[i] = arr[i] - min;
            }
        }


        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
return 0;
}


// tc=int(input())

// while tc > 0:
//     tc = tc - 1
//     n,k=map(int,input().split())

    
//     arr = list(map(int,input().split()))
    
//     max_ = max(arr)
//     min_ = min(arr)
    
//     if n == 1:
//         print("0")
//         continue
// #    hasNeg = False
// #    if min_ < 0:
// #        hasNeg = True
    
//     if (k&1) == 1:
//         arr = [(max_ - i) for i in arr]
//     else:
//         arr = [(i - min_) for i in arr]
    
//     for i in arr:
//         print(i,end=" ")
    
