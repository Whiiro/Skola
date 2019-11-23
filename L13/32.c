/* 32.c
Programmas autors : Arturs Zakis
Prg . veidota 2019. gada 23. novembrii
Versija : 0.0.1
*/

/* 32.c Programma faktoriaalu apreekjiniem
faktoriaalus reekjina veselu skaitlju rindaam
skaitlju faktoriaals ljoti strauji aug */
# include <stdio.h>

int main()
{
int num , i; // num -- skaitlis
long int reizinajums = 1; // faktorials no 0! = 1

printf("Ievadam veselu skaitli: ");
scanf("%d", &num);

for ( i=1 ; i<=num ; i++ )
{
reizinajums = reizinajums * i;
} // Izvadee ir kljuuda. Labo to!
printf("Skaitlja %d faktorials ir: %ld \n", num, reizinajums);
}
