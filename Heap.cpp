#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i){
    int l = 2*i;
    int r = 2*i+1;
    
    int max = i;
    if(l < n && arr[l] > arr[max]){
        max = l;
    }
    if(r < n && arr[r]>arr[max]){
        max = r;
    }
    
    
    
    if (max != i){
        swap(arr[i], arr[max]);
        heapify(arr,n,max);
    }
    
}

void Build_Heap(int arr[], int n){
    for(int i =  n / 2 - 1; i>= 0; i--)
        heapify(arr,n,i);
}

void heapsort(int arr[], int n){
    Build_Heap(arr,n);
    for(int i = n-1; i >= 0; i--){
        swap(arr[0] , arr[i]);
        heapify(arr,i,0);
            
    }
}


void print(int arr[], int n)
{
    cout <<"[ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<" ]"<< endl;

}







int main(){
    
    int arr[] = { 100 ,250, 33, 10, 50, 30,2};
    int n = sizeof(arr) / sizeof(arr[0]) ;
   heapsort(arr,n);
   print(arr,n);
}