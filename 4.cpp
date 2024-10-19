#include<stdio.h>
#include<math.h>
#define PI 3.14
typedef long long ll; 
int main()
{
  int x1,y1,x2,y2;
  scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
  double khoangcach=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  printf("%.2lf",khoangcach);
  return 0;
}