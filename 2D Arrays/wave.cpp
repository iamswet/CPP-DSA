//Wave Print in an array


#include "iostream"
using namespace std;

void print(int num[][4],int row){
    for(int i=0;i<4;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<num[j][i]<<" ";
            }
        }
        else{
            for(int j=(row-1);j>=0;j--){
                cout<<num[j][i]<<" ";
            }
        }
    }



}

int main(){
    int num[3][4]=
    {{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}};

    print(num,3);

    

}