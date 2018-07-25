#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ans[100]={0};
    int n;
    int a,b,c;
    int a1,b1,c1;

    ans[1]=1;
    ans[2]=2;
    a=1;
    b=0;
    c=1;

    for(int i=3;i<77;i++){
        a1=b+c;
        b1=c;
        c1=a;

        a=a1;
        b=b1;
        c=c1;


        ans[i]= a+c;
    }

    while(cin >> n){
        cout << ans[n] << endl;
    }
    return 0;
}