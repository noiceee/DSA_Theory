#include <iostream>

using namespace std;

double taylor(int x, int n){
    static double r = 1;
    if(n == 0){
        return r;
    }else{
        r = 1 + x*r/n;
        return taylor(x, n-1);
    }
}
int main(){
    int a, b;
    cout << "Enter number 1 : ";
    cin >> a;
    cout << "Enter number 2 : ";
    cin >> b;
    cout << taylor(a, b) << endl;
}