#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;

	//tratar string vazia
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return(str);
}

int	main()
{
	char *n;
	char s[27] = "askfkljasfas215685432AVHHA";
	char v[19]= "skfk:lj>85<4.AVHHA";
	char num[8] = "1234567";
	char lower_c[6] = "asdjb";
	char up_c[6] = "AJNBJ";


	n = ft_strupcase(s);
	printf("%s\n", n);
	n = ft_strupcase(v);
	printf("%s\n", n);
	n = ft_strupcase(num);
	printf("%s\n", n);
	n = ft_strupcase(lower_c);
	printf("%s\n", n);
	n = ft_strupcase(up_c);
	printf("%s\n", n);
}
