#include "get_next_line.h"

static int *ft_line(char *stash, char **line)
{
  int i;
  char *tmp;

  i = 0;
  while(stash[i] != '\n' && stash[i] != 0)
    i++;
  if(stash[i] == '\n')
  {
    *line = ft_strsub(stash, 0, i);
    tmp = ft_strdup (stash + i + 1);
    if (stash[0] == 0)
      free(stash);
  }
  else if (stash[i] == 0)
  {
    *line = ft_strsub(stash, 0, i);
    free(stash);
  }
  return (1);
}

static int ft_return_value(char *stash, char **line, int n)
{
  if (n < 0)
    return (-1);
  else if (n == 0 && stash == NULL)
    return (0);
  else
    return (ft_line(stash, line));
}

int get_next_line(const int fd, char **line)
{
  char *buf[BUFF_SIZE + 1];
  static char *stash;
  char *tmp;
  int n;

  while ((n = read(fd, buf, BUFF_SIZE) > 0))
  {
    buf[n] = 0;
    if (stash == NULL)
      stash = ft_strdup(buf);
    else
    {
      tmp = ft_strjoin(stash, buf);
      free(stash);
      stash = tmp;
    }
    if (ft_strchr(stash, '\n'))
      break;
  }
  return (ft_return_value(stash, line, n));
}

#include <fcntl.h>
