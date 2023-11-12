#include "iostream"
#include "typeinfo"
using namespace std;

int main(){
    auto x=56.4;
    auto y=4;
    auto ch='a';

    cout<<typeid(x).name();
    cout<<typeid(y).name();
    cout<<typeid(ch).name();


    return 0;
}