#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}

int binary_search(int arr[], int start, int end, int value ){

        if(end >= start){

            int mid = (start + end) /2;

            if(arr[mid] == value)
            return mid;
        
            if(arr[mid] > value){
                return binary_search(arr, start, mid-1, value);
            }

            return binary_search(arr, mid+1, end, value);
        }

        return -1;
        
}



int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int value, n, count = -1;
    
    n = sizeof(arr)/ sizeof(arr[0]);

    cout<<"Number of element:"<<n<<endl;

    cout<<"Given array:"<<endl;
    printArray(arr, n);

    cout<<"Enter the value which you want to search: "<<endl;
    cin>>value;

    //calling binary search 
    count = binary_search(arr, 0, n , value);

    if(count == -1){
        cout<<"Element is not present in the array"<<endl;
    }
    else{
        cout<<"Element is presetn in the array at index value:"<<count<<endl;
    }
    return 0;
}