#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			i++;
			return (0);
		}
	}
	return (1);
}

int	main()
{
	int n;
	char s[27] = "askfkljasfas215685432AVHHA";
	char v[19]= "skfk:lj>85<4.AVHHA";
	char num[8] = "1234567";
	char lower_c[6] = "asdjb"; //coloca sempre mais um do nulo(aqui esta certo)
	char up_c[6] = "AJNBJ";

	n = ft_str_is_lowercase(s);
	printf("%d\n", n);
	n = ft_str_is_lowercase(v);
	printf("%d\n", n);
	n = ft_str_is_lowercase(num);
	printf("%d\n", n);
	n = ft_str_is_lowercase(lower_c);
	printf("%d\n", n);
	n = ft_str_is_lowercase(up_c);
	printf("%d\n", n);
}
