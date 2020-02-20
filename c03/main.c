#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);


int main(void)
{
	char *x;
	char *y;

	x = "abc";
	y = "def";

	printf("ex00:\n");
	printf("ft_ strcmp %d\n", ft_strcmp(x, y));
	printf("strcmp %d\n", strcmp(x, y));
	printf("===========\n");
	printf("ex01:\n");
	printf("ft_ strncmp %d\n", ft_strncmp(x, y, 5));
	printf("strncmp %d\n", strncmp(x, y, 5));
	printf("===========\n");
	
	printf("ex02:\n");
	char str1[20] = {'a','b','\0'};
	char str2[10] = {'c','d'};
	printf("strcat %s\n", strcat(str1, str2));
	printf("strcat %s\n", str1);
	printf("ft_strcat * %s\n", ft_strcat(str1, str2));
	printf("ft_strcat dest %s\n", str1);
	printf("===========\n");
	printf("ex03:\n");
	char str3[20] = {'a','b','\0'};
	char str4[10] = {'c','d'};
	printf("strncat %s\n", strncat(str3, str4, 4));
	printf("strncat %s\n", str3);
	printf("ft_strncat * %s\n", ft_strncat(str3, str4, 6));
	printf("ft_strncat dest %s\n", str3);
	printf("===========\n");
	printf("ex04:\n");
	char y1[10]="";
	char z1[10]="";
	printf("strstr %s\n", strstr(y1, z1));
	printf("ft_strstr %s\n", ft_strstr(y1, z1));
	char y2[3]="aaa";
	char z2[1]="";
	printf("strstr %s\n", strstr(y2, z2));
	printf("ft_strstr %s\n", ft_strstr(y2, z2));
	char y21[10]="aaa";
	char z21[1]="";
	printf("strstr %s\n", strstr(y21, z21));
	printf("ft_strstr %s\n", ft_strstr(y21, z21));
	char y3[10]="";
	char z3[10]="aaa";
	printf("strstr %s\n", strstr(y3, z3));
	printf("ft_strstr %s\n", ft_strstr(y3, z3));
	char y4[10]="aaa";
	char z4[10]="aaa";
	printf("strstr %s\n", strstr(y4, z4));
	printf("ft_strstr %s\n", ft_strstr(y4, z4));
	char y5[10]="1234";
	char z5[10]="1";
	printf("strstr %s\n", strstr(y5, z5));
	printf("ft_strstr %s\n", ft_strstr(y5, z5));
	char y6[10]="1234";
	char z6[10]="2";
	printf("strstr %s\n", strstr(y6, z6));
	printf("ft_strstr %s\n", ft_strstr(y6, z6));
	char y7[10]="1234";
	char z7[1]="2";
	printf("strstr %s\n", strstr(y7, z7));
	printf("ft_strstr %s\n", ft_strstr(y7, z7));
	char y8[2]="2";
	char z8[2]="2";
	printf("strstr %s\n", strstr(y8, z8));
	printf("ft_strstr %s\n", ft_strstr(y8, z8));
	printf("**************\n");
	printf("ex05:\n");
	//char y_05_1[5] = "abc";
	//char z_05_1[5] = "def";
	char y_05_2[5] = "abc";
	char z_05_2[5] = "def";
	//printf("1 strlcat %lu\n", strlcat(y_05_1, z_05_1, 4));
	//printf("1 strlcat %s\n", y_05_1);
	printf("1 ft_strlcat %u\n", ft_strlcat(y_05_2, z_05_2, 5));
	printf("1 ft_strlcat %s\n", y_05_2);
	//char y_05_3[5] = "abc";
	//char z_05_3[5] = "def";
	char y_05_4[5] = "abc";
	char z_05_4[5] = "def";
	//printf("2 strlcat %lu\n", strlcat(y_05_3, z_05_3, 2));
	//printf("2 strlcat %s\n", y_05_3);
	printf("2 ft_strlcat %u\n", ft_strlcat(y_05_4, z_05_4, 2));
	printf("2 ft_strlcat %s\n", y_05_4);

}
