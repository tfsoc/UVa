#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <vector>
#include <fstream>



using namespace std;

bool p[20000];
bool sm[20000]={ 0 };
int main()
{
    string s,x;
    int i,j,k,l,m,n;

    for(i=0;i<20000;i++){
        p[i]=true;
    }

    for(i=2;i<10000;i++){
        if(p[i]==true){
            for(j=i*i;j<20000;j+=i){
                p[j]=false;
            }
        }
    }
//    int ptr=2;
//    for(i=0;i<26;i++){
//        int c = 'a'+i;
//        if(p[i])sm[i]=1;
//    }
//
//    for(i=0;i<26;i++){
//        int c = 'A'+i;
//        if(p[i+26])sm[i+26]=1;
//    }
//
//    for(i=0;i<56;i++){
//        if(sm[i])cout << i << endl;
//    }



//    for(i=1;i<100;i++){
//        //cout << p[i] << endl;
//        if(p[i])
//            cout << i <<  "  " << endl;
//    }

    while(cin >> s)
    {
        bool a=false;
        int len =s.length();
        int sum=0;
        for(i=0;i<len;i++){
            if(s[i]<='z' && s[i]>='a')
                sum+=s[i]-'a'+1;
            else if(s[i]>='A' && s[i]<='Z')
                sum+=s[i]-'A'+1+26;
            //cout << sum << endl;
        }

        //cout << sum << endl;
        if(p[sum]==false)a=true;
        else
            a=false;

        if(a)
            x=" not";
        else
            x="";

        cout << "It is" << x << " a prime word." << endl;
    }
    return 0;
}