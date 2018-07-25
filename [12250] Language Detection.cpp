#include <iostream>
#include <string>
#include<string.h>
using namespace std;

int main()
{
    string s;
    string ans[]={"ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN","UNKNOWN"};
    string str[]={"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
    int i=0;
    int c=1;
    cin >> s;

    while(s!="#"){
        for(i=0;i<6;i++){
            if(str[i]==s)
                break;
        }
        cout << "Case " << c++ << ": " <<ans[i] << endl;
        cin >> s;
    }
    return 0;
}