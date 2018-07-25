#include <iostream>
#include <iomanip>
using namespace std;

double ans[101][10]={0};

int calc(int k){
    double a[101][10]={0};
    int i,j;
    for(j=0;j<=k;j++)
        a[1][j]=double(100)/(k+1);
    for(i=1;i<100;i++){
        for(j=0;j<=k;j++){
            if(j>0)
                a[i+1][j-1] +=  a[i][j]/(k+1);
            if(true)
                a[i+1][j]   +=  a[i][j]/(k+1);
            if(j<k)
                a[i+1][j+1] +=  a[i][j]/(k+1);
        }
    }
    for(i=1;i<101;i++){
        for(j=0;j<=k;j++)
            ans[i][k]+=a[i][j];
    }
}

int main()
{
    int i,j,k,n,m;

    for(j=0;j<10;j++)
        calc(j);

    while(cin >> k){
        cin >> n;
        cout << setprecision(5) << fixed  << ans[n][k] << "\n";
    }
    return 0;
}