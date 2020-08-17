#include <cstdio>
#include <ctime>
#include <cstdlib>

int main()
{
int i,i2;
int d_wzorca;
int d_tekstu;
int ile;
char *tab_wzorzec;
char *tab_tekst;
FILE *plik, *plik2;
srand(time(NULL));

char lex[]={'A','a'}; //Jakie znaki maja byc we wzorze
int r_wzoru=sizeof(lex);
char lex2[]={'B', 'b', 'A', 'a'} ; //jakie znaki maja byc w tekscie
int r_tekstu=sizeof(lex2);

printf("Ile porcji danych wejsciowych?: ");
scanf(" %d", &ile);

char napis[100];

for(i2=0; i2<ile; i2++)
{
sprintf(napis, "we%d.txt", i2);
plik=fopen(napis,"w");

printf("%d\n", i2);
d_wzorca=2+rand() % 8;  //dlugosc wzorca mini musi byc 2 max ile chcesz
d_tekstu=d_wzorca + rand()%18; //tesk mini. dlugosc = dlugosc wzorca, max dlugosc zalezy od Ciebie

tab_wzorzec=new char[ d_wzorca ];
tab_tekst=new char[ d_tekstu ];

for(i=0; i<d_wzorca-1; i++)
{
	tab_wzorzec[i]=lex[rand()%r_wzoru];
}
tab_wzorzec[i]='\0';

for(i=0; i<d_tekstu-1; i++)
{
	tab_tekst[i]=lex2[rand()%r_tekstu];
}
tab_tekst[i]='\0';


fprintf(plik,"%s\n", tab_wzorzec);
fprintf(plik,"%s\n", tab_tekst);

delete[] tab_wzorzec;
delete[] tab_tekst;
fclose(plik);

}
system("pause");
return 0;
}
