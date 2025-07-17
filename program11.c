//11)Write a C program that takes two strings from the user and concatenates them using strcat(). Display the concatenated string and its length using strlen(). 
#include<stdio.h>
#include<string.h>

int main()
{
    char string1[100], string2[100]; 
    
    printf("Enter string1 and string2:");
    scanf("%s %s", string1, string2);
    
    strcat(string1, string2); 
    
    printf("Concatenated string: %s\n", string1);
    printf("Length: %zu\n", strlen(string1));
	  return 0; 
}


