#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

using namespace std;



int main()
{
    int t,i,j,prime,ans,n,m,l,k;

    int a,b;

    int curr;
    cin >> t;
    for (i=0; i<t; i++){
        cin >> prime;
        bool visited[1000001]={0};

        cout << "0.";
        curr=10;

        visited[1]=1;


        while(!visited[curr]){
            visited[curr]=1;
            if(curr>=prime){
               a=curr/prime;
               cout << a;
               curr=curr%prime;
            }else{
                cout << "0";
            }
            curr*=10;
        }
        cout << endl;
    }
    return 0;
}