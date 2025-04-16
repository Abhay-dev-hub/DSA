#include <iostream>
using namespace std;

void meathod(int n){
    for(int i = 0; i <= n; i++){
        // space
        for(int j = 0;j < i;j++){
            cout << " ";
        }

        // star
        // star formula is 2n-(2i+1)
        for(int j = 0; j < 2*n-(2*i+1);j++){
            cout << "*";
        }

        // space
        for(int j = 0;j < i;j++){
            cout << " ";
        }
        cout << endl;
    }

}



int main(){
    int n;
    cin >> n;
    meathod(n);

}