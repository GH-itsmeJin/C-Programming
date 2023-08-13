#include<stdio.h>
#include<stdlib.h>

void alphabet(int cl, int sl);

void alphabet(int cl, int sl)
{
    printf("Capital Letters: \n");
    for(cl=65; cl<=90; cl++)
    {
        printf("%c \t", cl);
    }
    printf("\n");

    printf("Smallest Letters: \n");
    for(sl=97; sl<=122; sl++)
    {
        printf("%c \t", sl);
    }
    printf("\n");
}

void main()
{
    int cl,sl;
    
    printf("English Alphabet \n");

    alphabet(cl, sl);
}
