/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdessel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:29:02 by abdessel          #+#    #+#             */
/*   Updated: 2025/10/16 15:29:02 by abdessel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	total;
	void	*tmp;

	if (nelem == 0 || elsize == 0)
		return (malloc(0));
	total = nelem * elsize;
	if ((total / elsize) != nelem)
		return (NULL);
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, total);
	return (tmp);
}
