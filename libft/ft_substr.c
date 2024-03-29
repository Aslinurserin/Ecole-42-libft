/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserin <aserin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:54:40 by aserin            #+#    #+#             */
/*   Updated: 2022/10/21 12:27:08 by aserin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	src_len;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	if (start >= src_len)
	{
		ret = malloc(sizeof(char));
		if (!ret)
			return (NULL);
		*ret = '\0';
	}
	else
	{
		if ((src_len - start) < len)
			len = src_len - start;
		ret = malloc(sizeof(char) * len + 1);
		if (!ret)
			return (NULL);
		ft_strlcpy(ret, (char *)(s + start), len + 1);
	}
	return (ret);
}
