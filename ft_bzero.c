/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 08:48:32 by zakdim            #+#    #+#             */
/*   Updated: 2019/10/19 16:42:46 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		cont;
	char		*s2;

	cont = 0;
	s2 = (char *)s;
	while (cont < n)
	{
		s2[cont] = 0;
		cont++;
	}
}
