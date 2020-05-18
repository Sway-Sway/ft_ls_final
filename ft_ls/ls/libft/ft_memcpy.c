/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:51:50 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/17 15:30:08 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char		*dest;
	const char	*str;
	size_t		i;

	dest = (char *)str1;
	str = (const char *)str2;
	i = 0;
	if (n == 0)
		return((void *)dest);
	if (str1 == NULL || str2 == NULL)
		return ((void *)dest);
	while (i < n)
	{
		*dest++ = *str++;
		i++;
	}
	return (dest);
}
