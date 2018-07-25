#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    long long n,m,i,j,t,k,l,b,d;
    long long diff;
    char c;
    double a,total,taken,bokA,bokB;
    int t0;

    int side;


    cin >> t;
    for(t0=0;t0<t;t0++){
        taken=0;bokA=0;bokB=0;
        side=0;
        cin >> n;
        for(i=0;i<n;i++){
            cin >> c;
            cin >> a;
            if(c=='C'){
                side++;
                if(side==1)bokA+=a;
                else if(side==2){
                    bokA+=a;bokB+=a;
                }else if(side==3)bokB+=a;
                taken+=a*a;
            }else if(c=='S'){
                if(side==1)bokA+=a;
                else if(side==2)bokB+=a;
                taken +=a*a;
            }else if(c=='T'){
                if(side==1)bokA+=a;
                else if(side==2)bokB+=a;
                taken +=a*a*sqrt(3.0)/4;
            }
        }
        total=bokA*bokB-taken;
        cout << std::setprecision(4) <<  std::fixed << total << endl;
    }

    return 0;
}