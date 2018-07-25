#include <iostream>
#include <map>
#include <string.h>
using namespace std;

map<string,int> dom;
map<string,int>::iterator it;
map<string,int> kat;


int main()
{
    int n;
    int i;
    int ans=0;
    string str;



	
    while(cin >> n){
	ans=0;
	dom.clear();
    for(i=0;i<n;i++){
        cin >> str;

        it=dom.find(str);
        if(it != dom.end()){
            dom[str]++;
        }else{
            dom[str]=1;
        }
    }
    for(i=0;i<n;i++){
        cin >> str;
        it=dom.find(str);
        if(it != dom.end()){
            if(dom[str]>0){
                dom[str]--;
                ans++;
            }
        }
    }
    cout << ans << endl;
	}
    return 0;
}