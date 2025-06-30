#include<iostream>
using namespace std;

// Time complexity: O(n^2) for worst case, O(n) for best case
// Space complexity: O(1) 
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int j=i-1; // previous element index
        while(j>=0 && arr[j]>curr){
            arr[j+1]=arr[j]; // shift larger element to right
            j--;  // shift smaller element to left
        }
        arr[j+1]=curr; // place the current element in its correct position

    }
}
// for descending order sorting we put the condition as arr[j]<curr

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={12,4,5,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    cout<<"Sorted array: ";
    printArray(arr,n);
    return 0;
}

