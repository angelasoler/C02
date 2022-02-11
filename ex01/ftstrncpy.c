/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstrncpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:22:50 by asoler            #+#    #+#             */
/*   Updated: 2022/02/11 03:00:29 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n >= 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n >= 1 )
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return(dest);
}

int	main(void)
{
	char *source;
	char destiny[100];
	char *result;
	unsigned int size;

	size = 100;
	source = "Olá, quero transpassar essa string para o seu destino";

	result = ft_strncpy(destiny, source, size);

	write(1, result, 100);


	// printf("%s", result);
}