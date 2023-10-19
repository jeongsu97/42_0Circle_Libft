/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:18:33 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/19 09:58:46 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "hello";
	if (ft_strlen(str) != strlen(str))
		printf("Error %s\n",str);
	return (0);
}
*/
