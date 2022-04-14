/**
 * _isupper - checks if a character is upper or lower case
 *
 * Returns: 0 if lowercase 1 if uppercase
 */
int _isupper(int c)
{
        int lowercase_min = 97;
        int lowercase_max = 122;
        int uppercase_min = 65;
        int uppercase_max = 90;

        if((c-lowercase_min) * (c-lowercase_max) <= 0)
        {
                return 0;
        }

        if((c-uppercase_min) * (c-uppercase_max) <= 0)
        {
                return 1;
        }

}

/**
 * _isdigit - checks if a character is upper or lower case
 *
 * Returns: 0 if lowercase 1 if uppercase
 */
int _isdigit(int c)
{
        int digit_min = 97;
        int digit_max = 122;
        if((c-digit_min) * (c-digit_max) <= 0)
        {
                return 1;
        }
	return 0;
}


