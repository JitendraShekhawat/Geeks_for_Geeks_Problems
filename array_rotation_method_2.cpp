//Problem link below
//https://www.geeksforgeeks.org/array-rotation/

#include<iostream>
using namespace std;

void rotateLeftByOne(int arr[], int n){

    int temp = arr[0];
    int i;
    for(i = 0; i<n-1; i++){
        arr[i] = arr[i+1];
    }

    arr[i] = temp;
}

void rotateLeft(int arr[],  int d, int n){

    for(int i = 0 ; i<d;i++){
        rotateLeftByOne(arr, n);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    rotateLeft(arr, 2, n);
    printArray(arr, n );

}