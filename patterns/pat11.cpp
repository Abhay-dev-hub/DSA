// 1
// 01
// 101
// 0101
// 10101
// 010101

#include <iostream>
using namespace std;

void meathod(int n){
    for(int i = 0; i <= n; i++){
        int start = 1;
        if(i % 2 == 0) start = 1;
        else
         start = 0;
        for(int j = 0;j <= i;j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}



int main(){
    int n;
    cin >> n;
    meathod(n);
}