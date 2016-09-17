#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    //add int N test cases
    int test, ti;
    string key, text, bf;
    char ekey[5][5];
    int ikey[5][5];
    cin >> test;
    getline(cin,bf);
    for(ti=0;ti<test;ti++){
        getline(cin,key);
        getline(cin,text);
        int abc[26];
        int i,tmp;
        int j=0;
        int k;
        int n=key.length();
        for(i=0;i<26;i++)abc[i]=0;
        abc[16]=1;
        for(i=0;i<n;i++){
            if(!(key[i]>='a' && key[i]<='z'))continue;
            tmp=(int)key[i]-97;
            if(abc[tmp]==0){
                abc[tmp]=1;
                ekey[j/5][j%5]=key[i];
                j++;
            }
        }
        tmp=0;
        for(i=j;i<25;i++)
        {
            while(abc[tmp]!=0)tmp++;
            abc[tmp]=1;
            ekey[i/5][i%5]=(char)(tmp+97);
        }
        /****/
    //    cout << "abc: ";
    //    cout << endl;
    //    for(i=0;i<26;i++)cout << abc[i] << " ";
    //    cout << endl;
    //
    //    cout << "ekey: ";
    //    cout << endl;
    //
    //    for(i=0;i<5;i++)
    //    {
    //        for(j=0;j<5;j++)
    //            cout << ekey[i][j] << " ";
    //        cout << endl;
    //    }

        /****/
        text.erase(remove(text.begin(), text.end(), ' '), text.end());
        n=text.length();
        for(k=0;k<n;k=k+2)
        {
            if(text[k]==text[k+1] || k+1==n){
                text.insert(k+1,"x");
                n++;
            }

            i=0;
            while(ekey[i/5][i%5]!=text[k])i++;

            j=0;
            while(ekey[j/5][j%5]!=text[k+1])j++;

            if(i/5==j/5){
                text[k]=ekey[i/5][(i+1)%5];
                text[k+1]=ekey[j/5][(j+1)%5];
                continue;
            }

            if(i%5==j%5){
                text[k]=ekey[(i/5+1)%5][i%5];
                text[k+1]=ekey[(j/5+1)%5][j%5];
                continue;
            }

            text[k]=ekey[i/5][j%5];
            text[k+1]=ekey[j/5][i%5];
        }
    //    cout << endl;
    //    cout << "text:"<<endl;
    //    cout << text;
    //
        for(i=0;i<n;i++)
        {
            text[i]-=32;
        }
    //    cout << endl;
    //    cout << "TEXT:"<<endl;
        cout << text << endl;
    }
    return 0;
}
