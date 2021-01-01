// Code written on January 1, 2021
// by Manav Garg
//This program implements a boolean function in C

#include <stdio.h>

//The  main function
int main(void)
{
//8 bits = 1 byte

//unsigned char takes input as 1 byte

unsigned char  A=0,B=0,C=0,D=1;//inputs in hex	
unsigned char one = 0x01;//used for displaying the output in bit
unsigned char f,kmap_f;//outputs

f = ((A)|(B)|(C)|(D))&((A)|(B)|(~C)|(D))&((~A)|(B)|(~C)|(D))&((A)|(~B)|(~C)|(D))&((~A)|(B)|(C)|(~D))&((A)|(B)|(C)|(~D));//Boolean function for f in POS form

kmap_f = ((A)|(B)|(C))&((A)|(~C)|(D))&((B)|(~C)|(D))&((B)|(C)|(~D));//kmap function for f in POS form

printf("%x\n",one&f);//Output f
printf("%x\n",one&kmap_f);//Output kmap f
return 0;
}
