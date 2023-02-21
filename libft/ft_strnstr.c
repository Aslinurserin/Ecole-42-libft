/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserin <aserin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:54:28 by aserin            #+#    #+#             */
/*   Updated: 2022/10/21 14:24:52 by aserin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	counter;
	unsigned int	len_needle;

	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *)haystack);
	if (len == 0)
		return ((char *) NULL);
	counter = 0;
	while (counter <= (len - len_needle) && (haystack[counter] != '\0'))
	{
		if (ft_strncmp(&haystack[counter], needle, len_needle) == 0)
			return ((char *)&haystack[counter]);
		counter++;
	}
	return ((char *) NULL);
}
