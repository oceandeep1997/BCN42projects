/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:28:08 by zqiu              #+#    #+#             */
/*   Updated: 2024/07/24 20:45:44 by zqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_little;

	len_little = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	if (len == 0 || !*big || len < len_little)
		return (NULL);
	i = 0;
	while (i <= len - len_little && big[i] && big[i] != 0)
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(big + i, little, len_little) == 0)
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
