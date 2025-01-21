#include <stdio.h>

int main() {
    int i, j, count;
    char a[50];
    int temp[50] = {0};  
    
    printf("Enter any string: ");
    scanf("%s", a);  
    
    printf("Character frequencies:\n");
    for(i = 0; a[i] != '\0'; i++) 
    {

        if(temp[a[i]] == 1)
            continue;
            
        count = 1;
        for(j = i + 1; a[j] != '\0'; j++) 
        {
            if(a[i] == a[j]) 
            {
                count++;
            }
        }
        
        temp[a[i]] = 1;
        printf("%c => %d\n", a[i], count);
    }
    
    return 0;
}
