int	main(void)
{
	char s1[] = "            321TESTss      ";
	char s2[] = " ";	
	char *s3 = ft_strtrim(s1,s2);

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	printf("cp = %s\n", s3);
	printf("s1 = %s\n", s1);
	free(s3);
	return (0);
}