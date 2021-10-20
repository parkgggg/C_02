/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:31:05 by gupark            #+#    #+#             */
/*   Updated: 2021/10/19 10:31:08 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	while(str[index])
	{
		if(str[index] < 'A' || (str[index] > 'Z' && str[index] < 'a') || str[index]  > 'z')
			return (0);
		index++;
	}
	return (1);
}