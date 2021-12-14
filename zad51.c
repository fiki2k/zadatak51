// Program treba izracunat povrsinu i opseg kruga.

#include <stdio.h>
int main()
{
   int radijus;
   float PI_VALUE=3.14, pov_kruga, opseg_kruga;

   //Unesi radijus kruga
   printf("\nUnesi radijus kruga: ");
   //Storing the user input into variable circle_radius
   scanf("%d",&radijus);

   //Izracunaj povrsinu kruga
   pov_kruga = PI_VALUE * radijus * radijus;
   printf("\nPovrsina kruga je: %f",pov_kruga);

   //Izracunaj opseg kruga
   opseg_kruga = 2 * PI_VALUE * radijus;
   printf("\nOpseg kruga je: %f",opseg_kruga);

   return(0);
}
