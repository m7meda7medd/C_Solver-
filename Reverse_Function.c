#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void Reverse(void) ;
void main (void)
{
Reverse() ;
}
void Reverse(void)
{
char*ptr = (char*)calloc(1,sizeof(char)) ;
char entered ;
printf("Enter a Number to Reverse it : ") ;
int i= 0 ;
 while (1)
 {  ptr=(char*)realloc(ptr,sizeof(char)) ;
    fflush(stdin) ; 
    entered = getche() ;
    if (entered !=13) 
        {  
            ptr[i] = entered ; 
        }
    else 
        {
            ptr[i]= '\0';
            if (i==0) 
                printf("Error");  
            break;
        }    
    i++ ;    
 }
 printf("No is %s\n",ptr) ;
 printf("Reversed No is :") ;
for (int j = i-1 ; j>=0 ;j--)
    {
        printf("%c",ptr[j]) ;
    }
printf("\n") ;
free(ptr) ;
}