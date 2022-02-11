/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:22:20 by asoler            #+#    #+#             */
/*   Updated: 2022/02/11 12:29:39 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = 1;
	}
	return (result);
}

int	main()
{
	int n;
	char s[26] = "askfkljasfas215685432AVHHA";
	char v[19]= "skfk:lj>85<4.AVHHA";
	char num[7] = "1234567";

	n = ft_str_is_alpha(s);
	printf("%d\n", n);
	n = ft_str_is_alpha(v);
	printf("%d\n", n);
	n = ft_str_is_alpha(num);
	printf("%d\n", n);
}
