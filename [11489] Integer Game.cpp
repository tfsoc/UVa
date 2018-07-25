#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;

int canBeRemoved(string s, int x){
    string tmp = s;
    s[x] = '0';
    //int a = atoi(s.c_str());
    int a=0;
    for(int i=0;i<s.length();i++){
        a+=s[i]-'0';
    }
    int ans = a%3;
    return ans;
}

int main()
{
    int T;
    string x;
    char ans;

    //cout << canBeRemoved("33333333333",0) << endl;

    cin >> T;
    for(int t=1;t<=T;t++){
        cin >> x;
        int able=0;

        int n=x.length();
        for(int i=0;i<n;i++){
            if(canBeRemoved(x,i)==0){
                    able++;
                    x.erase(i,1);
                    n=x.length();
                    i=-1;
                    continue;
            }
        }

        ans = (able%2==1) ? 'S' : 'T';
        //cout << "able = " << able << endl;
        cout << "Case " << t << ": " << ans << endl;
    }
    return 0;

}