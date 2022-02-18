/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantivi <csantivi@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:07:24 by csantivi          #+#    #+#             */
/*   Updated: 2022/02/17 23:15:13 by csantivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (src[i])
		i++;
	if (!dstsize)
		return (i);
	while (x < dstsize - 1 && dst[x] != '\0' && src[x] != '\0')
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = 0;
	return (i);
}
