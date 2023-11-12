#include "iostream"
#include "algorithm"
using namespace std;

int main(){
    pair<pair<int,char>,int> p1;
    p1.first.first=76;
    p1.first.second='A';
    p1.second=69;

    cout<<"First: "<<p1.first.first<<endl;
    cout<<"First: "<<p1.first.second<<endl;

    cout<<"First: "<<p1.second<<endl;


    pair<int,string> p2 = make_pair(100,"Hey");
    cout<<"Mine"<<p2.first<<endl;
    cout<<"your"<<p2.second<<endl;

    pair<int,string> p3(p2);

    cout<<"Mine"<<p2.first<<endl;
    cout<<"your"<<p2.second<<endl;






    return 0;
}