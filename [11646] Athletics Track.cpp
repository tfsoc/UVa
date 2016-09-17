#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t=1;
    double a,b,c;
    char tmp;
    cout.precision(10);
    cout.setf( std::ios::fixed, std:: ios::floatfield );
    while(cin >> a >>tmp >>b){
        c=200/(sqrt(a*a+b*b)*atan(b/a)+a);
        cout << "Case " << t++ << ": " <<a*c << " " << b*c <<endl;
    }
    return 0;
}
