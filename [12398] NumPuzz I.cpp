#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int i,j,t,k;
    int a[3][3];
    t=1;

    while(std::getline (std::cin,s)){
        //std::cout << "+" << s << "+\n";
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                a[i][j] = 0 ;
            }
        }

        int len=s.length();
        for(i=0;i<len;i++){
            int curr = (char)s[i]-'a';
            a[curr/3][curr%3]++;
            if(curr/3>0)a[curr/3-1][curr%3]++;
            if(curr/3<2)a[curr/3+1][curr%3]++;

            if(curr%3<2)a[curr/3][curr%3+1]++;
            if(curr%3>0)a[curr/3][curr%3-1]++;
        }

        cout << "Case #" << t++ << ":\n";
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout << a[i][j]%10 << " ";
            }
            cout << "\n";
        }
        cin.clear();
    }
    return 0;
}