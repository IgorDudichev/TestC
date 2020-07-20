#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int	main()
{
	int s;
	char *str;
	str = "MyClass";
	s = ft_strlen(str);
	printf("%d\n", s);
}
