/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:13:43 by houmanso          #+#    #+#             */
/*   Updated: 2022/11/07 22:21:00 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return(ft_print_str("(null)"));
	while (s[i])
		ft_print_char(s[i++]);
	return (ft_strlen(s));
}