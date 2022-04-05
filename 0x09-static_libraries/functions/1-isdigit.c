/**
 * _isdigit - checks if character is a digit
 * @c: character to check
 * Return: 1 if digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
