char transform(unsigned int index, char c)
{
	if (index % 2 == 0)
	{
		if (c >= 'a' && c <= 'z')
			c -= 32;
	}
	return (c);
}
int	main(void)
{
	char const	s[] = "siemano kurwa";
	char	*ptr = ft_strmapi(s, &transform);
	if (ptr != NULL)
	{
		printf("string: %s\n", s);
		printf("ft_strmapi: %s\n", ptr);
		free(ptr);
	}
	return (0);
}