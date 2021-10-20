/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:34:20 by gupark            #+#    #+#             */
/*   Updated: 2021/10/19 10:34:21 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int index;
	char digit1;
	char digit2;

	index = 0;
	while(str[index])
	{
		if(str[index] < 32 || str[index] == 127)
		{
			write(1, "\\", 1);
			digit1 = (str[index] / 16) + '0';
			if(str[index] % 16 > 9)
				digit2 = (str[index] % 16) - 10 + 'a';
			else
				digit2 = (str[index] % 16) + '0';
			write(1, &digit1, 1);
			write(1, &digit2, 1);
		} 
		else
			write(1, &str[index], 1);
		index++;
	}	
}