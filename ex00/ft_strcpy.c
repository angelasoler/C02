/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:45:28 by asoler            #+#    #+#             */
/*   Updated: 2022/02/11 15:48:45 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int count(char *c);

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
	char destiny[100];
	int size;

	source = "Olá, quero transpassar essa string para o seu destino";
	ft_strcpy(destiny, source);

	size = count(destiny);

	if (destiny[size] == '\0')
	{
		printf("%s", destiny);
	}
}
