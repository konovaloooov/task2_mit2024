#include <iostream>
using namespace std;

void fib(int n){
    int tmp1 = 0, tmp2 = 1, tmp3;
    if (n == 1){
        cout << tmp1 << endl;
        return;
    }
    cout << tmp1 << endl << tmp2 << endl;

    for(int i = 2; i < n; i++){
        tmp3 = tmp1 + tmp2;
        cout << tmp3 << endl;
        tmp1 = tmp2;
        tmp2 = tmp3;
    } 
}

int main(){
    int n;
    cout << "n = "; cin >> n;
    cout << "result:" << endl;
    fib(n);
    return 0;
}