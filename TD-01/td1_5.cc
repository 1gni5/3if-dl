#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    printf("%d\r\n", n);
    while( n!= 1){
        if(n%2 ==0){
            n = n/2;
        } else if(n%2 == 1){
            n = 3*n +1;
        }
        printf("%d\r\n",n);
    }
}