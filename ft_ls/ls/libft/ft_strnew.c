/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:16:39 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/18 11:28:03 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset((char *)s, (int)'\0', size + 1);
	return (s);
}
