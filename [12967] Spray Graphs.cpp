#include <iostream>

using namespace std;


long long comb[31][31]={0};

int main()
{
    long long i,j,k,l,n,t;


    ///Calcualting Pascal's triangle
    for(i=0;i<=30;i++){
        for(j=0;j<=i;j++){
            comb[i][j]=1;
        }
    }
    for(i=2;i<=30;i++){
        for(j=1;j<i;j++){
            comb[i][j]=comb[i-1][j-1]+comb[i-1][j];
        }
    }

//    for(i=0;i<=7;i++){
//        for(j=0;j<=i;j++){
//            cout << comb[i][j] << "   ";
//        }
//        cout << endl;
//    }
    //other solution is F[n]=F[n-1]*2+4;
    cin >> t;
    while(t--){
        cin >> n;
        n--;
        long long ans=1;
        for(i=n-1;i>=1;i--){
            ans+=comb[n][i];
            //cout << "C " << n << " po " << i  << " = " << comb[n][i] << endl;
        }
        ans*=4;
        if(n!=0)
            cout << ans << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}