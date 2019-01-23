/**********************************************************
*Name: dweight                                            *
*Purpose: measures the dimensional weight of a box        *
*Date created: 2 Dec 2016                                 *
**********************************************************/
#include <stdio.h>

int main(void)  //start of main function
{
  int height = 85, lenght = 40, width =84; //initialisation of box dimension
  int volume = height * lenght * width;  //calculationn of volution
  printf("The dimensional is %dx%dx%d\n", height, lenght, width); // print out the dimension
  printf("The volume is %d\n",volume );  // print out the volume
  printf("The dimensional weight is %d\n",(volume + 165) / 166 ); // prints out the dimensional weight
  return 0;  // returns 0 to processor to end program.
}
