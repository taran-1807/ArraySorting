#include <iostream>

using namespace std;

void inputArray(int arr[], int n){
    
    cout<<"Enter array element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void sortArray(int arr[], int n){
    
    int i=0;
    for(; i<n; i++){
        
        //assume arr[i] = smallest element
        int minIndex = i;
        
        for(int j=i+1; j<n; j++){
            
            //find the smallest element in the array and replace it with arr[i]
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        
        //swapping smallest element with arr[i]
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int n){
    
    for(int i=0; i<n; i++){
        //printing the array
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    //array declaration
    int arr[100];
    
    //taking input: array size
    cout<<"Enter the size of the array: ";
    int size;
    cin>>size;
    
    inputArray(arr, size);
    sortArray(arr, size);
    printArray(arr, size);
    
    return 0;
    
}
