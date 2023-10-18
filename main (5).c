/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

https://www.onlinegdb.com/myfiles#include <stdio.h>

#include <stdio.h>
#include<string.h>
int main() {  
    char words[10000];  
    printf("Enter the words"); 
    gets(words);  
    char substring[100]; 
    printf("Enter the substring");  
    gets(substring);  
    int words_size=strlen(words); 
    int substr_size=strlen(substring);  
    int lamp=0;  int i,k;
    for (i=0;i<=words_size-substr_size;i++){     
        for(k=0;substring[k]!='\0';k++){        
            if (words[i+k]!=substring[k]){              break;   
            }     
            }     
            if (substring[k]=='\0'){         
               printf("Found substring at position %d\n",i);       
               lamp=1;             
               }      
               if (!lamp){        
                   printf("Not found\n");}
    }

    return 0;
}