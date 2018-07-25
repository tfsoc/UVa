#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

using namespace std;

long long tab[100]={0};

int calcTab(){
    tab[1]=1;
    tab[2]=5;
    tab[3]=11;
    for(int n=4;n<41;n++){
        tab[n] = tab[n-3]*2 + tab[n-2]*4 + tab[n-1];
    }
    return 0;
}


int main()
{
    int t;
    int n;
    calcTab();

    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        cout << tab[n] << endl;
    }

    return 0;
}