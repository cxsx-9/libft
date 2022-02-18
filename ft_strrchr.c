/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantivi <csantivi@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:31:18 by csantivi          #+#    #+#             */
/*   Updated: 2022/02/17 23:15:20 by csantivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;
	char	*temp;

	i = 0;
	s = (char *)str;
	while (*s != '\0')
	{
		if (*s == c)
			temp = s;
		s++;
	}
	return (temp);
}
