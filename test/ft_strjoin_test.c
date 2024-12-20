
int	main(void)
{
	char s1[] = "asd";
	char s2[] = "ssadsa";
	printf("%s\n", ft_strjoin(s1,s2));
	printf("s1 len = %ld\n", ft_strlen(s1));
	printf("s2 len = %ld\n", ft_strlen(s2));
	printf("%ld\n", ft_strlen(ft_strjoin(s1,s2)));
	return (0);
}