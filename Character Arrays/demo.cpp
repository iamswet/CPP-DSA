#include "iostream"
using namespace std;

int main(){
    char str3[]={'y','e','s'};
    char str1[10]="heLLlo";
    
    char str2[]={'h','e','\0','l','l','o'};
    cout<<str1<<sizeof(str1)<<endl;
    cout<<str3<<sizeof(str3)<<endl;
    cout<<str2<<sizeof(str2)<<endl;



    return 0;
}