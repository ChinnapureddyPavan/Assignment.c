#include <stdio.h>
void main()
{
 int no;
 int *ptr=&no;

 printf("\nEnter a no. : ");
 scanf("%d",&no);
 printf("\nSquare\t= %d",(*ptr)*(*ptr));
 printf("\nCube\t= %d",(*ptr)*(*ptr)*(*ptr));

}
