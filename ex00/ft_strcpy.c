/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:45:28 by asoler            #+#    #+#             */
/*   Updated: 2022/02/10 19:45:50 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char	*ft_strcpy(char *dest, char *src)
{
	dest = src;
	return(dest);
}

int	main(void)
{
	char *source;
	source = "Olá, quero transapassar essa string para o seu destino";
	char *destiny;
	char *result;
	destiny = NULL;
	
	result = ft_strcpy(destiny, source);
	printf("%s", result);
}