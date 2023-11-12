#include "iostream"
#include "cstring"
using namespace std;

int main(){
    int n;
    cin>>n;
    char a[1000];
    char largeststr[1000];

    int len=0;
    int largest=0;

    cin.get();

    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        len=strlen(a);
        if (len>largest){
            largest=len;
            strcpy(largeststr,a);
        }
    }

    cout<<largeststr<<"    "<<largest;
    return 0;
}