#include "libft.h"

static char *remove_first_blank(char *str)
{
  unsigned int i;
  char *copy;

  i = 0;

  while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
  copy = &str[i];
  return (copy);
}

static int size_without_blank(char const *str)
{
  int size;

  size = ft_strlen(str);
  if (size == 0)
    return (size);
  while (str[size] == ' ' || str[size] == '\n' || str[size] == '\t' || str[size] == '\0')
    size--;
  return (size + 1);
}

char  *ft_strtrim(char const *s)
{
  char *res;
  char *tmp;
  int len;

  len = 0;
  tmp = (char *)s;
  if (tmp[0] != 0)
  {
    tmp = remove_first_blank(tmp);
    len = size_without_blank(tmp);
  }

  res = (char *)malloc(sizeof(char) * (len + 1));
  if (!res)
    return (NULL);
  res = ft_strncpy(res, tmp, len);
  res[len] = 0;

  return (res);
}

// int main(void)
// {
// 	char *str = "    \t salit   \0  ";
// 	char *res;
// 	res = ft_strtrim(str);
// 	printf("%s", res);
// 	return (0);
// }
