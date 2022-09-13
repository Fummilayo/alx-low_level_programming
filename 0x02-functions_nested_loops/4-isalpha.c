#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@c: single letter input
 *Return: 1 if int c is lowercase, 0 if otherwise
 */
int _isalpha(int c)
{ return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
