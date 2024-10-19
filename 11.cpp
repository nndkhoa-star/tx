#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int s=0;
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=sqrt(i);j++)
        {
            if(i%j==0){
        s+=j;
        if(j!=i/j) s+=i/j;
        if(s==i) printf("%d",i);
            }
        }
    }
    return 0;
}