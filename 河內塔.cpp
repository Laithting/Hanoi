#include<iostream>
using namespace std;
void print(int a, int b){
    cout<<a<<" -> "<<b<<endl;

}
// n=the number of the plates which are moved :: from"start" to "destination"
void hanoi(int n,char start ,char destination){
    if(n ==1){
        print(start,destination);
    }
    else{
        char other =6-(start + destination);
        hanoi(n-1,start, other);
        print(start,destination);
        hanoi(n-1,other,destination);
    }
}
int main(){
    int n;
    cout<<"Please enter how many disks?"<<endl;
    cin>>n;
    hanoi(n,1,3);


}
