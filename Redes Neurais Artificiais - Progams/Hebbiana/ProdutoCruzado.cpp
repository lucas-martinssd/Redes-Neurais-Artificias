#include <iostream>
#include <iomanip>
using namespace std;

double W[4][4]={
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0}
};
double X[4][10]={
    {1,-1,-1, 1,-1, 1, 1,-1,-1, 1},
    {1,-1,-1,-1, 1,-1, 1,-1, 1, 1},
    {1, 1,-1,-1,-1, 1, 1,-1, 1,-1},
    {-1,-1,-1, 1,-1, 1, 1, 1,-1, 1}
};

int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            W[i][j]=0;
            for(int k=0; k<10; k++){
                W[i][j]=W[i][j]+X[i][k]*X[j][k];
            }
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << setprecision(4) << setw(8) << W[i][j];
        }
        cout << endl;
    }
    cout << endl;
}