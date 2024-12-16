int main(void)
{
    int n = 5;
    char *str;
    
    str = (char *)ft_calloc(n, sizeof(char));
    printf("Array elements after calloc: ");
    for (int i = 0; i < n; i++) {
      printf("%d ", str[i]);
    }
    printf("\n");
    return (0);
}