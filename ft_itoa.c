/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:17:53 by jocheng           #+#    #+#             */
/*   Updated: 2022/06/08 18:27:13 by jocheng          ###   ########.fr       */
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

int	ft_count(int n)
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
/*
char	*ft_itoa(int n)
{
	char	*res;
	int		j;

	j = ft_count(n);
	res = malloc(sizeof(char) * ft_count(n));
	if (!res)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0\0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648\0"));
	res[j] = '\0';
	j--;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		res[j] = ((n % 10) + '0');
		n = n / 10;
		j--;
	}
	if (j == 1)
		res[j] = '-';
	else
		j++;
	return (&res[j]);
}*/

char	*ft_itoa(int n)
{
	char	*res;
	int		j;

	j = ft_count(n);
	res = malloc(sizeof(char) * ft_count(n));
	if (!res)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648\0"));
	res[j] = '\0';
	j--;
	if (n < 0)
		n = n * -1;
	while (n >= 0 && j >= 1)
	{
		res[j] = ((n % 10) + '0');
		n = n / 10;
		j--;
	}
	j++;
	if (res[0] == 0)
		res[0] = '-';
	return (&res[1]);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		j;

	j = ft_count(n);
	res = malloc(sizeof(char) * ft_count(n));
	if (!res)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648\0"));
	res[j] = '\0';
	printf("res[j = %d] = %c\n", j, res[j]);
	j--;
	if (n < 0)
		n = n * -1;
	while (n >= 0 && j >= 1)
	{
		res[j] = ((n % 10) + '0');
		printf("j = %d\n", j);
		printf("-------->res[j = %d] = %c\n", j, res[j]);
		n = n / 10;
		j--;
	}
	printf("before ++, j = %d\n", j);
	j++;
	printf("after ++, j = %d\n", j);
	
	
	if (res[0] == 0)
	{
		res[0] = '-';
		printf("res[j = %d] = %c\n", j, res[j]);
	}
	
	
	printf("-----------------------------------------------\n");
	int k;
	
	k = 0;
	while(res[k] != '\0')
	{
	    printf("%c\n", res[k]);
	    k++;
	}
	printf("-----------------------------------------------\n");
	return (&res[1]);
}

/*
int main(void)
{
    int k;
    
    k = -12345;
    printf("k in char is %s\n", ft_itoa(k));
}*/