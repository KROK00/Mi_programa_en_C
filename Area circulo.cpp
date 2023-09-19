#include<stdio.h>
int main (void)
{ 
float Area,pi=3.1416,radio;
printf ("radio: ");
scanf ("%f", &radio);
Area= pi*radio*radio;
printf ("El area del circulo de radio %10.3f es %10.3f",radio,Area);
} 
