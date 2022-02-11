/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:45:28 by asoler            #+#    #+#             */
/*   Updated: 2022/02/11 02:26:18 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}


int count(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}


int	main(void)
{
	char *source;
	char *destiny;
	char *result;
	int size;

	source = "Olá, quero transpassar essa string para o seu destino";
	destiny = NULL;

	result = ft_strcpy(destiny, source);

	size = count(result);

	if (result[size] == '\0')
	{
		printf("%s", result);
	}
}
