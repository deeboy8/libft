#include "libft.h"

static int	wordscount(char const *s, char c)
{
	int wordcount;
	
	wordcount = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
			wordcount++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (wordcount);
}

static int	ft_wordlen(char const *s, char c)
{
	int j;

	j = 0;
	while (*s != c && *s != '\0')
	{
		j++;
		s++;
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	char		**newstring;
	int		wordcount;

	if (!s || !c)
		return (NULL);
	wordcount = wordscount(s, c);
	if (!(newstring = (char **)malloc(sizeof(char *) * (wordcount + 1))))
		return (NULL);
	i = 0;
	while (wordcount > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		newstring[i] = ft_strsub(s, 0, ft_wordlen(s, c));
		if (newstring[i] == NULL)
			return (NULL);
		s = s + ft_wordlen(s, c);
		i++;
		wordcount--;
	}
	newstring[i] = 0;
	return (newstring);
}
