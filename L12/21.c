/* 21. c
Programmas autors : Artūrs Zaķis
Prg . veidota 2019. gada 23. novembrii
Versija : 0.0.1
Programma paraada iespeejamo datu tipa paarpluudi */

#include <stdio.h>
#include <limits.h>
int main()
{
int a = 50000; // 50 ,000
int b = 1000000; // 1 ,000 ,000
long int c = (long int)a * (long int)b; // kaads ir sagaidaamais rezultaats ?

printf("int datu tipa izmers ir: %ld baiti \n", sizeof(int) );
printf("Apreekjinam a un b reizinaajumu :\n" );
printf("a = %d, b = %d \n", a, b);
printf("c = a * b = %d * %d = %ld \n", a,b,c ); // rezultaats uz ekrana ?
}
