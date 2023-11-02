#include<stdio.h>
#include<math.h>
float area(float);
float vol(float);
int main()
{
  float r,aa,vv;
  printf("enter radius");
  scanf("%f",&r);
  aa= area(r);
  vv= vol(r);
  printf("the area is %f & volume is %f",aa,vv);
}
float area(float a)
{
  float ar;
  ar=4*3.142*pow(a,2);
  return(ar);
}
float vol(float b)
{
  float vr;
  vr=4/3*3.142*pow(b,3);
  return(vr);
}