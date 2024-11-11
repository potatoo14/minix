#include <stdio.h>
#include "pm.h" // provides global variables such as m_in

int do_mdc(void) {
   int n1 = m_in.m1_i1; // set n1 to the first integer of message
   int n2 = m_in.m1_i2; // set n2 to the second integer
   int i, mdc;
   printf("\n\nOs valores foram %d e %d\n\n", n1, n2);

   for(i = 1; i <= n1 && i <= n2; i++) {
       printf("\nO valor de i = %d\n", i);
       if(n1 % i == 0 && n2 % i == 0) {
           mdc = i;
       }
   }

   return mdc;
}
