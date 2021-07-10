#include<iostream>

using namespace std;

int main(){
    
    int mat[5][5];
    int row,col;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j]){
                row=i;
                col=j;
            }
        }
    }
    
    
    int ans=0;
   /* while(row!=2 || col!=2){
         if(row>2) {row--;ans++;}
         if(row<2) {row++;ans++;}
         if(col>2) {col--;ans++;}
         if(col<2) {col++;ans++;}
    }*/
    int ans=0;
    ans=(abs(row-2)+abs(col-2));
    cout<<ans;
    
    
    cout<<ans;
    
    return 0;
}
