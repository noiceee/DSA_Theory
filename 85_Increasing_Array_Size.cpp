#include <iostream>

using namespace std;

int* increaseSize(int *arr, int len1, int len2){
    int *arr2 = new int[len2];
    for(int i=0; i<len1; i++){
        arr2[i] = arr[i];
    }
    delete []arr;
    return arr2;
}

int main(){
    int* arr = new int[5];
    for(int i=0; i<5; i++){
        arr[i] = i+1;
    }
    arr = increaseSize(arr, 5, 10);
    for(int i=0; i<10; i++)
    cout<<arr[i];
    cout<<endl;
}