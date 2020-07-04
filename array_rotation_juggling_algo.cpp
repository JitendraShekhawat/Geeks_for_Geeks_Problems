//Problem link below
//https://www.geeksforgeeks.org/array-rotation/

#include<iostream>
using namespace std;

//Findidng the GCD 
int gcd(int a, int b){

    if (b == 0)
        return a;
    else
        gcd(b, a%b);
}


void rotateLeft(int arr[], int d, int n){

    int g_c_d = gcd(d, n);
    int i = 0;
    
}

//printing array element 
void printArray(int arr[] , int n){
    for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/ sizeof(arr[0]);

    //printing array element before rotating
    cout<<"Array element before rotating"<<"\n";
    printArray(arr, n);

    rotateLeft(arr, 2, n);

    //printing array element after rotating
    cout<<"Array element after rotating"<<"\n";
    printArray(arr, n);
    return 0;

}