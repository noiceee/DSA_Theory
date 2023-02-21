#include <iostream>

using namespace std;

int fib_rec(int n){
    if(n <= 1)
    return n;
    else
    return fib_rec(n-1) + fib_rec(n-2);   //O(n^2)
}

int fib_iter(int n){
    int c, a = 0, b = 1;
    if(n <= 1)
    c = n;
    while(n>=2){
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int fib_memo(int n, int* ptr){
    if(n <= 1){
        ptr[n] = n;
        return n;
    }else{
        if(ptr[n-1] == -1)
            ptr[n-1] = fib_memo(n-1, ptr);
        if(ptr[n-2] == -1)
            ptr[n-2] = fib_memo(n-2, ptr);
        ptr[n] = ptr[n-1] + ptr[n-2];
        return ptr[n];     //O(n)
    }
}

int main(){
    int a;
    int* ptr;
    cout << "Enter number : ";
    cin >> a;
    ptr = new int[a];
    for(int i=0; i<a; i++){
        ptr[i] = -1;
    }
    cout << fib_iter(a) << endl;
    cout << fib_rec(a) << endl;
    cout << fib_memo(a, ptr) << endl;
}