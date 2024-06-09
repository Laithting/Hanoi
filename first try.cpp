#include<iostream>
using namespace std;
void print(string a, string b){
    cout<<a<<" -> "<<b<<endl;
}
void hanoi(int n,string start,string destination){
    if(n==1){
        print(start,destination);
    }
    else{
        if(start=="a"&&destination=="c")hanoi(n-1,start,"b");
        if(start=="a"&&destination=="b")hanoi(n-1,start,"c");
        if(start=="b"&&destination=="a")hanoi(n-1,start,"c");
        if(start=="b"&&destination=="c")hanoi(n-1,start,"a");
        if(start=="c"&&destination=="a")hanoi(n-1,start,"b");
        if(start=="c"&&destination=="b")hanoi(n-1,start,"a");
        print(start,destination);
        if(start=="a"&&destination=="c")hanoi(n-1,"b",destination);
        if(start=="a"&&destination=="b")hanoi(n-1,"c",destination);
        if(start=="b"&&destination=="a")hanoi(n-1,"c",destination);
        if(start=="b"&&destination=="c")hanoi(n-1,"a",destination);
        if(start=="c"&&destination=="a")hanoi(n-1,"b",destination);
        if(start=="c"&&destination=="b")hanoi(n-1,"a",destination);
    }
}
int main(){
    int n;
    cout<<"Please enter how many disks?"<<endl;
    cin>>n;
    hanoi(n,"a","c");


}
