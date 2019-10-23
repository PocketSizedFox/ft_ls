/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:02:59 by ayano             #+#    #+#             */
/*   Updated: 2019/05/27 16:40:45 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *str)
{
	size_t	i;

	i = 0;
	while (str != NULL && str[i] != '\0')
	{
		str[i] = '\0';
		i++;
	}
}
