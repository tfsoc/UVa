#include <iostream>
#include <cmath>
using namespace std;
/*
 Function exp-by-squaring(x, n )
    if n < 0  then return exp-by-squaring(1 / x, - n );
    else if n = 0  then return  1;
    else if n = 1  then return  x ;
    else if n is even  then return exp-by-squaring(x * x,  n / 2);
    else if n is odd  then return x * exp-by-squaring(x * x, (n - 1) / 2).
*/
long long int ebs(long long int x, long long int n)
{
    if(n==0) return 1;
    if(n==1) return x;
    if(n%2==0) return ebs(x*x%1000000007,n/2)%1000000007;
    if(n%2==1) return (x*(ebs(x*x%1000000007,(n-1)/2)))%1000000007;
}
int main()
{
    int k,t;
    long long int n;
    long long int x;
    cin >> t;

    for(k=1;k<=t;k++)
    {
        cin >> n;
        cout << "Case #"<<k<<": "<<(n*ebs(2,n-1))%1000000007<< endl;
    }
    return 0;
}
