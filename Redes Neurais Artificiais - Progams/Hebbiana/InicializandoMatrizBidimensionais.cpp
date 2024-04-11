#include <iostream>
using namespace std;

int main(){
    double W[4][4]={
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << W[i][j] << " ";
        }
        cout << endl;
    }

}

