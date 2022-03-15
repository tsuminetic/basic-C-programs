#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int i=x-1;
    for(i;i>0;i--){
        char lol='x';
        if(i==1){
            lol='=';
        }
        cout << i+1 << lol;
        x = x * (i);

    }
    cout << x;
    getch();
    return 0;
}