/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 03:31:31 by houmanso          #+#    #+#             */
/*   Updated: 2022/11/08 18:59:00 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check(const char *s, int *i, size_t *len, va_list *va)
{
	
	(*i)++;
	//*len +=check_space(&s[*i], &len)
	if (s[*i] == 'c')
		ft_print_char(va_arg(*va, int), len);
	else if (s[*i] == 'i' || s[*i] == 'd')
		ft_print_nbr(va_arg(*va, int), len);
	else if (s[*i] == 'u')
		ft_print_u(va_arg(*va, unsigned int), len);
	else if (s[*i] == 's')
		ft_print_str(va_arg(*va, char *), len);
	else if (s[*i] == 'x')
		ft_print_hex(va_arg(*va, unsigned int), "0123456789abcdef", len);
	else if (s[*i] == 'X')
		ft_print_hex(va_arg(*va, unsigned int), "0123456789ABCDEF", len);
	else if (s[*i] == 'p')
		ft_print_p(va_arg(*va, size_t), len);
	else if (s[*i] == '%')
		ft_print_char('%', len);
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
			ft_print_char(s[i], &len);
		i++;
	}
	return (len);
}