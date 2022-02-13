#include <stdio.h>

int	ft_char_is_alphanumeric(char *str)
{

	if (*str >= 'A' && *str <= 'Z')
		return (1);
	else if (*str >= 'a' && *str <= 'z')
		return (1);
	else if (*str >= '0' && *str <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
			i++;
		}
		if ((str[i] >= 97 && str[i] <= 122) && ft_char_is_alphanumeric(&str[i - 1]) == 0)
		{
			str[i] -= 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return(str);
}

int	main()
{
	char s[27] = "hola esta td em minuscula";
	char v[19]= "eU SoUOU anG3La";
	char q[100] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char *result;

	result = ft_strcapitalize(s);
	printf("%s\n", result);

	result = ft_strcapitalize(q);
	printf("%s\n", result);
	
	result = ft_strcapitalize(v);
	printf("%s\n", result);
}


