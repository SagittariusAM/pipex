/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_heredoc_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:40:33 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/01/17 22:55:30 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

// static int	is_limiter(char *str, char *limiter)
// {
// 	int	ret;
// 	int	len;

// 	if (!str || !limiter)
// 		return (0);
// 	len = ft_strlen(limiter);
// 	ret = ft_strncmp(str, limiter, len);
// 	if (!ret && *(str + len) == '\n')
// 		return (1);
// 	return (0);
// }

// char	*ft_here_doc(char **args, char **env)
// {
// 	char	*buffer;
// 	char	*input;
// 	int		fd[2];

// 	input = NULL;
// 	buffer = NULL;
// 	while (is_limiter(buffer, *args) == 0)
// 	{
// 		ft_putstr_fd("pipe heredoc> ", 1);
// 		buffer = get_next_line(0);
// 		input = ft_realloc(input, buffer);
// 		free(buffer);
// 	}
// 	if (pipe(fd) == -1)
// 		return (perror("pipe"), NULL);
// 	ft_putstr_fd(input, fd[1]);
// 	free(input);
// 	close(fd[1]);
// 	return (ft_pipex(args + 1, env, fd[0]));
// }
