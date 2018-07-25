#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <vector>
#include <fstream>

using namespace std;
bool p[100000000];
//ofstream myfile;

int main()
{
    long long i, j;
    long long in;
    long long out;
    //myfile.open ("example.txt");
    for(i=1;i<100000000;i++){
        p[i]=true;
    }

    for(i=1;i<10000;i++){
        if(p[i]==true){
            for(j=i*i;j<100000000;j+=i){
                p[j]=false;
            }
        }
    }

//    for(i=1;i<100;i++){
//        if(p[i])cout << i <<  "  " << 2*i+1 << endl;
//    }

    while(true){
        cin >> in;
        if(in==1)break;
        out=0;
//
        while(in%2==0){
            in=in/2;
            out++;
        }

        i=3;
        while(in!=1){
            while(p[i]==false && in%i!=0){
                i+=2;
                if(i*i>in){
                    in=i;
                    break;
                }
                if(i>=10000000){
                    in=i;
                    out++;
                    break;
                }
            }
            in=in/i;
            out++;

        }
        //myfile << out << "\n";
        cout << out << endl;
    }

    return 0;
}