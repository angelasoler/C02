/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:14:11 by asoler            #+#    #+#             */
/*   Updated: 2022/02/11 23:14:12 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;

	//tratar string vazia
	//testar com nao printaveis
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
			return (0);
		else if (str[i] == 127)
			return (0);
		else
			i++;
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


	n = ft_str_is_printable(s);
	printf("%d\n", n);
	n = ft_str_is_printable(v);
	printf("%d\n", n);
	n = ft_str_is_printable(num);
	printf("%d\n", n);
	n = ft_str_is_printable(lower_c);
	printf("%d\n", n);
	n = ft_str_is_printable(up_c);
	printf("%d\n", n);
}
