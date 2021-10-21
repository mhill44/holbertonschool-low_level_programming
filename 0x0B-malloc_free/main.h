#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include "holberton.h"
/**
* void positive_or_negative(int i);
* #endif HOLBERTON_H
*/
int _putchar(char c);
void print_alphabet (void);
void print_alphabet_x10(void);
int islower(int c);
int isalpha(int c);
int print_sign(int n);
int print_last_digit(int);
void jack_bauer (void);
void times_table (void);
int add (int, int);
void print_to_98 (int n);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
void _puts(char *str);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int palindrome_checker(char *s, int len, int letter1, int letter2);
int is_prime_helper(int n, int i);
int _sqrt_helper(int n, int i);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif
