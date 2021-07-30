char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int				i;
	unsigned int	index;

	index = 0;
	i = 0;
	while (src[i] != '\0' && index < n)
	{
		dest[i] = src[i];
		i++;
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
