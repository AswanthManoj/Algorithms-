//Quick sort code written by 20/4001 Aswanth C M
#include <iostream>
using namespace std;

void swap(int arr[] , int pos1, int pos2){
	int temp;
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}

int partition(int arr[], int low, int high, int pivot){
	int i = low;
	int j = low;
	while( i <= high){
		if(arr[i] > pivot){
			i++;
		}
		else{
			swap(arr,i,j);
			i++;
			j++;
		}
	}
	return j-1;
}

void quickSort(int arr[], int low, int high){
	if(low < high){
	int pivot = arr[high];
	int pos = partition(arr, low, high, pivot);
	
	quickSort(arr, low, pos-1);
	quickSort(arr, pos+1, high);
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
  quickSort(arr, 0 , n-1);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<"\t";
  }
  return 0;
	
}