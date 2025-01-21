#include <stdio.h>

int main() {
    
    int i,j,len = 0;
    char a[50];
    
    printf("Enter any string: ");
    scanf("%s",&a);
    
    for(i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
    
    int isPal = 0;
    for (i = 0, j = len - 1; i < len && j >= 0; i++, j--) 
    {
        if(a[i] != a[j])
        {
            isPal = 1;
        }
    }

    
    if(isPal == 1)
    {
        printf("The given string is not Palindrome");
    }
    else
    {
         printf("The given string is Palindrome");
    }

    return 0;
}
