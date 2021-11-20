/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:53:42 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:53:43 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
