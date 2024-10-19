#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int x,y,k;
    scanf("%d %d\n",&x,&y);
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
    if(x<y){
        if(i%x==0) printf("%d ",i);
        else if(i%y==0) printf("%d ",i);
    }
    else if(x>y){
        if(i%y==0) printf("%d ",i);
        else if(i%x==0) printf("%d ",i);
    }
    }
    return 0;

}