/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserin <aserin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:53:10 by aserin            #+#    #+#             */
/*   Updated: 2022/10/21 12:34:42 by aserin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	find_digit_num(int num)
{
	int	dnum;

	dnum = 0;
	if (num == INT_MIN)
		return (11);
	if (num == 0)
		return (1);
	else if (num < 0)
	{
		num = num * -1;
		dnum++;
	}
	while (num > 0)
	{
		num /= 10;
		dnum++;
	}
	return (dnum);
}

char	*ft_itoa(int n)
{
	int		digit;
	char	*arry;

	digit = find_digit_num(n);
	arry = (char *)malloc(sizeof(char) * (digit + 1));
	if (!arry)
		return (NULL);
	arry[digit] = '\0';
	digit--;
	if (n == INT_MIN)
		ft_strlcpy(arry, "-2147483648", 12);
	else if (n == 0)
		ft_strlcpy(arry, "0", 2);
	if (n < 0 && n != INT_MIN)
	{
		n = n * -1;
		arry[0] = '-';
	}
	while (digit >= 0 && n > 0 && n != INT_MIN)
	{
		arry[digit] = n % 10 + '0';
		digit--;
		n /= 10;
	}
	return (arry);
}
