#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mid(int Xc,int Yc,int r){
    int x,y,p,X,Y;
    x = 0;
    y = r;
    p = 1-r;
    int x2,y2;
    x2 = 0;
    y2 = 2 * r;
    int k = -1;
    while(x<y){
        if (p<0){
            x = x + 1;
            x2 = x2 + 2;
            p = (p + (x2) + 1);

        }
        else{
            x = x + 1;
            y = y - 1;
            x2 = x2 + 2;
            y2 = y2 - 2;
            p = (p + x2 + 1 - y2);


        }
        k++;
        printf("(x%d,y%d) = (%d, %d), 2x = %d, 2y = %d\n", k,k,x + Xc, y + Yc,x2,y2);

    }



}
int main(){
    mid(0,0,10);
    return 0;
}
