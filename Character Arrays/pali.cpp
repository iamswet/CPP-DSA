#include "iostream"
#include "cstring"
using namespace std;

int main(){
    char a[1000];
    cout<<"Enter now: \n";
    cin.getline(a,1000);
    cout<<"NOW\n";
    cout<<strlen(a)-1;



    return 0;
}