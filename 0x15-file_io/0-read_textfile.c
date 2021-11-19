#include "holberton.h"
#include <stdio.h>
/**
* read_textfile - this is a function that reads a text file and prints it
* to the POSIX standard output
* @filename: this is file to read
* @letters: is the number of letters it should read and print
* Return:  returns the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t cnt, w_write;
char *buf;
if (!filename)
return (0);
buf = malloc(sizeof(char) * letters + 1);
if (buf == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd < 0)
{
free(buf);
return (0);
}
cnt = read(fd, buf, letters);
if (cnt < 0)
{
free(buf);
return (0);
}
w_write = write(STDOUT_FILENO, buf, cnt);
if (w_write < 0)
{
free(buf);
return (0);
}
close(fd);
free(buf);
return (cnt);
}
