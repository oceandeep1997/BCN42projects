/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:36:58 by zqiu              #+#    #+#             */
/*   Updated: 2024/06/23 16:41:24 by zqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	char	*p_s1;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(s);
	p_s1 = (char *)s;
	ptr = malloc((size + 1) * sizeof(char));
	if (!ptr || size == 0)
		return (NULL);
	while (p_s1[i])
	{
		ptr[i] = p_s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
