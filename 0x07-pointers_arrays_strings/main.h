<<<<<<< HEAD:0x07-pointers_arrays_strings/main.h
#ifndef FILE_HOLBERTON
#define FILE_HOLBERTON

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

=======
#ifndef HOLBERTON_H
#define HOLBERTON_H
extern int _putchar(char c);
extern int _isupper(int c);
extern int _isdigit(int c);
extern int mul(int a, int b);
extern void print_numbers(void);
extern void print_most_numbers(void);
extern void more_numbers(void);
extern void print_line(int n);
extern void print_diagonal(int n);
extern void print_square(int size);
extern void print_triangle(int size);
extern void print_number(int n);
>>>>>>> 49b612cfeb4c55a8321a371d693476176e4dfaa4:0x04-more_functions_nested_loops/main.h
#endif
