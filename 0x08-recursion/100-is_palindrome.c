#include "holberton.h"
#include "main.h"
/**
* _strlen_recursion - function that gets the length of a string
* @s: is the string
* Return: is the length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (_strlen_recursion(s + 1) + 1);
}
/**
* is_palindrome - functon that returns 1 if a string is a palindrome and 0 if not
* @s: is the string
* Return: returns an int. whether it's 0 or 1
*/
int is_palindrome(char *s)
{
int len;
len = _strlen_recursion(s);
return (palindrome_checker(s, len, 0, len - 1));
}
/**
* palindrome_checker - a helper function to recursively check if s is a palindrome
* @s: is the string to check
* @len: is the string length
* @letter1: is the first letter to check in s
* @letter2: is the next letter to check in s
* Return: returns 1 if the string is a palindrome, and 0 if not
*/
int palindrome_checker(char *s, int len, int letter1, int letter2)
{
if (letter1 == letter2)
return (1);
if (s[letter1] != s[letter2])
return (0);
if (letter1 < letter2 + 1)
return (palindrome_checker(s, len, letter1 + 1, letter2 - 1));
return (1);
}
