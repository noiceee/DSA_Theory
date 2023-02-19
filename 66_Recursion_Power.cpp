#include <iostream>

using namespace std;

int pow(int a, int b){
    if(b == 0){
        return 1;
    } else if (b == 1){
        return a;
    } else if (!(b&1)){
        return pow(a*a, b/2);
    } else {
        return a * pow(a*a, b/2);
    }
}

int main(){
    int a, b;
    cout << "Enter number 1 : ";
    cin >> a;
    cout << "Enter number 2 : ";
    cin >> b;
    cout << pow(a, b) << endl;
}