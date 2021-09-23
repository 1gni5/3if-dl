#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

int main(){

    vector<int> nombre;
    int a;
    cin >> a;
    while( a!=-1){
        nombre.push_back(a);
        cin>>a;
    }
    for(unsigned int i = 0; i < nombre.size()/2; i++){
        if(nombre[i] != nombre[nombre.size()-1- i]){
            printf("%d\r\n", 0);
            return 0;
        }
    }
    printf("%d\r\n", 1);
    return 0;
}