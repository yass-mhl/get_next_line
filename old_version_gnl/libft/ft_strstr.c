#include "libft.h"

char *ft_strstr(const char *str, const char *to_find)
{
  unsigned i;
  unsigned j;

  i = 0;
  if (to_find[0] == '\0')
		return ((char *)str);
  while (str[i])
  {
    j = 0;
    while (str[i + j] == to_find[j])
    {
      if(to_find[j + 1] == 0)
        return ((char *)str + i);
      j++;
    }
    i++;
  }
  return (0);
}

// int main(int ac, char **av)
// {
//   (void)ac;
//   printf("%s", ft_strstr(av[1], av[2]));
// }

// int main()
// {
// 	char haystack[20] = "TutorialsPoint";
// 	char needle[10] = "oin";
// 	char *ret;

// 	ret = ft_strstr(haystack, needle);

// 	printf("The substring is: %s\n", ret);
// 	return (0);
// }
