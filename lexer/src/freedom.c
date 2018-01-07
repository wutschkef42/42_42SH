

void	freeList(t_list **lst)
{
	t_list	*ptr;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		ptr = *lst;
		free((*lst)->data);
		*lst = (*lst)->next;
		free(ptr);
	}
}

void	freeTab(char **tab)
{
	char	**row;
	int		i;

	if (!tab || !*tab)
		return ;
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}