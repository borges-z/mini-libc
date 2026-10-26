#ifndef FUNCTIONS_H
#define FUNCTIONS_H
size_t len(char *string);
void copy(char *s1, char *s2);
int cmp(char *s1, char *s2);
void *memocopy(char *s1, char *s2, int tamanho);
void *memoaloc(char *s1, int x, int tamanho);
#endif