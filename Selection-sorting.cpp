#include<iostream>
using namespace std;

void selectionSort(int array[]){
    int arrayLength = sizeof(array)/sizeof(array[0]);
    for(int i = 0; i < arrayLength-1; i++){
        for(int j = i+1; j < arrayLength-1; j++){
            if(array[j]>array[i]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}

void display(int array[]){
    int arrayLength = sizeof(array)/sizeof(array[0]);
    for(int i=0; i < arrayLength; i++)
        cout<<array[i]<<" ";
}

int main(){
    int sampleArray[] = {2, 7, 0, 32, 65, 24, 97, 45, 43, 85, 28, 64, 12, 17};

    cout<<"Array before sorting: ";
    display(sampleArray);

    selectionSort(sampleArray);

    cout<<"Array after sorting: ";
    display(sampleArray);

    return 0;
}