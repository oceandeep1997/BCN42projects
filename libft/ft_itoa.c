/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:17:46 by zqiu              #+#    #+#             */
/*   Updated: 2024/06/24 20:35:31 by zqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	len;
	int	temp_n;

	len = 1;
	temp_n = n;
	while (temp_n >= 10 || temp_n <= -10)
	{
		len++;
		temp_n /= 10;
	}
	if (n < 0)
		len++;
	return (len);
}

char	*allocate_string(int len)
{
	char	*str;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	return (str);
}

void	convert_to_string(char *str, int n, int len)
{
	int	sign;

	sign = 1;
	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	else if (n < 0)
		sign = -1;
	while (n)
	{
		str[--len] = '0' + (n % 10) * sign;
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = count_digits(n);
	str = allocate_string(len);
	if (!str)
		return (NULL);
	convert_to_string(str, n, len);
	return (str);
}
