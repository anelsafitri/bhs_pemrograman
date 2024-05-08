#include <iostream>

using namespace std;

int mai (){
    int i =1;
    int j =1;
    for (i; i<=3; i++){
        for (j; j<=i;++j){
            cout << j << endl;
        }
    }
     
    cout << endl;

    return 0;
}