#include <iostream>

using namespace std;

int main()
{
    int t,h,j;
    int overlap;
    int area;
    int n,k,i,x1,x2,y1,y2;
    int pole[200][200];
    cin >> t;

    for(h=0;h<t;h++)
    {
        for(i=0;i<200;i++)
            for(j=0;j<200;j++)
                pole[i][j]=0;
        cin >> n;
        area=0;
        for(k=0;k<n;k++){
            overlap=0;
            cin >> x1>> y1>> x2>> y2;
            x1+=100;
            y1+=100;
            x2+=100;
            y2+=100;

            for(i=x1;i<x2;i++)
                for(j=y1;j<y2;j++){
                    if(pole[i][j]==1)
                        overlap=1;
                }
            if(overlap!=1)
            {
                for(i=x1;i<x2;i++)
                    for(j=y1;j<y2;j++)
                        pole[i][j]=1;
                area+=(x2-x1)*(y2-y1);
            }

//            for(i=x1;i<x2;i++)
//                for(j=y1;j<y2;j++)
//                    if(pole[i][j]!=0)
//                        area+=1;
        }
        cout << "Case "<< h+1 << ": " << area << endl;
    }


    return 0;
}
