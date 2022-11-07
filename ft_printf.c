/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 03:31:31 by houmanso          #+#    #+#             */
/*   Updated: 2022/11/07 22:26:15 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check(const char *s, int *i, size_t *len, va_list *va)
{
	
	(*i)++;
	//*len +=check_space(&s[*i], &len)
	if (s[*i] == 'c')
		*len += ft_print_char(va_arg(*va, int));
	else if (s[*i] == 'i' || s[*i] == 'd')
		*len += ft_print_nbr(va_arg(*va, int));
	else if (s[*i] == 's')
		*len += ft_print_str(va_arg(*va, char *));
	else if (s[*i] == '%')
		*len += ft_print_char('%');
	else
		(*i)--;
}

int	ft_printf(const char *s, ...)
{
	va_list	va;
	size_t	len;
	int		i;

	i = 0;
	len = 0;
	if (write(1,0,0) == -1)
		return(-1);
	va_start(va, s);
	while(s[i]){
		if (s[i] == '%')
			ft_check(s , &i, &len, &va);
		else 
			len += ft_print_char(s[i]);
		i++;
	}
	return (len);
}