#include<iostream>

using namespace std;




int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int l;
        cin>>l;
        int *arr=new int(l);
        for(int i=0;i<l;i++){
            cin>>arr[i];
        }

        int common=0;
        if(arr[0]==arr[1])
            common=arr[0];
        else if(arr[0]==arr[2]){
            common=arr[0];
        }
        else
            common=arr[1];
        
        for(int i=0;i<l;i++){
            if(arr[i]!=common){
                cout<<i+1<<endl;
                break;
            }
        }

   

    } return 0;
}