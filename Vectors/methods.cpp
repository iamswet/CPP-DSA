#include "iostream"
#include "vector"
using namespace std;

int main(){
    vector <int> d{1,2,3,4,5,6};
    d.insert(d.begin()+3,5,200);
    for(int x:d){
        cout<<x<<" , ";
    }cout<<endl;

    d.erase(d.begin()+3,d.begin()+6);
    for(int x:d){
        cout<<x<<" , ";
    }cout<<endl;





    return 0;
}