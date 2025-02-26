#include <unistd.h>

int ft_str_is_upppercase(char *str)
{

if (srt == NULL || str[0] == '\0')
{
  return 1;
}

while (str[i] != '\0')
{

  if (str[i] < 'A' || str[i] > 'Z')
{
  
    return 0;
}

 i++;
}  
return 1;
}
