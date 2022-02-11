/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:22:20 by asoler            #+#    #+#             */
/*   Updated: 2022/02/11 22:42:35 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;

	//tratar string vazio
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return 0;
	}
	return 1;
}

int	main()
{
	int n;
	char s[27] = "askfkljasfas215685432AVHHA";
	char v[19]= "skfk:lj>85<4.AVHHA";
	char num[8] = "1234567";

	n = ft_str_is_numeric(s);
	printf("%d\n", n);
	n = ft_str_is_numeric(v);
	printf("%d\n", n);
	n = ft_str_is_numeric(num);
	printf("%d\n", n);
}
