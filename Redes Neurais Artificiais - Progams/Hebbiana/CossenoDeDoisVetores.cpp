#include <iostream>
#include <iomanip>
using namespace std;

double X[4][10]={
    {8,-16,-20,12,-16,16,20,-8,-12,16},
    {16,-8,-12,-12,8,-8,12,-16,12,8},
    {16,8,-12,-12,-8,8,12,-16,12,-8},
    {-8,-16,-12,20,-16,16,12,8,-20,16}
};
double Y[4][10]={
    {1,-1,-1,1,-1,1,1,-1,-1,1},
    {1,-1,-1,-1,1,-1,1,-1,1,1},
    {1,1,-1,-1,-1,1,1,-1,1,-1},
    {-1,-1,-1,1,-1,1,1,1,-1,1}
};

int main(){
    double cosseno[10];
    for (int i=0; i<10; i++){    
        cosseno [i]=0;
    }
    for (int i=0; i<4; i++){
        for(int j=0; j<10; j++){
            cosseno[j]=cosseno[j]+X[i][j]*X[i][j];
            cout << setprecision(4) << setw(8) << cosseno[j];
        }
        cout << endl;
    }
    for (int i=0; i<10; i++){
        cout << setprecision(4) << setw(8) << cosseno[i];
    }
    cout << endl;
}