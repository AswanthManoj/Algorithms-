//Linear search template by 20/4001 Aswanth C M
#include <iostream>
using namespace std;

template <class T>
int Linear_search(T arr[], int n, T x) {
  for(int i=0; i<n ; i++){
    if (arr[i]== x)
      return i;
  }
  return -1;
}


int main() {
    int arr[] ={29,33,34,39,89,97,76,69,56,57,25,16,71};
    int n = 13;
    int x;
    int position;
    cout<<"The array is : ";
    for(int i=0; i<n ; i++){
      cout<<arr[i]<<"\t";
    }
    cout<<"\nInput the element to be searched : ";
    cin>>x;
    position = Linear_search(arr, n, x);
    if (position == -1)
      cout<<"\nThe element is not found in the array!";
    else
      cout<<"\nThe element is found at position "<<position;
    return 0;
}