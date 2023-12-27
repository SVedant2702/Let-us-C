/*paper of size A0 has dimenssions 1189mm*841mm.Each subsequesnt size A(n) is defined as A(n-1)
cut in half, parallel to its shorter sides. Thus, paper of size A! would have dimension 841mm*594mm
WAP to calculate and print paper sizes A0,A1,A2.....A8*/

#include<stdio.h>
#include<math.h>

int main()
{
    int i, w=841, h=1189, t;
     for(i=0;i<9;i++)
     {
         printf("\n A%d: %d x %d", i, w, h);
         t = h;
         h = w;
        w = t/2;
     }
     return (0);
}