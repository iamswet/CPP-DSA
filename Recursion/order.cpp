#include "iostream"
using namespace std;

void inc(int n){
    if(n==0)
        return;

    inc(n-1);
    cout<<n<<" ";
}


int main(){
    inc(10);


    return 0;
}