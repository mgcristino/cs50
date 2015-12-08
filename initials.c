#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc,string argv[])
{
    string s = GetString();
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {       
        if (i == 0)
        {
            printf("%c",toupper(s[i]));
        } 
        else if (s[i] == ' ' && i+1 < n)
        {
            printf("%c",toupper(s[i+1]));
        }
    }
    printf("\n");
}
