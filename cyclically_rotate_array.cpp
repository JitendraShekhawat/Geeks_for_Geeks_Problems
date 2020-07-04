//Problem link below
//https://www.geeksforgeeks.org/c-program-cyclically-rotate-array-one/

#include<iostream>
using namespace std;

void cyclicallyRotate(int arr[], int n){
    int temp = arr[n-1];
    int i;

    for(i = n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

void printArray(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/ sizeof(arr[0]);

    //array element before cyclically rotate
    printArray(arr, n);

    //Cyclically Rotate
    cyclicallyRotate(arr, n);

    //array element after cyclically rotate
    printArray(arr, n);

    return 0;
}