
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:15:36 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/16 14:55:29 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// #include <stdio.h>


int ft_isalpha(int c){
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
   
    return (0);

}

// int main(){
//     printf("answer is: %d\n", ft_isalpha('h'));

//     return 0;
// }