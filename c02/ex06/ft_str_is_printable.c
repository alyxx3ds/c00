#include <unistd.h>
void int ft_str_is_printable(char *str)
{
  if(str[i] == NULL    str == '\0')
    {
      return 1;
    }
  while(str[i] != '\0')
    {
      if (str[i] < 32 || str[i] > 126)
	{
            return 0;
    }
      i++;
    }
  return 1;
}
