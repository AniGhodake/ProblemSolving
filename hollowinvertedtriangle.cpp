#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number";
    cin>>num;
    for(int row=0;row<num;row++){
        for(int col=0;col<num-row;col++){
            if(row==0 || row==num-1 || col==0 || col==num-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}