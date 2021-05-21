#include <stdio.h>
int main(){
printf("hellodd, world!\n");
int x,y;

int leftBitCount(int x) {
  int a,b,c,d,e,f,g,h,i,j;
  a=!((x>>16)+1); //if x have 16 consecutive 1's than a=1 otherwise 0;
  b=8+(a<<4); //b=8 or 24
  c=!((x>>b)+1); // if x have 8 or 24 consecutive 1's than c=1 otherwise 0;
  d=4+(c<<3)+(a<<4);
  e=!((x>>d)+1);
  f=2+(e<<2)+(c<<3)+(a<<4);
  g=!((x>>f)+1);
  h=1+(g<<1)+(e<<2)+(c<<3)+(a<<4);
  i=!((x>>h)+1);
  j=i+(g<<1)+(e<<2)+(c<<3)+(a<<4);
  return j;
}
printf("%d\n",leftBitCount(0xFFF0F0F0));
printf("%d\n",leftBitCount(-1));
return 0;
}
