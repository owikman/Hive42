#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	printf("%s", s1);
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	printf("%s", s1);
	return (s1);
}

int		main(void)
{
	char s1[] = "stringone";

	ft_strcpy(s1, "stringtwo");
	return (0);
}
