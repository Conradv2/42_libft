int	main(void)
{
	char s1[] = " TEST ";
	char s2[] = " ";

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", ft_strtrim(s1,s2));
	printf("%s\n", s1);
	return (0);
}