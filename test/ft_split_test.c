void free_split(char **tokens)
{
    if (tokens == NULL)
        return;
    for (int i = 0; tokens[i] != NULL; i++)
        free(tokens[i]);
    free(tokens);
}
int	main(void)
{
	char	str[] = "TEST, CASE";
	char	del = ',';
	char	**token;
	int 	i = 0;

	token = ft_split(str, del);
	if (token == NULL)
	{
		printf("Error\n");
		return (1);
	}
	while (token[i] != NULL)
	{
		printf("Token %d is %s\n", i, token[i]);
		i++;
	}
	free_split(token);
	return (0);
}