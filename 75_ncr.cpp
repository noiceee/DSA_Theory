#include <iostream>

using namespace std;

long long int factorial[30];

long long int fact(long long int n){
    if(n<=1){
        return n;
    }
    return n*fact(n-1);
}

long long int mfact(long long int n){
    if(n == 0){
        factorial[0] = 1;
        return 1;
    }
    long long int t;
    if(factorial[n-1] != -1){
        t = factorial[n-1];
    } else {
        t = mfact(n-1);
    }
    factorial[n-1] = t;
    return n*factorial[n-1];
}


long long int ncr(long long int n, long long int r){
    if(n <= 1)
    return 1;
    long long int t1 = fact(n);
    long long int t2 = fact(r);
    long long int t3 = fact(n-r);
    return (t1/(t3*t2));
}

long long int mncr(long long int n, long long int r){
    if(n <= 1)
    return 1;
    long long int t1 = mfact(n);
    long long int t2 = mfact(r);
    long long int t3 = mfact(n-r);
    return ((t1*1.0/t2)/t3);
}

int pncr(int n, int r){
    if(r == 0 || n == r){
        return 1;
    }
    return pncr(n-1, r-1) + pncr(n-1, r);
}

int main(){
    long long int n, r;
    for(int i=0; i<30; i++)
    factorial[i] = -1;
    cin >> n >> r;
    cout << mncr(n, r) << endl;
    cout << ncr(n, r) << endl;
    cout << pncr(n, r) << endl;
}