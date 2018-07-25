#include <iostream>

using namespace std;




int main()
{
    long long n,m,i,j,t,k,l,b,d;
    long long diff;

    while(cin >> n >> m){
        diff=0;
        for(i=0;i<m;i++){
            cin >> b;
            
            cin >> d;
            for(j=1;j<n;j++){
                cin >> t;
                b-=t;
            }
            //cout << "b=" << b << endl;
            if(b>0){
                if(b!=d){
                    //cout << "diff=" << diff << endl;
                    //cout << "d =" << d << endl;
                    if(b>d)
                        diff-=d;
                    if(b>=10000){
                        diff+=10000;
                    }else if(b>=1000){
                        diff+=1000;
                    }else if(b>=100){
                        diff+=100;
                    }else if(b>=10){
                        diff+=10;
                    }else if(b>=1){
                        diff+=1;
                    }
                }
            }
        }
        cout << diff << endl;
    }

    return 0;
}