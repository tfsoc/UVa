
#include <cstdio>
 
using namespace std;
 
char tab[1000005];
int n, a, b, x, t;
bool q;
 
int main()
{
    t=1;
    while (scanf("%s %d", tab, &n) == 2)
    {
        printf("Case %d:\n", t);
        ++t;
        while (n--)
        {
            scanf("%d%d", &a, &b);
            if (b < a)
            {
                x = a;
                a = b;
                b = x;
            }
            q = true;
            for (int i = a; i < b; ++i)
                if (tab[i] != tab[i + 1])
                    q = false;
            if (q)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}