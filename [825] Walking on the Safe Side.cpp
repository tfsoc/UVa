#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int T,m,n,i,j,k;
    int a[101][101];
    string str;
    char * pch;
    char * cstr;
    cin >> T;
    while(T--){
        memset(a, -1, 101*101*(sizeof(int)));
        cin >> n >> m;

        for(i=0;i<n;i++)
            a[i][0]=1;
        for(j=0;j<m;j++)
            a[0][j]=1;

        getline(cin,str);
        for(i=0;i<n;i++){
            getline(cin,str);
            cstr = new char [str.length()+1];
            strcpy(cstr, str.c_str());

            pch = strtok(cstr," ,.-");
            pch = strtok(NULL, " ,.-");
            while (pch != NULL){
                //printf ("%d\n",atoi(pch));
                a[i][atoi(pch)-1]=0;
                //cout << "a i " << atoi(pch) << endl;
                pch = strtok(NULL, " ,.-");
            }
        }

        for(i=1;i<n;i++)
            if(a[i][0]!=0)
                a[i][0]=a[i-1][0];
        for(j=1;j<m;j++)
            if(a[0][j]!=0)
                a[0][j]=a[0][j-1];


        for(i=1;i<n;i++){
            for(j=1;j<m;j++){
                if(a[i][j]!=0){
                    if(a[i-1][j]!=0 || a[i][j-1]!=0)
                        a[i][j]=a[i-1][j]+a[i][j-1];
                    else
                        a[i][j]=0;
                }
            }
        }
//        cout << endl;
//        for(i=0;i<n;i++){
//            for(j=0;j<m;j++){
//                cout << a[i][j] << " ";
//            }
//            cout << endl;
//        }
        cout << a[n-1][m-1] << endl;
        if(T)cout << endl;
    }

    return 0;
}