// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

#include <iostream>
using namespace std;

void method(int n){
    int count = 1;
    for(int i = 0; i <= n;i++){
        for(int j = 0;j <= i;j++){
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    method(n);
}