/* Arturs Zakis 23.11.2019.*/
/* 35.c Masiva izveidoshana , aizpildishana un nolasishana */
# include <stdio.h>
# include <math.h>

int main()
{
float mas[10]; // izveido masiivu ar 10 elementiem
int i;

for(i=0; i<10; i++) // masiiva elementu inicializaacija
{
mas[i] = i/10.0; // tekoshais elements tiek noteikts kaa x*x
}
/* paraadit "masiiva" saturu */
for (i=0; i<10; i++)
printf ("%d %d \n", i, mas[i]);
}
