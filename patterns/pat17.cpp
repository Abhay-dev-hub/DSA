//     A   
//    ABA  
//   ABCBA 
//  ABCDCBA

#include <iostream>
using namespace std;

void method(int n){
    for(int i =0 ;i < n; i++){
        // space
        for(int j =0; j < n-i-1;j++){
            cout << " ";
        }
        // alphabet
        char ch ='A';
        int breakpoint = (2*i+1)/2;
        for(int j = 0; j < 2*i+1;j++){
            cout << ch;
            if(breakpoint > j) ch++;
            else ch--;
        }
        // space
        for(int j =0; j < n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    method(n);
}