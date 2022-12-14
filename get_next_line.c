#include "get_next_line.h"

char *ft_read(int fd, char *stash)
{
  char *buf;
  int n;

  n = 1;
  buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
  if (!buf)
    return (NULL);
  while(n != 0 && !ft_strchr(stash, '\n'))
  {
    n = read(fd, buf, BUFFER_SIZE);
    if (n == -1)
			return (NULL);
    buf[n] = 0;
    if (stash == NULL)
      stash = ft_strdup(buf);
    else
      stash = ft_strjoin(stash, buf);
  }
  free(buf);
  return (stash);
}

char *ft_line(char *stash)
{
  int i;
  char *str;

  if (!stash[0])
    return (NULL);
  i = 0;
  while (stash[i] && stash[i] != '\n')
    i++;
  str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
  i = 0;
  while (stash[i] && stash[i] != '\n')
  {
    str[i] = stash[i];
    i++;
  }

  if (stash[i] == '\n')
  {
    str[i] = stash[i];
    i++;
  }

  str[i] = 0;
  return (str);
}

char *get_next_line(int fd)
{
  static char *stash;
  char *line;

  if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
  stash = ft_read(fd, stash);
  if (!stash)
    return (NULL);
  line = ft_line(stash);
  stash = ft_new_stash(stash);
  return (line);
}

// #include <fcntl.h>
// #include <stdio.h>

// int main()
// {
//   int fd;
//   int i;

//   i = 0;
// 	fd = open("tests/test", O_RDONLY);
//   while( i < 1)
//   {
//     printf("%s\n", get_next_line(fd));
//     i++;
//   }

// }
