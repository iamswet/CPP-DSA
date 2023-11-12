#include "iostream"
using namespace std;

int main(){
    int num;
    cin>>num;
    char st[num];
    cin>>st;
    int flag=1;
    for (int i=0;i<num;i++){
        if (st[i]!=st[num-i]){
            flag=0;
            break;
        }
    }

    if (flag==1){
        cout<<"yes";
    }
    else if (flag==0){
        cout<<"no";
    }

    return 0;
}