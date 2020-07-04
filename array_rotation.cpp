//Problem link below
//https://www.geeksforgeeks.org/array-rotation/

#include<iostream>
using namespace std;
#include<math.h>

//Reverse function defination
void reverse( int arr[], int start, int end){

    //ratating array using swaping method 
    int ending = end-1;
    int temp;
    //cout<<start<<"\t"<<end<<endl;
    //cout<<"ceil :"<<ceil((float)end/2)<<endl;

    for(int i = start;i<ceil((float)end/2);i++){

        //cout<<i<<"\t"<<ending<<endl;
        temp = arr[i];
        arr[i] = arr[ending];
        arr[ending] = temp;
        ending --;
    }
}

//Print array function 
void printArray(int arr[], int n ){
    for (int i =0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

}

int main(){

    int arr[] = { 1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<n<<endl;

    //calling reverse function 

    //from 0 to d = 2;
    reverse(arr, 0 , 2);
    printArray(arr, n);

    //from d to n 
    reverse (arr, 2, n);
    printArray(arr, n);

    //from 0 to n ;
    reverse (arr, 0 , n);
    printArray(arr, n);


    return 0;
}
