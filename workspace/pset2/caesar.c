#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

#define NUM_LETRAS 26 

int main(int argc, string argv[ ])
{
    if(argc == 2)
    {
         int k = atoi(argv[1]);
         if(k > 0)
        {
            printf("Escreva a frase a ser criptografada:\n");
            string p = GetString();
            for (int i = 0, n = strlen(p); i < n; i++)
            {
               if(isupper(p[i]))
               {
                   p[i] = ((p[i] - 'A' + k) % NUM_LETRAS) + 'A';
               }
               else if(islower(p[i]))
               { 
                   p[i] = ((p[i] - 'a' + k) % NUM_LETRAS) + 'a';
               }
            }
            printf("%s\n", p);
        }    
    }
    else
    {
        printf("ERROR\n");
        return 1;
    }
}
