#include <stdio.h>

int main()
{
    int i;
   // int N = 27;
    int aBet[27];
    int k = 65;
    
    for(i = 0; i < 26; i++)
    {
        aBet[i] = k+i;
        printf("%c", (char)(aBet[i]));
    }
    
    return 0;
}
