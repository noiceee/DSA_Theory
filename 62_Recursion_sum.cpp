#include<iostream>

using namespace std;

int sumNatural(int n){
    if(n == 1){
        return 1;
    }
    return n + sumNatural(n-1);
}

int main(){
    int x;
    cout << "Enter the number : ";
    cin>>x;
    cout << "Sum of first "<<x<<" natural numbers is : " << sumNatural(x) << endl;
}