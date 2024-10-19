#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()  
{
    int a1,b1,c1,a2,b2,c2;
    float x,y;
    scanf("%d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2);
    int D=a1*b2-a2*b1;
    int Dx=c1*b2-c2*b1;
    int Dy=b1*c2-b2*c1;
    if(D==0){
        if(Dx==0 && Dy==0) printf("pt vo so no");
        else printf("pt vo no");
    }
    else{
        x=1.0*D/Dx;
        y=1.0*D/Dy;
        printf("(%.1f,%.1f)",x,y);}
        return 0;
}