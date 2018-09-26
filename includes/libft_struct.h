/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_struct.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 03:35:17 by psprawka          #+#    #+#             */
/*   Updated: 2018/09/26 06:02:49 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRUCT
# define LIBFT_STRUCT

typedef struct	s_node
{
	void			*data;
	size_t			d_size;
	struct s_node	*next;

}				t_node;

typedef struct	s_queue
{
	t_node		*first;
	t_node		*last;

}				t_queue;

typedef struct	s_ht_item
{
	void	*key;
	void	*value;
	
}				t_ht_item;

/*
**	In t_ht_table:
**	-> size indicates the capacity of a hash table
**	-> count is a currecnt number of items
*/
typedef struct	s_ht_table
{
	uint16_t	size;	
	uint16_t	count;		
	t_ht_item	**hash_table;
	
}				t_ht_table;

#endif