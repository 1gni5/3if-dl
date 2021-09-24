#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> result(n);
    vector<int> nombres(n);
    for (unsigned int i = 0; i <n; i++){
        cin >> nombres[i];
    }
    
    int max = nombres[0];
    for(unsigned int i = 1; i < n; i++){
        if(max+nombres[i] > nombres[i] ){
            max = max+nombres[i];
        } else {
            max = nombres[i];
        }
        result[i] = max;
    }
    int resultat = result[0];
    for(unsigned int i = 0; i < result.size(); i++){
        if (result[i] > resultat){
            resultat = result[i];
        }
    }

    printf("%d\r\n", resultat);
}