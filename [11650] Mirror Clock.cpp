#include <iostream>

using namespace std;

int main()
{
    int h,i,m,n;
    char tmp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>h>>tmp>>m;
        if(h==12)h=0;
        if(m!=0){
            h=11-h;
            m=60-m;
        }else{
            h=12-h;
        }
        if(h==0)h=12;
        if(h<10)cout<<'0';
        cout<<h<<':';
        if(m<10)cout<<'0';
        cout<<m<<endl;
    }
    return 0;
}
