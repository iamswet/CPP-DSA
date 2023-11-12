#include "iostream"
using namespace std;

//a,b,c=source,helper,destination
void towerofhanoi(int n,char a,char b,char c){
    //base case
    if (n==0){
        return;
    }

    //rec case
    towerofhanoi(n-1,a,c,b);
    cout<<"Shift disk "<<n<<" from "<<a<<" -> "<<c<<endl;
    towerofhanoi(n-1,b,a,c);
}


int main(){
    towerofhanoi(2,'A','B','C');


    return 0;
}