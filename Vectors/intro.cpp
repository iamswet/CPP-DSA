#include "iostream"
#include "vector"

using namespace std;

int main(){
    vector<int> d;
    cout<<d.max_size()<<endl;
    for (int i=0;i<1073741822;i++){
        d[i]=1;
    }
    cout<<d.max_size()<<endl;

    return 0;
}