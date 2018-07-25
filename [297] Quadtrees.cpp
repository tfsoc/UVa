#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
using namespace std;

string s1,s2;
string res="";
int len1, len2;
bool p[32][32]={0};
int ptr1, ptr2;

int foo(int l, int r, int u, int d){
    if(ptr1>=len1)
        return 0;
    if(s1[ptr1]=='f'){
        int x,y;
        for(x=l;x<=r;x++){
            for(y=u;y<=d;y++){
                p[x][y]=1;
            }
        }
        ptr1++;
    }else if(s1[ptr1]=='p'){
        ptr1++;
        foo((l+r+1)/2,r,u,(d+u-1)/2);
        foo(l,(l+r-1)/2,u,(d+u-1)/2);
        foo(l,(l+r-1)/2,(d+u+1)/2,d);
        foo((l+r+1)/2,r,(d+u+1)/2,d);
    }else{
        ptr1++;
    }
    return 0;
}


int calc(){
    int i,j,ans=0;
    for(i=0;i<32;i++){
        for(j=0;j<32;j++){
            if(p[i][j])ans++;
        }
    }
    return ans;
}

int clr(){
    int i,j;
    for(i=0;i<32;i++){
        for(j=0;j<32;j++){
            p[i][j]=0;
        }
    }
}
int main()
{
    int n, i, j;

    cin >> n;
    for(i=0;i<n;i++){
        cin >> s1;
        len1=s1.length();
        ptr1=0;
        foo(0,31,0,31);

        cin >> s1;
        len1=s1.length();
        ptr1=0;
        foo(0,31,0,31);

        cout << "There are "<< calc() <<" black pixels." << endl;
        clr();
    }
    return 0;
}