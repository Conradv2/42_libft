char	*strdup( const char *str1 );
int main()
{
    char source[] = "GeeksForGeeks";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source); 
	char *myTarget = ft_strdup(source);

    printf("OG strdup = %s\n", target);
	printf("My strdup = %s\n", myTarget);
    return 0;
}