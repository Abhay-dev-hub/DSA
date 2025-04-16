// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

void meathod1(int n){
    for(int i = 0; i <= n;i++){
        for(int j = n;i < j;j--){
            cout << "*";
        }
        cout << endl;
    }
}

void meathod2(int n){
    for(int i = 0; i <= n;i++){
        for(int j = 1; j < n-i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    meathod1(n);
    meathod2(n);
    
}

