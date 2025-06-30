#include<iostream>
using namespace std;


// Time Complexity: O(n^2) in worst case and average case, O(n) in best case
// Space Complexity: O(1) as no extra space is used

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){ 
        bool isSwap=false; // to check if any swap is made in the current pass
        for(int j=0;j<n-1-i;j++) { // for ith value , n-i-1 comparisons are taking place
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true; 
            }   
        }
        if(!isSwap){ // if no swap is made, the array is already sorted 
            return;  
        }
    }
}

// for descending order sorting we put the condition as arr[j]<arr[j+1]



void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={12,4,5,6,8};
    int n=sizeof(arr)/4;
    bubbleSort(arr,n);
    cout<<"Sorted array: ";
    printArray(arr,n);
    return 0;
    

}