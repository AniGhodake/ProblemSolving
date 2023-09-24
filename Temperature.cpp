#include<iostream>
using namespace std;
int Fahrenheit(int celsius){
    int fahren = celsius*(9/5)+32;
    return fahren;
}
int Kelvin(int celsius){
    int kel = celsius + 273.15;
    return kel;
}
int main(){
    int celsius;
    cout<<"Enter the Temperature in Degree Celsius"<<endl;
    cin>>celsius;
    int fahrenheit = Fahrenheit(celsius);
    int kelvin = Kelvin(celsius);
    cout<<celsius<<" Degree Celsius is "<<fahrenheit<<" Fahrenheit"<<endl;
    cout<<celsius<<" Degree Celsius is "<<kelvin<<" Kelvin"<<endl;
}