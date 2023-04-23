#include "Array.h"

using namespace std;

void missingElements(Array &arr){
    int diff = arr.get(0);
    int i=1;
    for(; i<arr.length; i++){
        while(arr.get(i)-i != diff){
            cout << "Missing element : " << i + diff << endl;
            diff++;
        }
    }
    if(diff == arr.get(0)){
        cout << "No missing element \n";
    }
}

int main(){
    Array arr;
    int t;
    cout << "Enter length of Array : ";
    cin>>t;
    while(t--){
        int x; cin>>x;
        arr.push_back(x);
    }
    missingElements(arr);
}
