#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

long long pos[100000001];
long long val[10000];
long long mv[1000];

int main()
{
    long long i,ii,j,k,jj;
    long long a,c,m,x,q,n;
    long long cycle;

    long long arr[1000];
    long long curr, prev, ptr;

  ofstream myfile;
  myfile.open ("example.txt");

    while(cin >> a >> c >> m >> x >> q >> n){
        for(i=0;i<1000;i++)arr[i]=0;

        prev=x;
        arr[x]++;

        val[0]=x;
        cycle=1000;

        for(i=1;i<n;i++){
            curr=(a*prev+c)%m;
            if(arr[curr]!=0){
                for(ii=0;ii<i;ii++)if(val[ii]==curr)break;

                cycle=i-ii;
//                for(j=ii;j<i;j++){
//                    arr[val[j]]=n/cycle;
//                }
//                for(jj=0;jj<n%cycle;jj++){
//                    arr[val[jj+ii]]+=1;
//                }
                //cout << "cycle = " << cycle << endl;
                for(j=ii;j<ii+cycle;j++){
                    arr[val[j]]+=(n-i)/cycle;
                }
                for(jj=0;jj<n%cycle;jj++){
                    arr[val[jj+ii]]+=1;
                }

                break;
            }
            val[i]=curr;
            arr[curr]++;
            prev=curr;
        }

        k=n;
        ptr=-1;
        long long p=1;
        long long tot=0;
        long long lst_p=1;
        while(k>0){
            ptr++;
            while(arr[ptr]==0)ptr++;
            k-=arr[ptr];

            val[p]=ptr;
            mv[p]=tot;
            tot+=arr[ptr];
            //cout << "mv=" << mv[p] << " val=" << val[p] << endl;
            p++;

        }
        lst_p=p;
        mv[p]=tot;

        for(i=0;i<q;i++){
            cin >> k;
            k--;
            p=1;
            while(mv[p]<k && p<lst_p)p++;
            //cout << "curr last_p = " << lst_p << endl;
            //cout << "curr p = " << p << endl;
            cout << val[p-1] << endl;
            //myfile<< val[p] << endl;
        }

    }
    myfile.close();
    return 0;
}