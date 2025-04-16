#include <iostream>
using namespace std;

void meathod1(int n){
    for(int i = 0; i <= n; i++){
        for(int j = 0;j < i; j++){
            cout << "*";
        }
        cout << endl;
    }

}

void meathod2(int n){
    for(int i = 0; i <= n; i++){
        for(int j = 0; j< n-i-1;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void method2(int n){
     for(int i = 1; i < 2*n-1;i++){
        int stars = i;
        if (i > n) stars = 2*n-i;
        for(int j = 1; j < stars;j++){
            cout << "*";
        }
        cout << endl;

     }
}

int main(){
    int n;
    cin >> n;
    // this method 1, got by mistake because it prints unnessary spaces when i = 0, 
    // becasue of that the 6th line ie fails and get space
    // meathod1(n);
    // meathod2(n);
    method2(n);
}

