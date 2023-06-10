#include <stdio.h>

int main(void)
{
 char stringN[20] = "Cricket";
 char stringC[20] = "Australia";
 char temp[25] ;


 printf("\t\t\tBefore swapping\n");
 printf("\t\t\t---------------\n\n");
 printf("\t\t\tstringN = %s\n", stringN);
 printf("\t\t\tstringC = %s\n\n", stringC);

 strcpy(temp,stringN);
 strcpy(stringN,stringC);
 strcpy(stringC,temp);

 printf("\t\t\tAfter swapping\n");
 printf("\t\t\t---------------\n\n");
 printf("\t\t\tstringN = %s\n", stringN);
 printf("\t\t\tstringC = %s\n", stringC);


}
