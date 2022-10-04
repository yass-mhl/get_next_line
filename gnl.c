#include "get_next_line.h"

char *ft_select(char *str, int *n)
{
  int i;
  char *dest;

  i = 0;
  while (str[i] && str || str[i] != 0)
    i++;
  dest = ft_memalloc(i + 1);
  if (ft_strchr(str, '\n') != 0)
    *n = -1;
  i = 0;
  while (str[i] && str || str[i] != 0)
  {
    dest[i] = str[i];
    i++;
  }
  dest[i] = 0;
  return (dest);
}

char *ft_select2(char *str)
{
  int i;
  int j;
  char *dest;

  i = 0;
  while (str[i] && str || str[i] != 0)
    i++;
  dest = ft_memalloc(ft_strlen(str) - i + 1);
  j = 0;
  while(str[i] && str)
    dest[j++] = str[++i];
  dest[j] = 0;
  return (dest);
}

int get_next_line(const int fd, char **line)
{
  char buf[BUFF_SIZE + 1];
  int n;
  static char *str;
  char *tmp;

  n = BUFF_SIZE;
  if (fd < 0 || BUFF_SIZE < 1)
    return (-1);
  while (n > 0)
  {
    n = read(fd, buf, BUFF_SIZE);
    buf[BUFF_SIZE] = 0;
    if (n == -1)
      return (-1);
    tmp = str;
    str = ft_strjoin(tmp, buf);
    free(tmp);
    if (ft_strchr(str, '\n'))
      break ;
  }
  *line = ft_select(str, &n);
  tmp = str;
  str = ft_select2(tmp);
  free(tmp);
  if (n == 0 && (*str)[0] == 0)
    ft_strdel(&str);
  return (n);
}

int main(int ac, char **av)
{
  int fd;
	char *line;

	if (ac != 2)
		printf("Error");
	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		printf("%s\n", line);
	close(fd);
	return (0);
}
