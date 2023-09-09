#include<iostream>
using namespace std;

int main(){
    int array_size;
    cout<<"Enter array size:";
    cin>>array_size;

    long long int array[array_size];

    cout<<"Enter array elements:";
    
    for(int i=0;i<array_size;i++){
        cin>>array[i];
    }
    int searching_element;
    int counter = 0;
    cout<<"Enter your searching elemnets:";
    cin>>searching_element;

    for(int i = 0;i<array_size;i++){
        if(searching_element == array[i]){
            cout<<"Elements is found at index "<<i<<endl;
            break;
        }else{
            counter++;
        }
    }
    if(counter == array_size){
        cout<<"Element not found!";
    }
    return 0;
}