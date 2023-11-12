#include "iostream"
using namespace std;

const string dict[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void spells(int n){
    if(n==0)
        return;

    spells(n/10);
    int digit=n%10;
    cout<<dict[digit]<<" ";


}


int main(){
    spells(1056);
    return 0;
}