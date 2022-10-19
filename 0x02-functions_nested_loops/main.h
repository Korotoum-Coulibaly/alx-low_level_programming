#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int _putchar(char c);
/**
 *print_alphabet - This function print alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);
	putchar ('\n');
}

/**
 *print_alphabet_x10 - this function prints 10 times
 *the alphabet,in lowercase,followed by a new line
 */
void print_alphabet_x10(void)
{
	char letter;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar (letter);
		putchar ('\n');
	}
}

/**
 *_islower - This function that checks for lowercase character
 *@c: is the information that checks
 *
 *Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}

/**
 *_isalpha - checks alphabetic character
 *@c: is the information that checks
 *
 *Return: 1 if c is a letter,lowercase or uppercase
 *0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}

/**
 *print_sign - That prints the sign of a number
 *@n: information that checks
 *
 *Return: 1 if n is greater than zero
 *0 if n is a zero
 *-1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

/**
 * _abs - that computes the absolute value of an integer
 * @n: number that computes
 * @a: change negatif to positif
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n);
	}
	else
		return (n);
	return (0);
}

/**
 *print_last_digit - That prints the last digit of a number
 *@n: number that print in the last digit
 *
 *Return: value of digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (-n) % 10;
		n = -n;
	}
	if (n > 0) 
		n = n % 10;
	_putchar ('0' + n);
	return (n);
}

/**
 *jack_bauer - That prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		if (a != 2)
		{
			for (b = 0; b <= 9; b++)
			{
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 9; d++)
					{
						putchar ('0' + a);
						putchar ('0' + b);
						putchar (':');
						putchar ('0' + c);
						putchar ('0' + d);
						putchar ('\n');
					}
				}
			}
		}
		if (a == 2)
		{
			for (b = 0; b <= 3; b++)
			{
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 9; d++)
					{
						putchar ('0' + a);
						putchar	('0' + b);
						putchar (':');
						putchar ('0' + c);
						putchar ('0' + d);
						putchar ('\n');
					}
				}
			}
		}
	}	

}

/**
 * times_table - prints the 9 times table,starting with 0
 */
void times_table(void)
{
	int a, b, result;
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			if (b == 0)
				_putchar ('0');
			if (b != 0 && result < 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar ('0' + result);
			}
			if (result > 9)
			{
				_putchar (',');
				_putchar (' ');
				_putchar ('0' + result / 10);
				_putchar ('0' + result % 10);
			}
		}
		_putchar ('\n');
	}
}

/**
 * add - that adds two integers and returns the result
 * @n: first number
 * @m: second number
 *
 * Return: $result
 */
int add(int n,int m)
{
	int result;

	result = n + m;
	return (result);
}

/**
 * print_to_98 - that prints all natural numbers from n to 98
 * @n: first number
 */
void print_to_98(int n)
{
	int p;

	for (p = n; p <= 98; p++)
	{
		if (p > 9)
		{
			_putchar ('0' + p / 10);
			_putchar ('0' + p % 10);
		}
		if (p < 10 && p != 0)
			_putchar ('0' + p);
		if (p == 0)
			_putchar ('0');
		if (p != 98)
		{
			_putchar (',');
			_putchar (' ');
		}
		if (p < -99)
		{
			_putchar ('0' + (-p) / 100);
			_putchar ('0' + (-p / 10) % 10);
			_putchar ('0' + (-p) % 10);
		}
		if (p <= -10 && p >= -99)
		{
			_putchar ('0' + (-p) / 10);
			_putchar ('0' + (-p) % 10);
		}
	}
	if (n > 99)
	{
		for (p = n; p >= 98; p--)
		{
			if (p > 99)
			{
				_putchar ('0' + p / 100);
				_putchar ('0' + (p / 10) % 10);
				_putchar ('0' + p % 10);
			}
			if (p <= 99)
			{
				_putchar ('0' + p / 10);
				_putchar ('0' + p % 10);
			}
			if (p != 98)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
	}
	_putchar ('\n');
}
#endif /* _MAIN_H_ */
