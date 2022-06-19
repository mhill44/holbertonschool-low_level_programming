#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* void positive_or_negative(int i);
* #endif HOLBERTON_H
*/
char *cap_string(char *);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
char *_strcpy(char *dest, char *src);
char *string_toupper(char *);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int add (int, int);
int factorial(int n);
int isalpha(int c);
int _isdigit(int c);
int islower(int c);
int is_palindrome(char *s);
int is_prime_helper(int n, int i);
int is_prime_number(int n);
int _isupper(int c);
int mul(int a, int b);
int palindrome_checker(char *s, int len, int letter1, int letter2);
int _pow_recursion(int x, int y);
int print_last_digit(int);
int print_sign(int n);
int _putchar(char c);
int _sqrt_helper(int n, int i);
int _sqrt_recursion(int n);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strlen_recursion(char *s);
unsigned int _strspn(char *s, char *accept);
void jack_bauer (void);
void more_numbers(void);
void positive_or_negative(int i);
void print_alphabet (void);
void print_alphabet_x10(void);
void print_array(int *a, int n);
void print_chessboard(char (*a)[8]);
void print_diagonal(int n);
void print_diagsums(int *a, int size);
void print_line(int n);
void print_most_numbers(void);
void print_numbers(void);
void _print_rev_recursion(char *s);
void print_square(int size);
void print_to_98 (int n);
void print_triangle(int size);
void puts2(char *str);
void _puts(char *str);
void puts_half(char *str);
void _puts_recursion(char *s);
void reset_to_98(int *n);
void reverse_array(int *a, int n);
void swap_int(int *a, int *b);
void times_table (void);

#endif
