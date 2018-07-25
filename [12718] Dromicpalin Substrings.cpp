#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int t, ans;
    string s;
    int a[26];
    int c=1;

    cin >> t;
    while(t--){

        cin >> s;
        int len = s.length();
        ans=0;
        for(int i=0;i<len;i++){
            memset(a,0,sizeof a);

            int sublen=1;
            int nopair=0;

            for(int j=i;j<len;j++){
                int ptr=s[j]-'a';
                a[ptr]++;
                if(a[ptr]%2==1)
                    nopair++;
                else
                    nopair--;
                if(sublen%2==0 && nopair==0)ans++;
                if(sublen%2==1 && nopair==1)ans++;
                sublen++;
            }
        }
        cout << "Case " << c++ << ": " << ans << endl;
    }
    return 0;
}