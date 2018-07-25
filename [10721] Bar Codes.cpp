#include <iostream>

using namespace std;

long long pascalTriangle[51][51]={0};

bool solvable(int n, int k,int m){
    if(n<=0 || k<=0 || m<=0)return 0;
    if(n%m!=0 && n/m==k)return 0;
    if(n/m>k)return 0;
    return 1;
}

long long foo(int n, int k,int m){
    if(!solvable(n,k,m))return 0;
    //check if exists x_1=x_2 so that x_1>m and sum of x_1...x_k=n
    if(solvable(n-2*m,k-2,m)){
        long long ans=0;
        //sum answers for all possible x_k values in smaller scope
        for(int i=1;i<=m;i++)
            ans+=foo(n-i,k-1,m);
        return ans;
    }else
        return pascalTriangle[n-1][k-1] - ((n-m-1>=0) ? k*pascalTriangle[n-m-1][k-1] : 0);
}

int main()
{
    int n,k,m;
    int i,j;
    for(i=0;i<51;i++){
        pascalTriangle[i][0]=1;
        pascalTriangle[i][i]=1;
    }
    for(i=2;i<51;i++){
        for(j=1;j<i;j++){
            pascalTriangle[i][j]=pascalTriangle[i-1][j-1]+pascalTriangle[i-1][j];
        }
    }

    while(cin >> n >> k >> m){
        cout << foo(n,k,m) << endl;
    }
    return 0;
}