/* 200.c
Programmas autors : Arturs Zakis
Prg . veidota 2019. gada 23. novembrii
Versija : 0.0.1
*/

#include <stdio.h>
#include <math.h>

int main()
{
int a; // cikla mainigais

printf ("Ievadi vesalu skaitli:");
scanf ("%d", &a);
printf ("a = %d \n", a);
for (int x = 0; x < 10; x++) 
printf ("x = %d %d \n", x, a + x);
}

