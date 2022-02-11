/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:54:58 by asoler            #+#    #+#             */
/*   Updated: 2022/02/11 22:44:25 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	//tratar string vazio
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z')
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
	char alpha[6] = "FkjvR";

	n = ft_str_is_alpha(s);
	printf("%d\n", n);
	n = ft_str_is_alpha(v);
	printf("%d\n", n);
	n = ft_str_is_alpha(alpha);
	printf("%d\n", n);
}
