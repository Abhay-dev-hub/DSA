#include <iostream>
using namespace std;

void method(int n){
    for(int i = 0; i <= 2*n; i++){
        // star
        for(int j = 0; j <= n-i+1;j++){
            cout << "*";
        }
        // space
        for(int j = 0;j <= i;j++){
            cout << " ";
        }
        // star
        for(int j = 0; j <= n-i+1;j++){
            cout << "*";
        }
        cout << endl;


    }
}

void method2(int n){
    for(int i = 0; i <= 2*n; i++){
        // star
        for(int j = 0; j <= n-i+1;j++){
            cout << "*";
        }
        // space
        for(int j = 0;j <= 2*n-2*i;j++){
            cout << " ";
        }
        // star
        for(int j = 0; j <= n-i+1;j++){
            cout << "*";
        }
        cout << endl;
    }

}

int main(){
    int n;
    cin >> n;
    method(n);
}