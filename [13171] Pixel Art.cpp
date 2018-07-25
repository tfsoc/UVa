#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main()
{
    long long t,n,i,k,j;
    long long m,c,y;
    string s;
    cin >> t;
    for(k=0;k<t;k++){
        cin >> m >> y >> c;
        cin >> s;
        int len = s.length();
        for(i=0;i<len;i++){
            if(s[i]=='M'){
                m--;
            }else if(s[i]=='C'){
                c--;
            }else if(s[i]=='Y'){
                y--;
            }else if(s[i]=='R'){
                m--;y--;
            }else if(s[i]=='G'){
                y--;c--;
            }else if(s[i]=='V'){
                m--;c--;
            }else if(s[i]=='B'){
                m--;c--;y--;
            }
        }
        if(m<0 || c<0 || y<0){
            cout << "NO" << endl;
        }else{
            cout << "YES " << m << " " << y << " " << c << endl;
        }
    }
    return 0;
}