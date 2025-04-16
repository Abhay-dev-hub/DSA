// 12345
// 1234
// 123
// 12
// 1

#include <iostream>
using namespace std;

void meathod1(int n){
    for(int i = 0; i <= n;i++){
       for(int j = 1;j< n-i+1; j++){
        cout << j;
       }
       cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    meathod1(n);
}