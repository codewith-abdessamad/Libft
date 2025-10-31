/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdessel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:43:48 by abdessel          #+#    #+#             */
/*   Updated: 2025/10/15 16:43:48 by abdessel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	c_byte;

	c_byte = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c_byte)
			return ((char *)(s + i));
		i++;
	}
	if (c_byte == '\0')
		return ((char *)(s + i));
	return (NULL);
}
