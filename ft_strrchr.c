/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:28:05 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/17 16:40:27 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((unsigned char)c == 0)
		return ((char *)&s[len]);
	while (len > 0)
	{
		if ((unsigned char)s[len] == (unsigned char)c)
			return ((char *)&s[len]);
		len--;
	}
	if ((unsigned char)s[0] == (unsigned char)c)
		return ((char *)&s[0]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	const char *s = "h";
	printf("%s\n",ft_strrchr(s,'h'));
	printf("%s\n",strrchr(s,'h'));
	return (0);
}
*/