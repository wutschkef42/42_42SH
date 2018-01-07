
#include "libft.h"
#include "freedom.h"
#include "get_next_line.h"

/* load source code from stdin into singly linked list*/
static
t_list	*loadSourceCode2List()
{
	char	*lineBuffer;
	t_list	*sourceCode;

	sourceCode = NULL;
	while (get_next_line(0, &lineBuffer))
	{
		ft_lstadd(&sourceCode, ft_lstnew((void*)lineBuffer, ft_strlen(lineBuffer) + 1));
	}
	return (sourceCode);
}

static
int		listLen(t_list *lst)
{
	int	len;

	len = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

static
char	**dumpSourceCode2Tab(t_list *sourceCodeList)
{
	char	**sourceCodeTab;
	char	*sourceCodeLine;
	int		rows;
	int		i;

	if (!sourceCodeList)
		return (NULL);
	rows = listLen(sourceCodeList);
	if (!(sourceCodeTab = malloc(sizeof(char *) * rows + 1)))
		return (NULL);
	i = 0;
	while (sourceCodeList)
	{
		sourceCodeLine = (char*)(sourceCodeList->data);
		if (!(sourceCodeTab[i] = malloc(sizeof(char) * ft_strlen(sourceCodeLine) + 1)))
			return (NULL);
		ft_strcpy(sourceCodeTab[i], sourceCodeLine);
		i++;
		sourceCodeList = sourceCodeList->next;
	}
	return (sourceCodeTab);
}

/* load source code from stdin */
char	**loadSourceCode()
{
	char	**sourceCodeTab;
	t_list	*sourceCodeList;

	sourceCodeList = loadSourceCode2List();
	sourceCodeTab = dumpSourceCode2Tab(sourceCodeList);
	freeList(&sourceCodeList);
	return (sourceCodeTab);
}