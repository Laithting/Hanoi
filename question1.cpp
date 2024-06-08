#include<iostream>
using namespace std;
int main(){
    int n,a,result;
    cout<<"Please enter how many disks?"<<endl;
    cin>>n;
    a=1;
    for(int i=1;i<n;i++){
        a=2*a+1;
    }
    cout<<a<<" times"<<endl;

}

