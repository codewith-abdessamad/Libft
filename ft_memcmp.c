/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdessel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:49:12 by abdessel          #+#    #+#             */
/*   Updated: 2025/10/16 12:49:12 by abdessel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*f;
	const unsigned char	*l;
	size_t				i;

	f = (const unsigned char *)s1;
	l = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (f[i] != l[i])
			return (f[i] - l[i]);
		i++;
	}
	return (0);
}
