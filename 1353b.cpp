/*
* Correct answer here, wrong on codeforces :(

*/

#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n;
        cin>>k;

        int *arr1=new int(n);
        int *arr2=new int(n);

        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
// cout<<"DEBUG INPUT 1\n";
// for(int i=0;i<n;i++){
//     cout<<arr1[i];
// }
// cout<<"\n\n\n";


        //finding largest k nos in arr2
        for(int i=0;i<k;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr2[j]>arr2[j+1]){
                    int temp=arr2[j];
                    arr2[j]=arr2[j+1];
                    arr2[j+1]=temp;
                }
            }
        }

        //finding smallest k in arr1

        // for(int i=0;i<k;i++){
        //     for(int j=n-i-1;j>=0;j--){
        //         if(arr1[j]>arr1[j+1]){
        //             int temp=arr1[j];
        //             arr1[j]=arr1[j+1];
        //             arr1[j+1]=temp;
        //         }
        //     }
        // }
        sort(arr1,arr1+n);

//  cout<<"DEBUG k smallest\n";
// for(int i=0;i<n;i++){
//     cout<<arr1[i];
// }
// cout<<"\n\n\n";
        // int smallKSum=0;
        // int largeNonKSum=0;

        // for(int i=0;i<k;i++){
        //     smallKSum+=arr2[i];
        // }
        // for(int i=k-1;i<n;i++){
        //     largeNonKSum+=arr1[i];
        // }
        // cout<<smallKSum+largeNonKSum<<endl;


        int *merged=new int(k+k);
        int n2=k+k;

        for(int i=0;i<k;i++){
            merged[i]=arr1[i];
        }
//  cout<<"DEBUG merge1\n";
// for(int i=0;i<k;i++){
//     cout<<merged[i];
// }
        int i2=n-1;
        for(int i=k;i<n2;i++){
            merged[i]=arr2[i2--]; ///////////////////////
        }

// cout<<"DEBUG merge2\n";
// for(int i=k;i<n2;i++){
//     cout<<merged[i];
// }

        sort(merged,merged+n2);

    // cout<<"DEBUG\n";
    //     for(int i=0;i<n2;i++){
    //         cout<<merged[i]<<" ";
    //     }


        int sum1=0;
        int sum2=0;
        for(int i=k;i<n;i++){
            sum1+=arr1[i];
        }

        for(int i=k;i<n2;i++){
            sum2+=merged[i];
        }
        
        cout<<sum1+sum2<<endl;

        n=0;k=0;n2=0;
    }



    return 0;
}