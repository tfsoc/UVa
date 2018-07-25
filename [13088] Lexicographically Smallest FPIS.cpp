#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
    int t;
    int len, i, j, dif;
    int arr[26];

    string in, out;
    cin >> t;

    while(t--){
        cin >> in;
        out = "";
        dif=0;
        len=in.length();

        for(i=0;i<26;i++)arr[i]=0;

        for(i=0;i<len;i++){
            arr[(in[i]-'a')]++;
        }

        for(i=0;i<26;i++)if(arr[i]!=0)dif++;

        if(len==0)cout << "\n";
        else{
            i=0;
            while(arr[i]==0)i++;
            for(j=0;j<len-dif+1;j++)out+=i+'a';
            i++;

            for(j=0;j<dif-1;j++){
                while(arr[i]==0)i++;
                out+=i+'a';
                i++;
            }

            //for(i=0;i<26;i++)cout << arr[i] << "\n";
            cout << out << "\n";
        }
    }
    return 0;
}