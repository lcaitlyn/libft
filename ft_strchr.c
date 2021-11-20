/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:54:52 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:54:53 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (void *)0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)a)
		{
			p = (void *)&str[i];
			return (p);
		}
		i++;
	}
	if ((char)a == '\0')
		p = ((void *)&str[i]);
	return (p);
}
