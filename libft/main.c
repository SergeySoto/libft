#include <stdio.h>
#include "libft.h"

int	main(void)
{
	//isalpha;
	printf("****Funcion ft_isalpha****\n");
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('3'));
	printf("%d\n", ft_isalpha('+'));
	printf("%d", ft_isalpha(3));

	//isdigit;
	printf("****Funcion ft_isdigit****\n");
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('3'));
	printf("%d\n", ft_isdigit('+'));
	printf("%d", ft_isdigit(3));

	//isalnum;
	printf("****Funcion ft_isalpha****\n");
	printf("%d\n", ft_isalnum('4'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('+'));
	printf("%d", ft_isalnum('A'));

	//isascii;
	printf("****Funcion ft_isascii****\n");
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('3'));
	printf("%d\n", ft_isascii(178));
	printf("%d", ft_isascii(3));

	//isprint;
	printf("****Funcion ft_isprint****\n");
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('3'));
	printf("%d\n", ft_isprint(178));
	printf("%d", ft_isprint('+'));
	
	char	*strlen;
	strlen = "Sergey";
	printf("****Funcion ft_strlen****\n");
	printf("la cadena mide: ");
	printf("%d\n", ft_strlen(strlen));
	
	char	memset[7] = "Sergey";
	printf("****Funcion ft_memset****\n");
	printf("%s\n",memset);
	printf("%s", (char *)ft_memset(memset, '6', 3));

	char	bzero[6]="holaaa";
	ft_bzero(bzero,2);
	int	i = 0;
	printf("****Funcion ft_bzero****\n");
	while (i < 6)
	{
		printf("%c$\n",bzero[i]);
		i++;
	}

	char	memcpy_dest[7];
	char	memcpy_src[] = "Sergey";
	printf("****Funcion ft_memcpy****\n");
	printf("%s\n", memcpy_src);
	printf("%s\n",(char *)ft_memcpy(memcpy_dest,memcpy_src,3));
	printf("%s", memcpy_src);

	char	memmove_dest[] = "Hola";
	char	memmove_src[] = "Sergey";
	printf("****Funcion ft_memmove****\n");
	printf("%s\n", memmove_dest);
	printf("%s\n",(char *)ft_memmove(memmove_dest,memmove_src,3));
	printf("%s", memmove_dest);

	char dst[10];
	char src[] = "Hola";
	printf("****Funcion ft_strlcpy****\n");
	printf("Esto es la cadena dst: %s\n", dst);
	printf("Esto es la cadena src: %s\n", src);
	printf("Esto es el resultado de src: %ld\n", ft_strlcpy(dst,src,2));
	printf("Esto es la cadena dst modificada: %s\n", dst);
	char dst2[10];
	char src2[1];
	printf("****Funcion ft_strlcpy****\n");
	printf("Esto es la cadena dst: %s\n", dst2);
	printf("Esto es la cadena src: %s\n", src2);
	printf("Esto es el resultado de src: %ld\n", ft_strlcpy(dst2,src2,2));
	printf("Esto es la cadena dst modificada: %s\n", dst2);
	
	char dst3[6] = "Ser";
	char src3[] = "gey";
	printf("****Funcion ft_strlcat****\n");
	printf("Cadena dst: %s\n",dst3);
	printf("La suma de src original y size es: %zu\n", ft_strlcat(dst3,src3,6));
	printf("Cadena dst luego de la concatenacion: %s\n",dst3);

	printf("****Funcion ft_toupper****\n");
	printf("%c\n",ft_toupper('A'));
	printf("%c\n",ft_toupper('a'));
	printf("%c\n",ft_toupper('"'));
	printf("%c\n",ft_toupper('4'));

	printf("****Funcion ft_tolower****\n");
	printf("%c\n",ft_tolower('A'));
	printf("%c\n",ft_tolower('a'));
	printf("%c\n",ft_tolower('"'));
	printf("%c\n",ft_tolower('4'));

	printf("****Funcion ft_strchr****\n");
	char	*str = "Hola";
	printf("%s", ft_strchr(str,111));
	printf("%s", ft_strchr(str,108));

	return (0);
}
