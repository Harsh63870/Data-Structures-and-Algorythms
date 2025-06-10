#include <iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i < j){
        while(arr[i]<=arr[pivot] && i < high){
            i++;
        }
        while(arr[j]>arr[pivot]  && j>=high){
            j--;
        }
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    int temp=arr[pivot];
    arr[pivot]=arr[j];
    arr[j]=temp;
    return j;
}
void quicksort(int arr[], int low, int high){
    if(low<high){
        int partIndex=partition(arr,low,high);
        quicksort(arr,low,partIndex-1);
        quicksort(arr,partIndex+1,high);
    }
}
void display(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]={1,53,2,5,23};
    display(arr,5); 
    quicksort(arr, 0, 4);
    display(arr,5);
    return 0;
}