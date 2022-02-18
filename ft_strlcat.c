/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantivi <csantivi@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:01:19 by csantivi          #+#    #+#             */
/*   Updated: 2022/02/17 23:15:06 by csantivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[j])
		j++;
	while (src[i])
		i++;
	if ((destsize + i) > j + i)
		return (j + i);
	return (destsize + i);
}
