//WRITE A C PROGRAM TO ACCESS ELEMENTS OF A STRING USING POINTER
#include<stdio.h>
 int main()
 {
 char str[20]="Geeks";
 // pointer variable which stores
 //the starting address of
 //the character array str
 char*ptr=str;

 //while loop will run till
 //the character value is not
 //equal to null character
 while(*ptr !='\0')
 {
 printf("%c",*ptr);
 ptr++;
 }
 return 0;
 }
