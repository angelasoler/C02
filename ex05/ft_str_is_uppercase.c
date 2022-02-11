/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:54:54 by asoler            #+#    #+#             */
/*   Updated: 2022/02/11 23:04:04 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;

	//tratar string vazia
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

	n = ft_str_is_uppercase(s);
	printf("%d\n", n);
	n = ft_str_is_uppercase(v);
	printf("%d\n", n);
	n = ft_str_is_uppercase(num);
	printf("%d\n", n);
	n = ft_str_is_uppercase(lower_c);
	printf("%d\n", n);
	n = ft_str_is_uppercase(up_c);
	printf("%d\n", n);
}
