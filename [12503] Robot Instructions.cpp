#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <string>
#include<sstream>
using namespace std;

int pos=0;
string instr[100];

int execInstr(int num){
    //cout << "executing " << instr[num] << endl;
    if(instr[num][0]=='L'){
        pos--;
    }else if(instr[num][0]=='R'){
        pos++;
    }else{
        char a = instr[num][8];
        int x = a - 48;

        if(instr[num].length()>=10){
            x*=10;
            a = instr[num][9];
            x+=a-48;
        }
//        cout << x << endl;
//        cout << instr[num] << endl;
//        cout << instr[num][8] << endl;
        execInstr(x-1);
    }
    return 0;
}

int main()
{
    int T;
    int n;
    int x,y;
    int i,j,k;
    string tmp;
    cin >> T;
    for(i=0;i<T;i++){
        pos=0;
        cin >> n;
        std::getline(std::cin, tmp);
        for(j=0;j<n;j++){
            std::getline(std::cin, instr[j]);
            //cout << instr[j] << endl;
            //cout << "j= " << j << endl;
            //cout << instr[j] << endl;
        }

        for(k=0;k<n;k++){
            execInstr(k);
        }
        cout << pos << endl;
    }
    return 0;
}