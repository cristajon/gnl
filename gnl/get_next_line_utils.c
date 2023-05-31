
char	*ft_strdup(const char *s1)
{
	size_t	cont;
	char	*location;

	cont = ft_strlen(s1);
	location = malloc(cont + 1);
	if (!location)
		return (NULL);
	ft_memcpy(location, s1, cont);
	location[cont] = '\0';
	return (location);
}
