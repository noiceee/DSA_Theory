#include <iostream>

using namespace std;

void swap(int&a, int &b){
    int c = a;
    a = b;
    b = c;
}
void rearrange(int arr[], int len){
    int leftptr = 0;
    int rightptr = len-1;
    while (leftptr<rightptr){
        while(arr[leftptr]<0)leftptr++;
        while(arr[rightptr]>=0)rightptr--;
        swap(arr[leftptr], arr[rightptr]);
        leftptr++;
        rightptr--;
    }
    
}

int main(){
    int arr[13] = {6, 5, -1, -2, 3, 4, 5, 2, -1, 35, -3, 2, 1};
    rearrange(arr, 13);
    for(int i=0; i<13; i++){
        cout<<arr[i]<<" ";
    }
    cout << "\n";
}