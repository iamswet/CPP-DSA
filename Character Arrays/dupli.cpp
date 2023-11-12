#include "iostream"
#include "cstring"
using namespace std;

void remove(char a[]){
    int len=strlen(a);
    int prev=0;
    for(int curr=0;curr<len;curr++){
        if (a[prev]!=a[curr]){
            prev++;
            a[prev]=a[curr];
        }
    }
    a[prev+1]='\0';
    //return;
}

int main(){
    char a[1000],b[100];
    cin.getline(a,1000);
    remove(a);
    cout<<a<<endl;
}