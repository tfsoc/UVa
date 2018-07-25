#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <vector>
#include <fstream>



using namespace std;

int c[26]={0};
int main()
{
    string s,ans;
    int i,j,k,l,n,m;
    cin >> s;

    while(s!="#"){
        int odd=0;

        ans="";
        for(i=0;i<26;i++){
            c[i]=0;
        }



        int len = s.length();

        for(i=0;i<len;i++){
            c[s[i]-'a']++;
        }

        for(i=0;i<26;i++){
            if(c[i]%2!=0)
                odd++;
        }
        //cout << "odd =" << odd << endl;
        while(odd>1){
            for(i=0;i<26;i++){
                if(c[i]%2!=0){
                    ans+='a'+i;
                    odd--;
                }
                if(odd==1)break;
            }
        }
        cout << ans << endl;
        cin >> s;
    }
    return 0;
}