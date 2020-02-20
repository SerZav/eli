#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);


int main(void)
{
	char x[10];
	char *y;
	char xx[10];
	char *yy;

	y = "prueba123123";
	yy = "prueba123123";
	strcpy(x,y);
	printf("strcopy original -%s-\n",x);
	ft_strcpy(xx,yy);
	printf("ft?strcpy -%s-\n",xx);

	char x2[10];
	char *y2;
	y2 = "otraprueba";
	ft_strncpy(x2,y2,5);
	//strncpy(x2,y2,5);
	printf("strncopy -%s-\n",x2);

	printf("EX02\n");
	printf("==============\n");
	printf("ft_str_is_alpha: %d\n", ft_str_is_alpha(""));
	printf("EX03\n");
	printf("==============\n");
	printf("ft_str_is_numeric: %d\n", ft_str_is_numeric("012398"));
	printf("EX04\n");
	printf("==============\n");
	printf("ft_str_is_lowercase: %d\n", ft_str_is_numeric(""));
	printf("EX05\n");
	printf("==============\n");
	printf("ft_str_is_uppercase: %d\n", ft_str_is_uppercase("A"));
	printf("EX06\n");
	printf("==============\n");
	char abc[2] = {'~'+1,'\0'}; 
	printf("ft_str_is_printable: %d\n", ft_str_is_printable(abc));
	printf("isprint: %d\n", isprint(127));
	printf("EX07\n");
	printf("==============\n");
	char strup[5] = {'a','b','C','\0'};
	printf("ft_strupcase: %s\n", ft_strupcase(strup));
	printf("EX08\n");
	printf("==============\n");
	char strlow[5] = {'a','B','C','\0'};
	printf("ft_strlowcase: %s\n", ft_strlowcase(strlow));
	char yy3[] = "esta es 42una-prueba pru3ba";
	printf("EX09\n");
	printf("==============\n");
	printf("ft_strcapitalize: %s\n", ft_strcapitalize(yy3));
}
