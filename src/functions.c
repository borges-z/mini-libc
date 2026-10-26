#include <stddef.h>
#include <stdio.h>
#include "functions.h"

size_t len(char *string){
    int contador = 0;
    while((*string)!='\0'){
        contador++;
        *(string++);
    }
    return contador;
}

void copy(char *s1, char *s2){
    do{
        *s2 = *s1; 
        s1++;
        s2++;
    } while (*(s1) != '\0');
    *s2 = '\0';
    
};

int cmp(char *s1, char *s2){
    size_t t1 = len(s1);
    size_t t2 = len(s2);
    if(t1 != t2) return 1;
    do
    {
        if(*s1 != *s2) return 0;
        s1++;
        s2++;
    } while ((*s1 != '\0') || (*s2 != '\0'));
    return 0;
    
}

void *memocopy(char *s1, char *s2, int tamanho){
    // A implementar
}

void *memoaloc(char *s1, int x, int tamanho){
    // A implementar
}