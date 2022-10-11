#include "get_next_line.h"

size_t ft_strlen(char *s)
{
  size_t i;

  i = 0;
  while (s[i])
    i++;
  return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		str = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}

char *ft_strdup(const char *s)
{
  char *tab;
  int len;
  int i;

  i = 0;
  len = 0;

  while (s[len])
    len++;
  tab = (char *)malloc(sizeof(*s) * (len + 1));
  if (!tab)
    return (NULL);
  while (s[i])
  {
    tab[i] = s[i];
    i++;
  }
  tab[i] = 0;
  return (tab);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
  char *res;
  size_t i;

  res = ft_memalloc(len + 1);
  if (!res)
    return (NULL);
  i = 0;
  while (i < len)
  {
    res[i] = s[start];
    i++;
    start++;
  }
  res[i] = 0;

  return (res);
}
