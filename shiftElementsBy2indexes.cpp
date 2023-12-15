#include<iostream>
using namespace std;

void shiftByN(int arr[], int size){

}
int main(){
    int arr[];
    int size = 10;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Elements you entered are as follows : "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    shiftByN(arr,size);
}