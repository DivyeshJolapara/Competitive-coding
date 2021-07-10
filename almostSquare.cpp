#include<iostream>
using namespace std;

int main(){

    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;

        int x1,y1,x2,y2;
    int ax1,ay1,ax2,ay2;
        int flag =0;

        char** arr = new char*[n];
        for(int i = 0;i<n;i++){
            arr[i]=new char[n];
        }

        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                cin>>arr[i][j];
                if(arr[i][j] == '*' && !flag)
                    {x1 = i;y1=j;flag=1;}
                if(arr[i][j] =='*' && flag){
                    x2=i;y2=j;
                }
            }
        }
        // same col
        if(y1 == y2){
            
            //try left
            if(y1 > 0){
                ay1=y1-1;
                ay2=y2-1;
                ax1=x1;
                ax2 = x2;

            }else{
                ay1 = y1+1;
                ax1=x1;
                ay2=y1+1;
                ax2=x2;
            }

        }

        //same row
        else if(x1 == x2){
            if(x1>0){
                ax1 = x1-1;
                ay1 = y1;
                ax2 = x2-1;
                ay2=y2;
            }else{
                ax1 = x1+1;
                ay1=y1;
                ax2=x2+1;
                ay2=y2;
            }
        }

        else{
            ax1 = x1;
            ay1 = y2;
            ax2=x2;
            ay2 = y1;
        }

        arr[ax1][ay1]='*';
        arr[ax2][ay2]='*';

        for(int i=0;i<n;i++){
            for(int j = 0;j<n;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }

    }

    return 0;
}