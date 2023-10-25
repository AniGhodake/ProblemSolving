#include<iostream>
using namespace std;

int main(){
    int my_array1[5] = {1, 2, 3, 4, 5}; // Initialize all elements of the array.
   
    int my_array2[5] = {1, 2, 3}; // Initialize the first three elements of the array. The remaining elements will be initialized to zero.
    
   
    for(int i=0;i<5;i++){
        cout<<my_array2[i]<<"\n";
    }    
    
}