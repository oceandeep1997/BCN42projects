/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:15:46 by zqiu              #+#    #+#             */
/*   Updated: 2024/06/21 17:35:56 by zqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(size * nmemb);
	if (nmemb != 0 && size != 0 && nmemb > SIZE_MAX / size)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
