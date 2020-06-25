/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmkhonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:22:37 by nmkhonza          #+#    #+#             */
/*   Updated: 2020/06/22 12:46:26 by nmkhonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str){
int rs=0;
int sgn=1;
int i=0;

if(str[0] == '-'){
sgn=-1;
i++;
}

while(str[i] != '\0'){
	rs=rs * 10 + str[i]-'0';
}
return (sgn * rs);

}
int main(){
char str1[]="-1234";
int vald=ft_atoi(str1);
printf("%d",vald);

	return (0);
}
