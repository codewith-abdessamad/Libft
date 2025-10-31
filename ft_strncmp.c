/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdessel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:01:45 by abdessel          #+#    #+#             */
/*   Updated: 2025/10/15 19:01:45 by abdessel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*f;
	const unsigned char	*l;

	f = (const unsigned char *)s1;
	l = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && f[i] == l[i])
	{
		if (f[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return (f[i] - l[i]);
}
