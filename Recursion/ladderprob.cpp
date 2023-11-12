#include "iostream"
using namespace std;

int steps(int num){
    if(num<=1){
        return num;
    }

    if(num>=4){
        return steps(num-3)+steps(num-2)+steps(num-1);
    }
    else if(num==3){
        return 1+steps(num-2)+steps(num-1);
    }
    else{
        return 1+steps(num-1);
    }
}

int stepscountergiven(int num, int k){
    if(num==0){
        return 1;
    }
    if(num<0){
        return 0;
    }

    int ans=0;
    for(int i=1;i<=k;i++){
        ans+=stepscountergiven(num-i,k);
    }
    return ans;

}



int main(){
    cout<<steps(5)<<endl;
    cout<<stepscountergiven(5,3)<<endl;
    
    return 0;
}