//Bubble sort code written by 20/4001 Aswanth C M
#include <iostream>
using namespace std;
template<class T>
void Bubble_sort(T arr[], int n){
  T temp;
  for(int i = 0; i<n-1; i++){
    for(int j = 0; j<n-1-i; j++){
      if(arr[j]>arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {7,5,9,2,34,65,23,92,9,65,43,73,66,0,3,44,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  cout<<"The array before sorting\n";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<"\t";
  }
  
  cout<<"\n\nThe array after sorting\n";
  Bubble_sort(arr, n);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<"\t";
  }
  
  return 0;
}