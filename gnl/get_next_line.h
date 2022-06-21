#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1 
# endif

char	*ft_strdup(char *str);
int		check_eol(char *str);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strlcpy(char *s1, char *s2, int size);
char	*ft_divide(char *s1, int div);
size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
#endif
