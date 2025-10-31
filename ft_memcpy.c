/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdessel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:51:49 by abdessel          #+#    #+#             */
/*   Updated: 2025/10/13 16:51:49 by abdessel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d_ptr;
	unsigned char	*s_ptr;
	size_t			i;

	if (n == 0)
		return (dest);
	d_ptr = (unsigned char *)dest;
	s_ptr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d_ptr[i] = s_ptr[i];
		i++;
	}
	return (dest);
}
