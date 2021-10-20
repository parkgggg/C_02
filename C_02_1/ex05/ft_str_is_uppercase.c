/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:32:47 by gupark            #+#    #+#             */
/*   Updated: 2021/10/19 10:32:50 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_lowercase(char *str)
{
	int index;
	
	index = 0;
	while(str[index])
	{
	       	if(str[index] < 'A' || str[index] > 'Z')
			return (0);
		index++;
	}
	return (1);
}