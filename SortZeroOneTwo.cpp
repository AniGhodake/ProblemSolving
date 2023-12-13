#include<iostream>
using namespace std;

void sortZOT(int arr[], int size){
    for(int i = 0,left = 0, right = size-1; i < size, left<=right; ){
        if(arr[i]==0){
            swap(arr[left],arr[i]);
            left++;
            i++;
        }
        if(arr[i]==2){
            swap(arr[right],arr[i]);                       
            right--;
            
        }
        else{
            i++;
        }

    }

    cout<<"Array elements after sorting is as follws : "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[10];
    int size = 10;
    cout<< "Enter the Array elements : "<< endl;
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }

    sortZOT(arr,size);
}