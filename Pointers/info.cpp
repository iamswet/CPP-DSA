#include "iostream"
using namespace std;

int main(){
    int x=15;
    int y=20;
    cout<<x<<"                   "<<&x<<"\n";

    float f=13;
    cout<<f<<"                   "<<&f<<"\n";

    char c='N';
    cout<<c<<"                   "<<&c<<"\n";    //Pointers don't work for character
    cout<<c<<"                   "<<(void*)&c<<"\n";  //So convert to void* to check address


    int *ptr=&x;
    cout<<ptr<<"       "<<*ptr<<endl;;

    ptr=&y;
    cout<<ptr<<"       "<<*ptr<<endl;;


    return 0;
}