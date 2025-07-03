#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}


int main(){
    int arr[]={1,2,56,78,9};
    int n=5, key=56;
    if(linearSearch(arr, n, key)) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
    

}