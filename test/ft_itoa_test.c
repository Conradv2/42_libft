int	main(void)
{
	int a = -123;
	char *x = ft_itoa(a);
	printf("int %d\n", a);
	printf("char %s\n", x);
	free(x);
	return (0);
}