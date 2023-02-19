#include <iostream>

using namespace std;

double taylor(int x, int n){
    static double nuemerator = 1.0, denominator = 1.0;
    if(n == 0){
        return 1;
    }else{
        double r = taylor(x, n-1);
        nuemerator *= x;
        denominator *= n;
        return r + nuemerator/denominator;
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