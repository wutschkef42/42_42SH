
#include "libft.h"

void	printSourceCode(char **sourceCodeTab)
{
	int	i;

	i = 0;
	ft_printf("\n\n");
	ft_printf("\t>>>> SOURCE CODE INPUT <<<<\n\n");
	while (sourceCodeTab[i])
	{
		ft_printf(" %d: [%s]\n", i, sourceCodeTab[i]);
		i++;
	}
	ft_printf("\n\n");
	ft_printf("\t>>>> TOKENIZATION OUTPUT <<<<\n\n");
}