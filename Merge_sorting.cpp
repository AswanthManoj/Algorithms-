//Merge sort code written by 20/4001 Aswanth C M
#include<iostream>
using namespace std;

void merge(int *array, int l, int m, int r) {
  
   int i, j, k, nl, nr;
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
  
   i = 0; j = 0; k = l;
  
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}

int main(){

  int arr[] = {7,5,9,2,34,65,23,92,9,65,43,73,66,0,3,44,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  cout<<"The array before sorting\n";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<"\t";
  }
  
  cout<<"\n\nThe array after sorting\n";
  mergeSort(arr, 0, n-1);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<"\t";
  }
  return 0;
	
}