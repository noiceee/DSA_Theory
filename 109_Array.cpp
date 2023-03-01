#include "Array.h"

using namespace std;

int main(){
    Array arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(12);
    cout << arr.max() << endl;
}