#ifndef MAIN_H_
#define MAIN_H_
#include <ctype.h>
#include <unistd.h>

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
int add(int,int);
void print_to_98(int n);
void times_table(void);
void print_times_table(int n);
int _isupper(int c);

/* Function definitions */
/**
  * _isupper  - checks whether the character is lower/upper
  * c: The character input
  * Description: a function to return 1 if character is lower case
  * and 0 if not
  * Return: 1 if upper case and 0 otherwise
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  * Return: On success 1, On error -1 is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
#endif
