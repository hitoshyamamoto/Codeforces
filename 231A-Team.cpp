#include <bits/stdc++.h>
using namespace std;

int main(){
    int entrada;

    cin >> entrada;

    int quant[entrada]={0};
    int resposta=0;

    for(int i=0; i<entrada; i++){
        int Petya=0, Vasya=0, Tonya=0;

        cin >> Petya;
        if(Petya==1){
            quant[i]++;
            Petya=0;
        }

        cin >> Vasya;
        if(Vasya==1){
            quant[i]++;
            Vasya=0;
        }

        cin >> Tonya;
        if(Tonya==1){
            quant[i]++;
            Tonya=0;
        }

        if(quant[i]>=2) resposta++;
    }

    cout << resposta << endl;

    return 0;
}