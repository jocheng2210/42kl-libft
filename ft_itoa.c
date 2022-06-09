/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:17:53 by jocheng           #+#    #+#             */
/*   Updated: 2022/06/09 22:06:44 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	buff;

	i = 0;
	length = ft_strlen(str);
	while (length - 1 > i)
	{
		buff = str[i];
		str[i] = str[length - 1];
		str[length - 1] = buff;
		length--;
		i++;
	}
	return (str);
}*/
/*
char	*ft_itoa(int n)
{
	char	*res;
	char	*save;
	int		neg;
	int		j;

	j = 0;
	res = malloc(sizeof(char) * ft_count(n));
	if (!res)
		return (NULL);
	neg = 0;
	save = res;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		neg = -1;
		n = -n;
	}
	while (n > 0)
	{
		res[j] = ((n % 10) + '0');
		n = n / 10;
		j++;
	}
	if (neg)
	{
		res[j] = '-';
		j++;
	}
	res[j] = '\0';
	res = ft_strrev(save);
	return (res);
}*/

int	count_number(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (12);
	if (n == 0)
		return (2);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		j;

	j = count_number(n) - 1;
	res = malloc(sizeof(char) * count_number(n));
	if (!res)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0\0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648\0"));
	res[j] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n = n * -1;
	}	
	while (n > 0 && j >= 0)
	{
		j--;
		res[j] = ((n % 10) + '0');
		n = n / 10;
	}
	return (&res[0]);
}
/*
int main(void)
{
    printf("when int is -2147483648,");
    printf("\nint in char is %s\n\n", ft_itoa(-2147483648));
    
    printf("when int is -2147483647,");
    printf("\nint in char is %s\n\n", ft_itoa(-2147483647));
    
    printf("when int is -1,");
    printf("\nint in char is %s\n\n", ft_itoa(-1));
    
    printf("when int is 0,");
    printf("\nint in char is %s\n\n", ft_itoa(0));
    
    printf("when int is 1,");
    printf("\nint in char is %s\n\n", ft_itoa(1));
    
    printf("when int is 2147483647,");
    printf("\nint in char is %s\n\n", ft_itoa(2147483647));
    
    printf("when int is 2147483648,");
    printf("\nint in char is %s\n\n", ft_itoa(2147483648));
}*/