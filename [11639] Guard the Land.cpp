#include <iostream>
using namespace std;



int main() {
    int x1,x2,x3,x4,y1,y2,y3,y4;
    int g1,g2,c;
    int t, cases = 1;
    int sx,ix,sy,iy;
    cin >>t;
    while(t--) {
        cin >> x1 >>y1 >>x2 >> y2;
        cin >> x3 >>y3 >>x4 >> y4;

        sx = max(x1, x3); sy = max(y1, y3);
        ix = min(x2, x4); iy = min(y2, y4);


//        int A = (b.x-a.x)*(b.y-a.y);
//        int B = (d.x-c.x)*(d.y-c.y);
//        int C = (i-k)*(j-l);
        g1= (x2-x1)*(y2-y1);
        g2= (x4-x3)*(y4-y3);
        c = (sx-ix)*(sy-iy);
        cout << "Night " << cases++ << ": ";
        if(sx >= ix || sy >= iy) {
            cout << "0 " << g1+g2 <<" " << 10000-g1-g2 << endl;
        } else {
            cout << c <<" " << g1+g2-c-c << " "<<10000-g1-g2+c << endl;
        }
    }
    return 0;
}
