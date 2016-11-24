#include <stdio.h>
#include <cs50.h> 

int main(void)
{
    printf("How long do you shower?\n");
    int total = GetInt();
    int water = total*12;
    printf("You have used %i bottles of water in that shower. OMG\n", water);
    
}