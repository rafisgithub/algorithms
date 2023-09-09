#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter array size:";
    cin>>size;
    long long int initialA[size];
    long long int finalA[size];

    for(int i = 0;i<size;i++){
        cin>>initialA[i];
    }

    for(int i= 0;i<size;i++){
        finalA[i] = initialA[i];
    }

    for(int i =0; i<size;i++){
        cout<<finalA[i]<<" ";
    }
}