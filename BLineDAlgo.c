#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x,y,Yend,Ystart,Xend,Xstart,m,delX,delY,p,sum;
    printf("Enter the value of Xstart and Ystart : ");
    scanf("%f%f",&Xstart,&Ystart);
    printf("Enter the value of Xend and Yend: ");
    scanf("%f%f",&Xend,&Yend);
    m = (Yend-Ystart) / (Xend-Xstart);
    x = Xstart;
    y = Ystart;
    delX = Xend - Xstart;
    delY = Yend - Ystart;
    sum = ((2*delY)-(2*delX));
    p = ((2*delY)-delX);
    int k;
    for(k=0;k<delX;k++){
            if(p<0){
                x = x+1;
                p = (p + (2*delY));
            }
            else{
                x = x+1;
                y = y+1;
                p = (p + sum);
            }
            printf("x = %.f, y = %.f\n",x,y);
    }

}
