/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:58:39 by gcavanna          #+#    #+#             */
/*   Updated: 2022/10/10 14:08:12 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[a] != '\0')
	{
		b = 0;
		while ((big[a + b]) == little[b] && (a + b) < len)
		{
			if (big[a + b] == '\0' && little[b] == '\0')
				return ((char *)&big[a]);
			b++;
		}
		if (little[b] == '\0')
			return ((char *)big + a);
		a++;
	}
	return (0);
}				
