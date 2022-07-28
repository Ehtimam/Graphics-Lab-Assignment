#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void B_circle_algo(int Xc, int Yc, int r){
    int x,y,p,k;
    x = 0;
    y = r;
    p = 1-r;
    k = 0;
    while(x < y){
         x++;
         if (p < 0){
              p += 2 * x + 1;
         }
         else {
             y--;
             p += 2 * (x - y) + 1;
       }
       k++;
       printf("(x%d,y%d) = (%d, %d)\n", k,k,Xc+x,Yc+y);

    }

}
int main(){
    B_circle_algo(50,50,30);
    return 0;

}

