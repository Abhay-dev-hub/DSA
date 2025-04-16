    //     *
    //    ***
    //   *****
    //  *******



#include <iostream>
using namespace std; 

void meathod(int n){
    for(int i = 0; i < n; i++){
        //space
        for(int j = 0; j < n-i-1;j++){
            cout << " ";
        }
        
        // satr
        for(int j = 0;j < 2*i+1;j++){
            cout << "*";
        }
        
        // space
        for(int j = 0; j < n-i-1;j++){
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