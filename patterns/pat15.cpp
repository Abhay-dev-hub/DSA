// ABCDE
// ABCD
// ABC
// AB
// A

#include <iostream>
using namespace std;

void method(int n){
    for(int i = 0; i <= n;i++){
        for(char ch = 'A';ch <= 'A'+(n-1-i);ch++){
            cout << ch;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    method(n);
}