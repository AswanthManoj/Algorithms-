//Binary search template by 20/4001 Aswanth C M
#include <iostream>
using namespace std;

template <class T>
int Binary_search(T arr[], int n, T x) {
  int arr_start = 0;
  int arr_end = n-1;
  int arr_mid;
  while (arr_end>=arr_start){
    
    arr_mid = int((arr_start+arr_end)/2);
    if (arr[arr_mid] == x)
      return arr_mid;
    else if (arr[arr_mid]<x)
      arr_start = arr_mid+1;
    else
      arr_end = arr_mid-1;
  }
  
  return -1;
}


int main() {
  
    int arr[] = {1,2,5,6,8,9,13,15,16,17,18,20,22,25,27};
    int n = 15;
    int x;
    int position;
    cout<<"The array is : ";
    for(int i=0; i<n ; i++){
      cout<<arr[i]<<"\t";
    }
    cout<<"\nInput the element to be searched : ";
    cin>>x;
    position = Binary_search(arr, n, x);
    if (position == -1)
      cout<<"\nThe element is not found in the array!";
    else
      cout<<"\nThe element is found at position "<<position;
    return 0;
  
}