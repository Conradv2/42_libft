void transform(unsigned int index, char *c) {
    if (index %1 == 0)
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 32;
	}
}

int	main(void)
{
	char	s[] = "siemano kurwa";
	ft_striteri(s, transform);
	printf("%s\n", s);
	return (0);
}