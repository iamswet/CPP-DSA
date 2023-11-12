#include "iostream"
using namespace std;

int clearin(int num,int i,int j){
    int a=(-1<<(j+1));
    int b=(1<<i)-1;
    int mask=a|b;
    return num&mask;
}

int main(){
    cout<<(~0<<4)<<endl;
    cout<<(1<<3)-1<<endl;
    cout<<clearin(31,1,3);
    return 0;
}


