#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

double W[4][4]={
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0}
};
double X[4]={1,1,1,-1};

int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            W[i][j]=X[i]*X[j];
            cout << setprecision(4) << setw (8) << W[i][j]; 
        }
        cout << endl;
    }
}