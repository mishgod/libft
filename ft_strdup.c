/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:10:33 by rbooker           #+#    #+#             */
/*   Updated: 2020/11/16 18:12:18 by rbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*newstr;

	if (!src)
		return (0);
	i = -1;
	newstr = malloc((ft_strlen((char *)src) + 1) * sizeof(char));
	while (newstr[++i] != '\0')
		newstr[i] = src[i];
	newstr[i] = '\0';
	return (newstr);
}
