/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:56:47 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:56:48 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	s = (char *)s1;
	while (s[start] != '\0' && ft_strchr(set, s[start]))
		start++;
	if (s[start] == '\0')
		return (ft_calloc(1, sizeof(char)));
	while (end > start && ft_strchr(set, s[end]))
		end--;
	s = ft_substr(s1, start, end - start + 1);
	return (s);
}
