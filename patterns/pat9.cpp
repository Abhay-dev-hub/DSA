//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     *

#include <iostream>
using namespace std;

// up triangle
void meathod1(int n){
    for(int i = 0; i < n; i++){
        //space
        for(int j = 0; j< n-i-1;j++){
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

// down triangle
void meathod2(int n){
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
    meathod1(n);
    meathod2(n);
}