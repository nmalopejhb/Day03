/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmkhonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:10:02 by nmkhonza          #+#    #+#             */
/*   Updated: 2020/06/22 11:38:58 by nmkhonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c){
write(1,&c,1);

}

void ft_putstr(char *str){
	int i;
	i=0;
	while(str[i] != '\0'){
ft_putchar(str[i]);
i++;

	}


}

/*int main(){
	ft_putstr("Hello\n");

return (0);

}*/
