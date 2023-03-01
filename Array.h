#include <iostream>

using namespace std;

struct Array
{
    int *arr = new int[2];
    int size = 2;
    int length = 0;

    void display(){
        for(int i=0; i<length; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    int get(int index){
        if(index >= 0 && index <= length){
            return arr[index];
        } else {
            return -1;
        }
    }
    
    int set(int index, int val){
        if(index >= 0 && index <= length){
            arr[index] = val;
            return 1;
        } else {
            return 0;
        }
    }
    
    void increaseSize(){
        int* arr2 = new int[size*2];
        for(int i=0; i<length; i++){
            arr2[i] = arr[i];
        }
        delete[] arr;
        arr = arr2;
        arr2 = nullptr;
        size *= 2;
    }

    void insert(int index, int val){
        if(length == size){
            increaseSize();
        }
        for(int i=length; i>index; i--){
            arr[i] = arr[i-1];
        }
        arr[index] = val;
        length++;
    }
    
    void push_back(int val){
        if(length == size){
            increaseSize();
        }
        arr[length] = val;
        length++;
    }

    void reverse(){
        for(int i=0; i<length/2; i++){
            int temp = arr[i];
            arr[i] = arr[length-i-1];
            arr[length-i-1] = temp;
        }
    }

    ~Array(){
        delete[] arr;
    }
};
