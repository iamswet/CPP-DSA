#include "iostream"
using namespace std;

void readme(char arr[], int max, char deli){
    int i=0;
    char ch=cin.get();
    while (ch!=deli){
        arr[i]=ch;
        i++;
        if (i==(max-1))
            break;
        ch=cin.get();
    }
    arr[i]='\0';
    cout<<arr;
}


int main(){
    char a[1000];
    readme(a,1000,' ');


    return 0;
}