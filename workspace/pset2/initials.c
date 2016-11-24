#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main()
{
    
    
    string name = GetString();
    if(islower(name[0]))
        printf("%c", toupper(name[0]));
    else
        printf("%c", name[0]);
    
    
    for(int i = 0, n = strlen(name); i < n; i++ )
    {
        
        if (name[i] == ' ')
        {
            if (islower(name[i+1]))
            
                printf("%c", toupper(name[i+1]));
            
            else 
           
                printf("%c", name[i+1]);
       
        }
        
        
    }
    
    
    
}