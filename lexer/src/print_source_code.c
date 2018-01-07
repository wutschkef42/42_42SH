
#include "libft.h"

void	printSourceCode(char **sourceCodeTab)
{
	int	i;

	i = 0;
	while (sourceCodeTab[i])
	{
		ft_printf("source line %d: %s\n", i, sourceCodeTab[i]);
		i++;
	}
}