#include<iostream>
using namespace std;
bool isEven(int num){
    if(num%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int num;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    bool isEven(num);
    if(isEven){
        cout<<"Entered number "<<num<<" is Even Number";
    }
    else{
        cout<<"Entered number "<<num<<" is Odd Number";
    }
}