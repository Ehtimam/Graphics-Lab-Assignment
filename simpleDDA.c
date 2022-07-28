#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void DDAcase1(int Xstart, int Ystart, int Xend, int Yend) {
    float x,y,m;

    m = (Yend-Ystart) / (Xend-Xstart);
    int i = abs(m);
    if ((abs(m)<=1) && (Xstart>Xend)){
        int temp1,temp2;
        temp1 = Xstart;
        Xstart = Xend;
        Xend = temp1;
        temp2 = Ystart;
        Ystart = Yend;
        Yend = temp2;

    }
    if ((abs(m)<=1)){
        y=Ystart;
        x=Xstart+1;
        while(x<=(Xend-1)){
            y = y + m;
            x = x + 1;
            printf("\nValue of y = %.2f  \nValue of x = %f",y,x);
        }

    }

}
void DDAcase2(int Xstart, int Ystart, int Xend, int Yend){
    float x,y,m;

    m = (Yend-Ystart) / (Xend-Xstart);
    int i = abs(m);
    if ((abs(m)>=1) && (Ystart>Yend)){
        int temp1,temp2;
        temp1 = Xstart;
        Xstart = Xend;
        Xend = temp1;
        temp2 = Ystart;
        Ystart = Yend;
        Yend = temp2;

    }
     if ((abs(m)>=1)){
            m = 1/m;
            y=Ystart+1;
            x=Xstart;
            while(y<=(Yend-1)){
                x = x + m;
                y = y + 1;
                printf("\nValue of Y = %.2f  \nValue of X = %.f",y,x);
        }

    }

}
int main(){
    int cases;
    float Xstart,Xend,Ystart,Yend;
    printf("Enter case :");
    scanf("%d",&cases);
    printf("Enter the value of Xstart and Ystart : ");
    scanf("%f%f",&Xstart,&Ystart);
    printf("Enter the value of Xend and Yend: ");
    scanf("%f%f",&Xend,&Yend);
    if (cases==1){
        DDAcase1(Xstart,Ystart,Xend,Yend);

    }
    else if(cases==(2)){
        DDAcase2(Xstart,Ystart,Xend,Yend);
    }
    return 0;

}

