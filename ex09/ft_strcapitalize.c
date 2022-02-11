#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	//verificar retorno, pois string original nao deve mudar
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
			i++;
		}
		if ((str[i] >= 97 && str[i] <= 122) || str[i] == 20)
		{
			if (i == 0)
			{
				str[i] -= 32;
				i++;
			}
			else if (str[i] == 20)
			{
				i++;
				str[i] -= 32;
				i++;
			}
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
	char *n;
	char s[27] = "hola esta td em minuscula";
	char v[19]= "eU SoUOU anG3La";

	n = ft_strcapitalize(s);
	printf("%s\n", n);
	n = ft_strcapitalize(v);
	printf("%s\n", n);
}


