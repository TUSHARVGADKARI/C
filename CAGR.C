#include<stdio.h>

int main()

{

  double CAGR, FV, PV, N;

  printf("Please enter FV, PV, N numbers");

  scanf("%lf%lf%lf",&a,&b,&c);

  CAGR=((FV/PV)^(1/N))-1;

  printf("\nCAGR is %f", CAGR);

  return 0;

}
