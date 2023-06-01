#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int factorial = 1;
    if(n>0){
        for(int i =1;i<=n;i++){
            factorial = factorial*i;
        }
        cout<<factorial<<endl;
    }
    else{
        cout<<"factorial not possible"<<endl;
    }
    return 0;
}