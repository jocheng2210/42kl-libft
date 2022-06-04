/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:17:53 by jocheng           #+#    #+#             */
/*   Updated: 2022/06/04 22:32:44 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	char	tmp;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	len -= 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	// str[i] = '\0';
	return (str);
}

char *ft_itoa(int n)
{
    char	*res;
	char	*save;
	int		neg;

	if ((res = (char *)malloc(sizeof(char) * 13)) == NULL)
		return (NULL);
	neg = 0;
	save = res;
	if (n == 0)
		return ((char *)"0");
	if (n == -2147483648)
		return ((char *)"-2147483648");
	if (n < 0 && (n = -n))
		neg = -1;
	while (n > 0)
	{
		*res++ = ((n % 10) + '0');
		n = n / 10;
	}
	if (neg)
		*res++ = '-';
	*res = '\0';
	res = ft_strrev(save);
	return (res);
}