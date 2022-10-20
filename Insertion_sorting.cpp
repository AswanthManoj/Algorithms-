//This is insertion_sort program written by 20/4001_Aswanth C M
#include<iostream>
using namespace std;

template<class T>
void insertion_sort(T arr[],int n){
  int i,j;
  T temp;
  for(i=0; i<n-1; i++){
    for(j=i; j>0; j--){
      if(arr[j]>arr[j+1]){
          temp = arr[j+1]; arr[j+1] = arr[j]; arr[j] = temp;
      }
    }
  }

}

int main(){
  int arr[]={1,7,9,8,56,0,3,23,6};
  int n=9;
  cout<<"Array before sorting :\n";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<"\t";
  }
  insertion_sort(arr,n);
  cout<<"\nArray after sorting :\n";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<"\t";
  }
}