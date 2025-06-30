#include<iostream>
using namespace std;

// Time Complexity: O(n^2) in worst case and average case and best case
// Space Complexity: O(1) as no extra space is used

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++) { // for n elemeents n-1 passes are done
        int minIndex=i;  // asuuming 1st element as the minimum element

        for(int j=i+1;j<n;j++){ // comapring the ith element to find smallest element (n-i-1) comparisons
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
         swap(arr[i],arr[minIndex]);  // swap the smallesst element with 1st element

    }
}

// for descending order sorting we put the condition as arr[j]>arr[minIndex]

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}   


int main(){
    int arr[]={1,4,5,2,8};
    int n=5;
    selectionSort(arr,n);
    cout<<"Sorted array: ";
    printArray(arr,n);
    return 0;
    

}

