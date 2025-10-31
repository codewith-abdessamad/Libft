/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdessel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:36:47 by abdessel          #+#    #+#             */
/*   Updated: 2025/10/18 10:36:47 by abdessel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_for_set(char c, const char *set)
{
	size_t	u;

	u = 0;
	while (set[u])
	{
		if (set[u] == c)
			return (1);
		u++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	b;
	size_t	e;

	if (!s1 || !set)
		return (NULL);
	b = 0;
	while (s1[b] && check_for_set(s1[b], set))
		b++;
	e = 0;
	while (s1[e])
		e++;
	while (e > b && check_for_set(s1[e - 1], set))
		e--;
	return (ft_substr(s1, b, e - b));
}
