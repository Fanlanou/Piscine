#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i] !='\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

/*
int		main(void)
{
	char source[] = "Source string.";
	char destin[] = "Destination string.";
	

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);

	ft_strcpy(destin, source);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, destin);
	return (0);
}
*/
