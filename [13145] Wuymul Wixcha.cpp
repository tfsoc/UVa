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



    string in, out;

    while(true){
        cin >> t;
        if(t==0)break;
        while(t<0)t+=26;
        cin.ignore();
        std::getline (std::cin,in);
        len=in.length();
        out="";
        for(i=0;i<len;i++){
            //if(in[i]==' ')out+=" ";
            //else if(in[i]>='0' && in[i]<='9')out+=in[i];
            if(in[i]>='a' && in[i]<='z')out+=(char)((in[i]+t-'a')%26+'a');
            else if(in[i]>='A' && in[i]<='Z')out+=(char)((in[i]+t-'A')%26+'A');
            else out+=in[i];
        }
        cout << out << endl;
    }
    return 0;
}