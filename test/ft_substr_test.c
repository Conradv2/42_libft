
int main()
{
    char source[] = "GeeksForGeeks";
	char source2[] = "tripouille";

	char *myTarget = ft_substr(source, 3, 3);
	char * s = ft_substr(source2, 0, 42000);
	printf("String = %s\n", source);
	printf("My substr = %s\n", myTarget);
	printf("check 2 = %s\n", s);
	free(myTarget);
    return 0;
}