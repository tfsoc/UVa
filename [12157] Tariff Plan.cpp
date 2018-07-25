#include <cstdio>
 
using namespace std;
 
int a, n, nr, x, y;
 
int main()
{
    scanf("%d", &a);
    for (int t = 1; t <= a; ++t)
    {
        scanf("%d", &n);
        x=0;
        y=0;
        while (n--)
        {
            scanf("%d", &nr);
            x += (nr / 30) * 10 + 10;
            y += (nr / 60) * 15 + 15;
        }
        printf("Case %d: ", t);
        if (x < y)
            printf("Mile %d\n", x);
        else if (x == y)
            printf("Mile ");
        if (y <= x)
            printf("Juice %d\n", y);
    }
    return 0;
}