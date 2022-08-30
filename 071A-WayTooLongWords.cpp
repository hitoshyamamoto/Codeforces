#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
    string palavra;
    int quant=0;
    int entrada;

    cin>>entrada;

    for(int i=0; i<entrada; i++){
        cin>>palavra;
        quant=0;
        if(palavra.size()>10){
            for(int j=0; j<palavra.size(); j++){
                if(j==0) cout << *palavra.begin();
                else{
                    quant++;
                    if(j==palavra.size()-2){
                        cout << quant;
                        cout << palavra[palavra.size()-1] << endl;
                    }
                }
            }
        }else{
            cout << palavra << endl;
        }
    }

    return 0;
}