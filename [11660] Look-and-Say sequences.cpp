#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main()
{

    int j1, i1;
    string a,b;
    a="1321131112";
    char * intStr;
    char x;
//    for(int j=0; j<50; j++)
//    {
//        for(int i=0; i<a.length(); i++)
//        {
//            x='1';
//            while(a[i]==a[i+1]&&i<a.length())
//            {
//                x++;
//                if(x>'9')
//                {
//                    x='0';
//                    b.append("1");
//                }
//                i++;
//            }
//            b.push_back(x);
//            b.push_back(a[i]);
//        }
//        a=b;
//        b="";
//    }
//    cout << a.length() << endl;

    cin >>a>> i1 >>j1;
    while(i1+j1!=0)
    {
        for(int j=1; j<i1; j++)
        {
            for(int i=0; i<a.length(); i++)
            {
                x='1';
                while(a[i]==a[i+1]&&i<a.length())
                {
                    x++;
                    if(x>'9')
                    {
                        x='0';
                        b.append("1");
                    }
                    i++;
                }
                b.push_back(x);
                b.push_back(a[i]);
                if(b.length()>3000)break;
            }
            a=b;
            b="";
        }
//        cout << a << endl;
        cout << a[j1-1] << endl;
        cin >>a>> i1 >>j1;
    }
    return 0;
}
