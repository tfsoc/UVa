#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>

using namespace std;

int A[51][51];
vector<int> S;
int m;

void DFS(int v){
    int i;
    for(i=0;i<m;i++){
        while(A[v][i]){
            A[v][i]--;
            A[i][v]--;
            DFS(i);
        }
    }
    S.push_back(v);
}

int main()
{
    int T,N;
    int caseNumber;
    int i,j;
    int sum;
    bool canBeEulerCycle;


    cin >> T;
    for(caseNumber=1;caseNumber<=T;caseNumber++){


        S.clear();
        memset(A, 0, 2500*(sizeof(int)));
        //memset(S, 0, 50*(sizeof(int)));
        m=0;
        canBeEulerCycle=true;

        cin >> N;
        for(;N>0;N--){
            cin >> i >> j;

            if(i>m)m=i;
            if(j>m)m=j;
            i--;
            j--;
            A[i][j]++;
            A[j][i]++;
        }
//        for(i=0;i<m;i++){
//            for(j=0;j<m;j++)
//                cout << A[i][j] <<" ";
//            cout << endl;
//        }
        //cout << endl<<m-1<<endl;


        for(i=0;i<m;i++){
            sum=0;
            for(j=0;j<m;j++)
                sum+=A[i][j];
            if(sum%2==1){
                canBeEulerCycle=false;
                break;
            }
        }

        cout << "Case #" << caseNumber << endl;


        if(canBeEulerCycle){
            DFS(m-1);
            for(i = 0; i+1 < S.size(); i++){
                cout << S[i]+1 << " " << S[i+1]+1 << endl;
            }
            //cout << "length = " << S.size() << endl;
        }else{
            cout<< "some beads may be lost"<<endl;
        }

        cout << endl;
    }
    return 0;
}