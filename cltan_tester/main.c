/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cltan <cltan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 14:55:02 by cltan             #+#    #+#             */
/*   Updated: 2025/12/04 18:04:11 by cltan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	test_isalpha();
static void	test_isdigit();
static void test_isalnum();
static void test_isascii();
static void	test_isprint();
static void	test_strlen();
static void	test_memset();
static void	test_bzero();
static void	test_memcpy();
static void	test_memmove();
static void	test_strlcpy();
static void	test_strlcat();
static void	test_toupper();
static void	test_tolower();
static void	test_strchr();
static void	test_strncmp();
static void	test_memchr();
static void	test_strnstr();
static void	test_atoi();
static void	test_calloc();
static void	test_strdup();
static void	test_substr();
static void	test_strjoin();
static void	test_strtrim();
static void	test_split();
static void	test_itoa();
static void	test_strmapi();
static void	test_striteri();
static void	test_putnbr_fd();

int	main(void)
{
	test_isalpha();
	printf("\n");

	test_isdigit();
	printf("\n");

	test_isalnum();
	printf("\n");

	test_isascii();
	printf("\n");

	test_isprint();
	printf("\n");

	test_strlen();
	printf("\n");

	test_memset();
	printf("\n");

	test_bzero();
	printf("\n");

	test_memcpy();
	printf("\n");

	test_memmove();
	printf("\n\n");

	test_strlcpy();
	printf("\n");

	test_strlcat();
	printf("\n");

	test_toupper();
	printf("\n");

	test_tolower();
	printf("\n");

	test_strchr();
	printf("\n");

	test_strncmp();
	printf("\n");

	test_memchr();
	printf("\n");

	test_strnstr();
	printf("\n");

	test_atoi();
	printf("\n");

	test_calloc();
	printf("\n");

	test_strdup();
	printf("\n");

	test_substr();
	printf("\n");

	test_strjoin();
	printf("\n");

	test_strtrim();
	printf("\n");

	test_split();
	printf("\n");

	test_itoa();
	printf("\n");

	test_strmapi();
	printf("\n");

	test_striteri();
	printf("\n");

	test_putnbr_fd();
	printf("\n");
}

static void	test_isalpha(void)
{
	printf("=== ft_isalpha ===\n");
	char c;

	c = 'a';
	printf("Char: %d, Org: %d, ft: %d\n", c, isalpha(c), ft_isalpha(c));
	c = 'A';
	printf("Char: %d, Org: %d, ft: %d\n", c, isalpha(c), ft_isalpha(c));
	c = '0';
	printf("Char: %d, Org: %d, ft: %d\n", c, isalpha(c), ft_isalpha(c));
	c = '@';
	printf("Char: %d, Org: %d, ft: %d\n", c, isalpha(c), ft_isalpha(c));
	c = '\\';
	printf("Char: %d, Org: %d, ft: %d\n", c, isalpha(c), ft_isalpha(c));
}

static void	test_isdigit(void)
{
	printf("=== ft_isdigit ===\n");
	char c;

	c = '0';
	printf("Char: %c, Org: %d, ft: %d\n", c, isdigit(c), ft_isdigit(c));
	c = '9';
	printf("Char: %c, Org: %d, ft: %d\n", c, isdigit(c), ft_isdigit(c));
	c = 'A';
	printf("Char: %c, Org: %d, ft: %d\n", c, isdigit(c), ft_isdigit(c));
	c = '\\';
	printf("Char: %c, Org: %d, ft: %d\n", c, isdigit(c), ft_isdigit(c));
}

static void	test_isalnum(void)
{
	printf("=== ft_isalnum ===\n");
	char c;

	c = '0';
	printf("Char: %c, Org: %d, ft: %d\n", c, isalnum(c), ft_isalnum(c));
	c = '9';
	printf("Char: %c, Org: %d, ft: %d\n", c, isalnum(c), ft_isalnum(c));
	c = 'A';
	printf("Char: %c, Org: %d, ft: %d\n", c, isalnum(c), ft_isalnum(c));
	c = 'a';
	printf("Char: %c, Org: %d, ft: %d\n", c, isalnum(c), ft_isalnum(c));
	c = 'z';
	printf("Char: %c, Org: %d, ft: %d\n", c, isalnum(c), ft_isalnum(c));
	c = 'Z';
	printf("Char: %c, Org: %d, ft: %d\n", c, isalnum(c), ft_isalnum(c));
	c = '\\';
	printf("Char: %c, Org: %d, ft: %d\n", c, isalnum(c), ft_isalnum(c));
	c = '@';
	printf("Char: %c, Org: %d, ft: %d\n", c, isalnum(c), ft_isalnum(c));
}

static void	test_isascii(void)
{
	printf("=== ft_isascii ===\n");
	char c;

	c = '0';
	printf("Char: %c, Org: %d, ft: %d\n", c, isascii(c), ft_isascii(c));
	c = '9';
	printf("Char: %c, Org: %d, ft: %d\n", c, isascii(c), ft_isascii(c));
	c = 'A';
	printf("Char: %c, Org: %d, ft: %d\n", c, isascii(c), ft_isascii(c));
	c = 'a';
	printf("Char: %c, Org: %d, ft: %d\n", c, isascii(c), ft_isascii(c));
	c = 127;
	printf("Char: %c, Org: %d, ft: %d\n", c, isascii(c), ft_isascii(c));
	c = -1;
	printf("Char: %c, Org: %d, ft: %d\n", c, isascii(c), ft_isascii(c));
	c = -30;
	printf("Char: %c, Org: %d, ft: %d\n", c, isascii(c), ft_isascii(c));
}

static void	test_isprint(void)
{
	printf("=== ft_isprint ===\n");
	char c;

	c = ' ';
	printf("Char: %c, Org: %d, ft: %d\n", c, isprint(c), ft_isprint(c));
	c = '~';
	printf("Char: %c, Org: %d, ft: %d\n", c, isprint(c), ft_isprint(c));
	c = 'a';
	printf("Char: %c, Org: %d, ft: %d\n", c, isprint(c), ft_isprint(c));
	c = 43;
	printf("Char: %c, Org: %d, ft: %d\n", c, isprint(c), ft_isprint(c));
	c = 31;
	printf("Char: %c, Org: %d, ft: %d\n", c, isprint(c), ft_isprint(c));
	c = 127;
	printf("Char: %c, Org: %d, ft: %d\n", c, isprint(c), ft_isprint(c));
	c = -1;
	printf("Char: %c, Org: %d, ft: %d\n", c, isprint(c), ft_isprint(c));
}

static	void test_strlen(void)
{
	printf("=== ft_strlen ===\n");

	char *str1 = "Hello";
	printf("Test: %s, org: %ld, ft: %ld\n", str1, strlen(str1), ft_strlen(str1));
	char *str2 = " ";
	printf("Test: %s, org: %ld, ft: %ld\n", str2, strlen(str2), ft_strlen(str2));
	char *str3 = "";
	printf("Test: %s, org: %ld, ft: %ld\n", str3, strlen(str3), ft_strlen(str3));
	char *str4 = "123456789";
	printf("Test: %s, org: %ld, ft: %ld\n", str4, strlen(str4), ft_strlen(str4));
	char *str5 = "\0";
	printf("Test: %s, org: %ld, ft: %ld\n", str5, strlen(str5), ft_strlen(str5));
}

static void	test_memset(void)
{
	printf("=== ft_memset ===\n");

	char	orgsrc[20] = "Hello World";
	char	ftsrc[20] = "Hello World";

	memset(orgsrc, 'o', 3);
	ft_memset(ftsrc, 'o', 3);
	printf("Result - Org: %s, ft: %s\n", orgsrc, ftsrc);

	memset(orgsrc, 'x', 15);
	ft_memset(ftsrc, 'x', 15);
	printf("Result - Org: %s, ft: %s\n", orgsrc, ftsrc);
	
	memset(orgsrc, '~', 5);
	ft_memset(ftsrc, '~', 5);
	printf("Result - Org: %s, ft: %s\n", orgsrc, ftsrc);
}

static void	test_bzero(void)
{
	printf("=== ft_bzero ===\n");

	char	str1[20] = "abcdef";
	char	str2[20] = "abcdef";

	bzero(str1, 4);
	ft_bzero(str2, 4);

	printf("Orginal: %s", str1);
	printf("ft: %s\n", str2);ft_memcmp : -19

	===== TEST 4: Difference after a '\0' =====
	memcmp    : -21
	ft_memcmp : -21
	
}
static void	test_memcpy(void)
{
	printf("=== ft_memcpy ===\n");

	char s[] = "abcdefghijklmnopqrstuvwxyz";
	char d[27];
	char f[27];

	printf("S: %s\n", s);
	memcpy(d, s, sizeof(char) * 27);
	printf("size_t n: 27, Org: %s\n", d);
	ft_memcpy(f, s, sizeof(char) * 27);
	printf("size_t n: 27, ft: %s\n", d);

	char e[10];
	memcpy(e, s+8, sizeof(char) * 9);
	e[9] = '\0';
	printf("size_t n: 9, e: %s\n", e);
	char h[10];
	ft_memcpy(h, s+8, sizeof(char) * 9);
	e[9] = '\0';
	printf("size_t n: 9, h: %s\n", e);
}

static void	test_memmove(void)
{
	int src1[10] = {1,2,3,4,5,6,7,8,9,10};
	int dest1[10];
	int dest2[10];
	int dest3[10];
	int dest4[10];

	memmove(dest1, src1, sizeof(int) * 10);
	ft_memmove(dest2, src1, sizeof(int) * 10);
	memmove(dest3, src1 + 2, sizeof(int) * 10);
	ft_memmove(dest4, src1 + 2, sizeof(int) * 10);

	printf("=== ft_memmove ===\n\n");
	printf("Src1:\t");
	for (int i = 0; i < 10; i++)
		printf("[%d]=%d ", i, src1[i]);
	
	printf("\nOrg1:\t");
	for (int i = 0; i < 10; i++)
		printf("[%d]=%d ", i, dest1[i]);

	printf("\nft1:\t");
	for (int i = 0; i < 10; i++)
		printf("[%d]=%d ", i, dest2[i]);
	
	printf("\nOrg1+2:\t");
	for (int i = 0; i < 10; i++)
		printf("[%d]=%d ", i, dest3[i]);

	printf("\nft1+2:\t");
	for (int i = 0; i < 10; i++)
		printf("[%d]=%d ", i, dest4[i]);

	char base[20] = "ABCDEFGHIJ";
	char org[20];
	char ft[20];
	char org2[20];
	char ft2[20];

	memmove(org, base, 8);
	ft_memmove(ft, base, 8);
	memmove(org2, base + 3, 8);
	ft_memmove(ft2, base + 3, 8);

	printf("\n\nSrc2:\t");
	for (int i = 0; i < 8; i++)
		printf("[%d]=%c ", i, base[i]);

	printf("\nOrg5:\t");
	for (int i = 0; i < 8; i++)
		printf("[%d]=%c ", i, org[i]);

	printf("\nft6:\t");
	for (int i = 0; i < 8; i++)
		printf("[%d]=%c ", i, ft[i]);

	printf("\nOrg7+3:\t");
	for (int i = 0; i < 8; i++)
		printf("[%d]=%c ", i, org2[i]);

	printf("\nft8+3:\t");
	for (int i = 0; i < 8; i++)
		printf("[%d]=%c ", i, ft2[i]);
}

static void	test_strlcpy(void)
{
	char dest1[20] = "AAAAAAAAAAAAAAAAAAA";
	char dest2[20] = "BBBBBBBBBBBBBBBBBBB";

	const char *src = "HelloWorld123";

	size_t size = 6;   // <-- try different sizes here (0, 1, 4, 6, 20)

	printf("=== ft_strlcpy ===\n\n");

	printf("Source: %s\n", src);
	printf("org_dest: %s | ft_dest: %s\n", dest1, dest2);
	printf("Size: %zu\n\n", size);
	
	size_t ret1 = strlcpy(dest1, src, size);
	size_t ret2 = ft_strlcpy(dest2, src, size);

	printf("---- Original ----\n");
	printf("Return: %zu\n", ret1);
	printf("Dest1: \"%s\"\n", dest1);

	printf("\n---- ft ----\n");
	printf("Return: %zu\n", ret2);
	printf("Dest2: \"%s\"\n", dest2);
}

static void	test_strlcat(void)
{
	printf("=== ft_strlcat ===\n\n");
	char dst1[20] = "Hello";
	char dst2[20] = "Hello";
	char src1[20] = "World";
	char src2[20] = "World";

	printf("Case 1, normal append.\n");
	printf("Dest | Or: %s, ft: %s\n", dst1, dst2);
	printf("Src  | Or: %s, ft: %s\n", src1, src2);
	size_t r1 = strlcat(dst1, src1, sizeof(dst1));
	size_t r2 = ft_strlcat(dst2, src2, sizeof(dst2));

	printf("Org: %s, ft: %s\n", dst1, dst2);
	printf("Org: %zu, ft: %zu\n\n", r1, r2);

	char dst3[10] = "Hello";
	char dst4[10] = "Hello";
	char src3[20] = "World!";
	char src4[20] = "World!";

	printf("Case 2, short buffer.\n");
	printf("Dest | Or: %s, ft: %s\n", dst3, dst4);
	printf("Src  | Or: %s, ft: %s\n", src4, src4);
	size_t r3 = strlcat(dst3, src3, sizeof(dst3));
	size_t r4 = ft_strlcat(dst4, src4, sizeof(dst4));

	printf("Org: %s, ft: %s\n", dst3, dst4);
	printf("Org: %zu, ft: %zu\n\n", r3, r4);

	char dst5[10] = "Hello";
	char dst6[10] = "Hello";
	char src5[20] = "ABC";
	char src6[20] = "ABC";

	printf("Case 3, size = 0.\n");
	printf("Dest | Or: %s, ft: %s\n", dst5, dst6);
	printf("Src  | Or: %s, ft: %s\n", src5, src6);
	size_t r5 = strlcat(dst5, src5, 0);
	size_t r6 = ft_strlcat(dst6, src6, 0);

	printf("Org: %s, ft: %s\n", dst5, dst6);
	printf("Org: %zu, ft: %zu\n\n", r5, r6);
}

static void	test_toupper()
{
	printf("=== ft_toupper ===\n\n");
	char c;

	c = 'a';
	printf("Char: %c, Org: %c, ft: %c\n", c, toupper(c), ft_toupper(c));
	c = 'A';
	printf("Char: %c, Org: %c, ft: %c\n", c, toupper(c), ft_toupper(c));
	c = 'w';
	printf("Char: %c, Org: %c, ft: %c\n", c, toupper(c), ft_toupper(c));
	c = '0';
	printf("Char: %c, Org: %c, ft: %c\n", c, toupper(c), ft_toupper(c));
	c = ' ';
	printf("Char: %c, Org: %c, ft: %c\n", c, toupper(c), ft_toupper(c));
	c = '@';
	printf("Char: %c, Org: %c, ft: %c\n", c, toupper(c), ft_toupper(c));
	c = '\\';
	printf("Char: %c, Org: %c, ft: %c\n", c, toupper(c), ft_toupper(c));
}

static void	test_tolower()
{
	printf("=== ft_tolower ===\n\n");
	char c;

	c = 'a';
	printf("Char: %c, Org: %c, ft: %c\n", c, tolower(c), ft_tolower(c));
	c = 'A';
	printf("Char: %c, Org: %c, ft: %c\n", c, tolower(c), ft_tolower(c));
	c = 'w';
	printf("Char: %c, Org: %c, ft: %c\n", c, tolower(c), ft_tolower(c));
	c = 'W';
	printf("Char: %c, Org: %c, ft: %c\n", c, tolower(c), ft_tolower(c));
	c = '0';
	printf("Char: %c, Org: %c, ft: %c\n", c, tolower(c), ft_tolower(c));
	c = ' ';
	printf("Char: %c, Org: %c, ft: %c\n", c, tolower(c), ft_tolower(c));
	c = '@';
	printf("Char: %c, Org: %c, ft: %c\n", c, tolower(c), ft_tolower(c));
	c = '\\';
	printf("Char: %c, Org: %c, ft: %c\n", c, tolower(c), ft_tolower(c));
}

static void	test_strchr()
{
	printf("=== ft_strchr ===\n");
	const char *strings[] = {
		"Hello",
		"42 School",
		"Testing",
		"",
		"abcabc",
		"End\0Char"
	};

	char searches[] = { 'H', 'o', 'S', '\0', 'c', 'd' };

	// Only 1-to-1 mapping for clarity
	for (int i = 0; i < 6; i++)
	{
		char *org = strchr(strings[i], searches[i]);
		char *ft  = ft_strchr(strings[i], searches[i]);

		printf("String: %s\n", strings[i]);
		printf("Search: '%c'\n", searches[i] ? searches[i] : '\0');
		printf("Org: %s | ft: %s\n\n",
			   org ? org : "NULL",
			   ft ? ft : "NULL");
	}
}

static void	test_strncmp()
{
	printf("=== ft_strncmp ===\n");
	int r1, r2;

	printf("Test 1: equal strings\n");
	printf("s1: \"abc\" | s2: \"abc\"\n");
	r1 = strncmp("abc", "abc", 3);
	r2 = ft_strncmp("abc", "abc", 3);
	printf("strncmp = %d | ft_strncmp = %d\n\n", r1, r2);

	printf("Test 2: differ before n\n");
	printf("s1: \"abc\" | s2: \"abd\"\n");
	r1 = strncmp("abc", "abd", 3);
	r2 = ft_strncmp("abc", "abd", 3);
	printf("strncmp = %d | ft_strncmp = %d\n\n", r1, r2);

	printf("Test 3: second shorter\n");
	printf("s1: \"abc\" | s2: \"ab\"\n");
	r1 = strncmp("abc", "ab", 3);
	r2 = ft_strncmp("abc", "ab", 3);
	printf("strncmp = %d | ft_strncmp = %d\n\n", r1, r2);

	printf("Test 4: empty vs non-empty\n");
	printf("s1: \"\" | s2: \"abc\"\n");
	r1 = strncmp("", "abc", 3);
	r2 = ft_strncmp("", "abc", 3);
	printf("strncmp = %d | ft_strncmp = %d\n\n", r1, r2);

	printf("Test 5: n = 0\n");
	printf("s1: \"abcdef\" | s2: \"abcxyz\"\n");
	r1 = strncmp("abcdef", "abcxyz", 0);
	r2 = ft_strncmp("abcdef", "abcxyz", 0);
	printf("strncmp = %d | ft_strncmp = %d\n\n", r1, r2);
}
static void	test_memchr()
{
	printf("=== ft_memchr ===\n\n");
	char str1[] = "Hello World!";
	char str2[] = "ABCDE\0FGHIJ";
	char str3[] = "Testing 123";

	printf("===== TEST 1: Normal find =====\n");
	printf("Searching 'o' in \"%s\" (n = 12)\n", str1);
	printf("memchr    : %p -> '%c'\n", memchr(str1, 'o', 12), *(char*)memchr(str1, 'o', 12));
	printf("ft_memchr : %p -> '%c'\n\n", ft_memchr(str1, 'o', 12), *(char*)ft_memchr(str1, 'o', 12));


	printf("===== TEST 2: Find last character =====\n");
	printf("Searching '!' in \"%s\" (n = 12)\n", str1);
	printf("memchr    : %p -> '%c'\n", memchr(str1, '!', 12), *(char*)memchr(str1, '!', 12));
	printf("ft_memchr : %p -> '%c'\n\n", ft_memchr(str1, '!', 12), *(char*)ft_memchr(str1, '!', 12));


	printf("===== TEST 3: Character not found =====\n");
	printf("Searching 'Z' in \"%s\" (n = 12)\n", str1);
	printf("memchr    : %p\n", memchr(str1, 'Z', 12));
	printf("ft_memchr : %p\n\n", ft_memchr(str1, 'Z', 12));


	printf("===== TEST 4: Searching for '\\0' inside buffer =====\n");
	printf("Searching '\\0' in \"ABCDE\\0FGHIJ\" (n = 10)\n");
	printf("memchr    : %p\n", memchr(str2, '\0', 10));
	printf("ft_memchr : %p\n\n", ft_memchr(str2, '\0', 10));


	printf("===== TEST 5: n = 0 (edge case) =====\n");
	printf("Searching 'T' in \"%s\" (n = 0)\n", str3);
	printf("memchr    : %p\n", memchr(str3, 'T', 0));
	printf("ft_memchr : %p\n\n", ft_memchr(str3, 'T', 0));
}

static void	test_memcmp()
{
	printf("=== ft_memcmp ===\n\n");
	char a1[] = "Hello";
	char a2[] = "Hello";

	char b1[] = "Hello";
	char b2[] = "Hella";

	char c1[] = "ABCDEF";
	char c2[] = "ABCDXY";

	char d1[] = "AB\0CD";
	char d2[] = "AB\0XY";

	char e1[] = "Test";
	char e2[] = "Te";
	
	printf("===== TEST 1: Equal strings =====\n");
	printf("memcmp    : %d\n", memcmp(a1, a2, 5));
	printf("ft_memcmp : %d\n\n", ft_memcmp(a1, a2, 5));


	printf("===== TEST 2: First difference early =====\n");
	printf("memcmp    : %d\n", memcmp(b1, b2, 5));
	printf("ft_memcmp : %d\n\n", ft_memcmp(b1, b2, 5));


	printf("===== TEST 3: Difference near the end =====\n");
	printf("memcmp    : %d\n", memcmp(c1, c2, 6));
	printf("ft_memcmp : %d\n\n", ft_memcmp(c1, c2, 6));


	printf("===== TEST 4: Difference after a '\\0' =====\n");
	printf("memcmp    : %d\n", memcmp(d1, d2, 5));
	printf("ft_memcmp : %d\n\n", ft_memcmp(d1, d2, 5));


	printf("===== TEST 5: n = 0 =====\n");
	printf("memcmp    : %d\n", memcmp(a1, a2, 0));
	printf("ft_memcmp : %d\n\n", ft_memcmp(a1, a2, 0));


	printf("===== TEST 6: One string shorter =====\n");
	printf("memcmp    : %d\n", memcmp(e1, e2, 4));
	printf("ft_memcmp : %d\n\n", ft_memcmp(e1, e2, 4));
}

static void	test_strnstr()
{
	printf("=== ft_strnstr ===\n\n");
	char hay1[] = "Hello World!";
	char hay2[] = "StartMiddleEnd";
	char hay3[] = "NothingHere";

	printf("===== TEST 1: Needle in middle =====\n");
	printf("strnstr    : %s\n", strnstr(hay1, "World", 12));
	printf("ft_strnstr : %s\n\n", ft_strnstr(hay1, "World", 12));

	printf("===== TEST 2: Needle at start =====\n");
	printf("strnstr    : %s\n", strnstr(hay2, "Start", 15));
	printf("ft_strnstr : %s\n\n", ft_strnstr(hay2, "Start", 15));

	printf("===== TEST 3: Needle at end =====\n");
	printf("strnstr    : %s\n", strnstr(hay2, "End", 15));
	printf("ft_strnstr : %s\n\n", ft_strnstr(hay2, "End", 15));

	printf("===== TEST 4: Needle not found =====\n");
	printf("strnstr    : %s\n", strnstr(hay3, "FindMe", 10));
	printf("ft_strnstr : %s\n\n", ft_strnstr(hay3, "FindMe", 10));

	printf("===== TEST 5: Empty needle =====\n");
	printf("strnstr    : %s\n", strnstr(hay1, "", 12));
	printf("ft_strnstr : %s\n\n", ft_strnstr(hay1, "", 12));

	printf("===== TEST 6: n smaller than haystack =====\n");
	printf("strnstr    : %s\n", strnstr(hay1, "World", 5));
	printf("ft_strnstr : %s\n\n", ft_strnstr(hay1, "World", 5));
}

static void	test_atoi()
{
	printf("=== ft_atoi ===\n\n");
    const char *tests[] = {
        "42",               // normal positive
        "-42",              // normal negative
        "   123",           // leading spaces
        "   -123",          // spaces + negative
        "+77",              // explicit +
        "0",                // zero
        "000123",           // leading zeros
        "   \t\n  56",      // mixed whitespaces
        "123abc456",        // stops at non-digit
        "--123",            // invalid double minus
        "2147483647",       // INT MAX
        "-2147483648",      // INT MIN
        "99999999999",      // overflow
        "-99999999999"      // underflow
    };

    int total = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < total; i++)
    {
        printf("===== Test %d =====\n", i + 1);
        printf("Input: \"%s\"\n", tests[i]);
        printf("atoi:     %d\n", atoi(tests[i]));
        printf("ft_atoi:  %d\n", ft_atoi(tests[i]));
        printf("\n");
    }
}

static void	test_calloc()
{
	printf("=== ft_calloc ===\n\n");
    /* TEST 1 — Normal allocation */
    printf("===== TEST 1: Normal (count=4, size=4) =====\n");
    unsigned char *a1 = calloc(4, 4);
    unsigned char *b1 = ft_calloc(4, 4);
    printf("calloc ptr:    %p  content: [ ", a1);
    for (int i = 0; i < 8; i++) printf("%d ", a1[i]);
    printf("]\n");
    printf("ft_calloc ptr: %p  content: [ ", b1);
    for (int i = 0; i < 8; i++) printf("%d ", b1[i]);
    printf("]\n\n");
    free(a1); free(b1);


    /* TEST 2 — Zero count */
    printf("===== TEST 2: Zero count (count=0, size=10) =====\n");
    unsigned char *a2 = calloc(0, 10);
    unsigned char *b2 = ft_calloc(0, 10);
    printf("calloc ptr:    %p  content: [ %d ]\n", a2, a2[0]);
    printf("ft_calloc ptr: %p  content: [ %d ]\n\n", b2, b2[0]);
    free(a2); free(b2);


    /* TEST 3 — Zero size */
    printf("===== TEST 3: Zero size (count=10, size=0) =====\n");
    unsigned char *a3 = calloc(10, 0);
    unsigned char *b3 = ft_calloc(10, 0);
    printf("calloc ptr:    %p  content: [ %d ]\n", a3, a3[0]);
    printf("ft_calloc ptr: %p  content: [ %d ]\n\n", b3, b3[0]);
    free(a3); free(b3);


    /* TEST 4 — Both zero */
    printf("===== TEST 4: Zero (count=0, size=0) =====\n");
    unsigned char *a4 = calloc(0, 0);
    unsigned char *b4 = ft_calloc(0, 0);
    printf("calloc ptr:    %p  content: [ %d ]\n", a4, a4[0]);
    printf("ft_calloc ptr: %p  content: [ %d ]\n\n", b4, b4[0]);
    free(a4); free(b4);


    /* TEST 5 — Zeroed memory check */
    printf("===== TEST 5: Zeroed memory check (count=5, size=1) =====\n");
    unsigned char *a5 = calloc(5, 1);
    unsigned char *b5 = ft_calloc(5, 1);
    printf("calloc content: [ ");
    for (int i = 0; i < 5; i++) printf("%d ", a5[i]);
    printf("]\n");
    printf("ft_calloc content: [ ");
    for (int i = 0; i < 5; i++) printf("%d ", b5[i]);
    printf("]\n\n");
    free(a5); free(b5);


    /* TEST 6 — Large allocation */
    printf("===== TEST 6: Large allocation (count=1000, size=50) =====\n");
    void *a6 = calloc(1000, 50);
    void *b6 = ft_calloc(1000, 50);
    printf("calloc ptr:    %p\n", a6);
    printf("ft_calloc ptr: %p\n\n", b6);
    free(a6); free(b6);
}

static void	test_strdup()
{
	printf("=== ft_strdup ===\n\n");
    const char *cases[] = {
        "Hello, World!",
        "",
        "42",
        "This is a longer string to test strdup",
        "Special chars !@#$^&*()_+",
        NULL
    };

    for (int i = 0; cases[i] != NULL; i++)
    {
        char *original = strdup(cases[i]);
        char *mine     = ft_strdup(cases[i]);

        printf("===== TEST %d =====\n", i + 1);
        printf("Original : \"%s\" at %p\n", original, (void *)original);
        printf("ft_strdup: \"%s\" at %p\n\n", mine, (void *)mine);

        free(original);
        free(mine);
    }
}

static void	test_substr()
{
	printf("=== ft_substr ===\n\n");
    char s1[] = "HelloWorld";
    char s2[] = "abcdef";
    char s3[] = "test";
    char s4[] = "";
    char s5[] = "abc\0def";   // internal null test
    char s6[] = "EdgeCase";

    char *res;

    /* CASE 1 — Normal substring */
    printf("===== CASE 1: Normal substring =====\n");
    res = ft_substr(s1, 2, 4);
    printf("Input: \"%s\", start=2, len=4\n", s1);
    printf("Output: \"%s\"\n\n", res);
    free(res);

    /* CASE 2 — Start at 0 */
    printf("===== CASE 2: Start at 0 =====\n");
    res = ft_substr(s1, 0, 5);
    printf("Input: \"%s\", start=0, len=5\n", s1);
    printf("Output: \"%s\"\n\n", res);
    free(res);

    /* CASE 3 — Middle extraction */
    printf("===== CASE 3: Mid extraction =====\n");
    res = ft_substr(s2, 3, 2);
    printf("Input: \"%s\", start=3, len=2\n", s2);
    printf("Output: \"%s\"\n\n", res);
    free(res);

    /* CASE 4 — Start > length (should return empty string) */
    printf("===== CASE 4: Start > strlen =====\n");
    res = ft_substr(s3, 10, 5);
    printf("Input: \"%s\", start=10, len=5\n", s3);
    printf("Output: \"%s\"\n\n", res);
    free(res);

    /* CASE 5 — Len too big (should cut at end) */
    printf("===== CASE 5: Len too large =====\n");
    res = ft_substr(s1, 4, 100);
    printf("Input: \"%s\", start=4, len=100\n", s1);
    printf("Output: \"%s\"\n\n", res);
    free(res);

    /* CASE 6 — Empty string */
    printf("===== CASE 6: Empty string =====\n");
    res = ft_substr(s4, 0, 5);
    printf("Input: \"%s\", start=0, len=5\n", s4);
    printf("Output: \"%s\"\n\n", res);
    free(res);

    /* CASE 7 — len = 0 */
    printf("===== CASE 7: len = 0 =====\n");
    res = ft_substr(s1, 3, 0);
    printf("Input: \"%s\", start=3, len=0\n", s1);
    printf("Output: \"%s\"\n\n", res);
    free(res);

    /* CASE 8 — start == strlen(s) (must return "") */
    printf("===== CASE 8: start == strlen =====\n");
    res = ft_substr(s2, strlen(s2), 5);
    printf("Input: \"%s\", start=strlen, len=5\n", s2);
    printf("Output: \"%s\"\n\n", res);
    free(res);

    /* CASE 9 — Internal NULL char test */
    printf("===== CASE 9: Internal NULL character =====\n");
    res = ft_substr(s5, 0, 6);
    printf("Input: \"abc\\\\0def\", start=0, len=6\n");
    printf("Displayed original: \"%s\"\n", s5);
    printf("Output: \"%s\"\n\n", res);
    free(res);

    /* CASE 10 — Exact end boundary */
    printf("===== CASE 10: Exact end boundary =====\n");
    res = ft_substr(s6, 4, 4); // "Case"
    printf("Input: \"%s\", start=4, len=4\n", s6);
    printf("Output: \"%s\"\n\n", res);
    free(res);
}

static void	test_strtrim()
{
	printf("=== ft_strtrim ===\n\n");
    
	/* Case variables (all variables, no literal in call) */
    char s1[] = "+++Hello World!!+++";
    char set1[] = "+!";

    char s2[] = "Hello";
    char set2[] = "+-*/";

    char s3[] = "xxxxxx";
    char set3[] = "x";

    char s4[] = "";
    char set4[] = "abc";

    char s5[] = "   Hello   ";
    char set5[] = "";

    char s6[] = "aaaaTest";
    char set6[] = "a";

    char s7[] = "Testbbb";
    char set7[] = "b";

    char s8[] = " \n\tHello World\t\t ";
    char set8[] = " \n\t";

    /* Internal NUL example: only bytes before NUL are visible when printing */
    char s9[] = { 'a', 'b', 'c', '\0', 'd', 'e', '\0' }; /* "abc" visible */
    char set9[] = "z";

    /* Case 1 */
    printf("===== CASE 1: Basic trimming =====\n");
    printf("Original : \"%s\"\n", s1);
    printf("Set      : \"%s\"\n", set1);
    char *r1 = ft_strtrim(s1, set1);
    printf("ft_trim  : \"%s\"\n\n", r1 ? r1 : "NULL");
    free(r1);

    /* Case 2 */
    printf("===== CASE 2: No trim needed =====\n");
    printf("Original : \"%s\"\n", s2);
    printf("Set      : \"%s\"\n", set2);
    char *r2 = ft_strtrim(s2, set2);
    printf("ft_trim  : \"%s\"\n\n", r2 ? r2 : "NULL");
    free(r2);

    /* Case 3 */
    printf("===== CASE 3: All trimmed -> empty =====\n");
    printf("Original : \"%s\"\n", s3);
    printf("Set      : \"%s\"\n", set3);
    char *r3 = ft_strtrim(s3, set3);
    printf("ft_trim  : \"%s\"\n\n", r3 ? r3 : "NULL");
    free(r3);

    /* Case 4 */
    printf("===== CASE 4: Empty input =====\n");
    printf("Original : \"%s\"\n", s4);
    printf("Set      : \"%s\"\n", set4);
    char *r4 = ft_strtrim(s4, set4);
    printf("ft_trim  : \"%s\"\n\n", r4 ? r4 : "NULL");
    free(r4);

    /* Case 5 */
    printf("===== CASE 5: Empty set (no trimming) =====\n");
    printf("Original : \"%s\"\n", s5);
    printf("Set      : \"%s\"\n", set5);
    char *r5 = ft_strtrim(s5, set5);
    printf("ft_trim  : \"%s\"\n\n", r5 ? r5 : "NULL");
    free(r5);

    /* Case 6 */
    printf("===== CASE 6: Leading trim only =====\n");
    printf("Original : \"%s\"\n", s6);
    printf("Set      : \"%s\"\n", set6);
    char *r6 = ft_strtrim(s6, set6);
    printf("ft_trim  : \"%s\"\n\n", r6 ? r6 : "NULL");
    free(r6);

    /* Case 7 */
    printf("===== CASE 7: Trailing trim only =====\n");
    printf("Original : \"%s\"\n", s7);
    printf("Set      : \"%s\"\n", set7);
    char *r7 = ft_strtrim(s7, set7);
    printf("ft_trim  : \"%s\"\n\n", r7 ? r7 : "NULL");
    free(r7);

    /* Case 8 */
    printf("===== CASE 8: Whitespace trim =====\n");
    printf("Original : \"%s\"\n", s8);
    printf("Set      : \"\\\\n\\\\t and spaces\"\n"); /* show readable set */
    char *r8 = ft_strtrim(s8, set8);
    printf("ft_trim  : \"%s\"\n\n", r8 ? r8 : "NULL");
    free(r8);

    /* Case 9 */
    printf("===== CASE 9: Internal NUL in source =====\n");
    printf("Original (visible part): \"%s\"\n", s9);
    printf("Set      : \"%s\"\n", set9);
    char *r9 = ft_strtrim(s9, set9);
    printf("ft_trim  : \"%s\"\n\n", r9 ? r9 : "NULL");
    free(r9);
}

static void	test_split()
{
	printf("=== ft_split ===\n\n");
    
	int i;

    /* ===================== TEST 1 ===================== */
    printf("===== TEST 1: Normal split =====\n");
    char str1[] = "hello world 42";
    char sep1 = ' ';
    printf("original: \"%s\" | sep: '%c'\n", str1, sep1);

    char **a1 = ft_split(str1, sep1);

    printf("ft_split result:\n");
    for (i = 0; a1[i]; i++)
        printf("  [%d] \"%s\"\n", i, a1[i]);
    printf("  [%d] (NULL)\n\n", i);

    for (i = 0; a1[i]; i++) free(a1[i]);
    free(a1);


    /* ===================== TEST 2 ===================== */
    printf("===== TEST 2: Multiple separators in a row =====\n");
    char str2[] = "   a   b   c   ";
    char sep2 = ' ';
    printf("original: \"%s\" | sep: '%c'\n", str2, sep2);

    char **a2 = ft_split(str2, sep2);

    printf("ft_split result:\n");
    for (i = 0; a2[i]; i++)
        printf("  [%d] \"%s\"\n", i, a2[i]);
    printf("  [%d] (NULL)\n\n", i);

    for (i = 0; a2[i]; i++) free(a2[i]);
    free(a2);


    /* ===================== TEST 3 ===================== */
    printf("===== TEST 3: No separator found =====\n");
    char str3[] = "abcdef";
    char sep3 = ' ';
    printf("original: \"%s\" | sep: '%c'\n", str3, sep3);

    char **a3 = ft_split(str3, sep3);

    printf("ft_split result:\n");
    for (i = 0; a3[i]; i++)
        printf("  [%d] \"%s\"\n", i, a3[i]);
    printf("  [%d] (NULL)\n\n", i);

    for (i = 0; a3[i]; i++) free(a3[i]);
    free(a3);


    /* ===================== TEST 4 ===================== */
    printf("===== TEST 4: Empty string =====\n");
    char str4[] = "";
    char sep4 = ' ';
    printf("original: \"%s\" | sep: '%c'\n", str4, sep4);

    char **a4 = ft_split(str4, sep4);

    printf("ft_split result:\n");
    if (a4[0] == NULL)
        printf("  [0] (NULL)\n\n");
    else
    {
        for (i = 0; a4[i]; i++)
            printf("  [%d] \"%s\"\n", i, a4[i]);
        printf("  [%d] (NULL)\n\n", i);
    }

    free(a4);


    /* ===================== TEST 5 ===================== */
    printf("===== TEST 5: Separator not ASCII (e.g. ',') =====\n");
    char str5[] = "one,two,three,four";
    char sep5 = ',';
    printf("original: \"%s\" | sep: '%c'\n", str5, sep5);

    char **a5 = ft_split(str5, sep5);

    printf("ft_split result:\n");
    for (i = 0; a5[i]; i++)
        printf("  [%d] \"%s\"\n", i, a5[i]);
    printf("  [%d] (NULL)\n\n", i);

    for (i = 0; a5[i]; i++) free(a5[i]);
    free(a5);


    /* ===================== TEST 6 ===================== */
    printf("===== TEST 6: Whole string is separators =====\n");
    char str6[] = ";;;;;;;";
    char sep6 = ';';
    printf("original: \"%s\" | sep: '%c'\n", str6, sep6);

    char **a6 = ft_split(str6, sep6);

    printf("ft_split result:\n");
    if (a6[0] == NULL)
        printf("  [0] (NULL)\n\n");
    else
    {
        for (i = 0; a6[i]; i++)
            printf("  [%d] \"%s\"\n", i, a6[i]);
        printf("  [%d] (NULL)\n\n", i);
    }

    free(a6);
}

static void	test_strjoin()
{
	printf("=== ft_strjoin ===\n\n");
	/* ---------- TEST 1: Normal strings ---------- */
    char s1_1[] = "Hello";
    char s2_1[] = "World";
    printf("TEST 1: Normal join\n");
    printf(" s1 = \"%s\"\n s2 = \"%s\"\n", s1_1, s2_1);

    char *r1 = ft_strjoin(s1_1, s2_1);
    printf(" Result: \"%s\"\n\n", r1);
    free(r1);


    /* ---------- TEST 2: First string empty ---------- */
    char s1_2[] = "";
    char s2_2[] = "NonEmpty";
    printf("TEST 2: Empty s1\n");
    printf(" s1 = \"%s\"\n s2 = \"%s\"\n", s1_2, s2_2);

    char *r2 = ft_strjoin(s1_2, s2_2);
    printf(" Result: \"%s\"\n\n", r2);
    free(r2);


    /* ---------- TEST 3: Second string empty ---------- */
    char s1_3[] = "Prefix";
    char s2_3[] = "";
    printf("TEST 3: Empty s2\n");
    printf(" s1 = \"%s\"\n s2 = \"%s\"\n", s1_3, s2_3);

    char *r3 = ft_strjoin(s1_3, s2_3);
    printf(" Result: \"%s\"\n\n", r3);
    free(r3);


    /* ---------- TEST 4: Both empty ---------- */
    char s1_4[] = "";
    char s2_4[] = "";
    printf("TEST 4: Both empty\n");
    printf(" s1 = \"%s\"\n s2 = \"%s\"\n", s1_4, s2_4);

    char *r4 = ft_strjoin(s1_4, s2_4);
    printf(" Result: \"%s\"\n\n", r4);
    free(r4);


    /* ---------- TEST 5: Special characters ---------- */
    char s1_5[] = "ABC\n";
    char s2_5[] = "\t123";
    printf("TEST 5: Special characters\n");
    printf(" s1 = \"%s\"\n s2 = \"%s\"\n", s1_5, s2_5);

    char *r5 = ft_strjoin(s1_5, s2_5);
    printf(" Result: \"%s\"\n\n", r5);
    free(r5);


    /* ---------- TEST 6: Long strings ---------- */
    char s1_6[] = "This_is_a_long_string_";
    char s2_6[] = "And_this_is_another_long_string";
    printf("TEST 6: Long strings\n");
    printf(" s1 = \"%s\"\n s2 = \"%s\"\n", s1_6, s2_6);

    char *r6 = ft_strjoin(s1_6, s2_6);
    printf(" Result: \"%s\"\n\n", r6);
    free(r6);
}

static void	test_itoa()
{
	printf("=== ft_itoa ===\n\n");
	int tests[] = {
        0,
        5,
        -5,
        42,
        -42,
        12345,
        -12345,
        2147483647,      // INT_MAX
        -2147483648,     // INT_MIN
        1000000000,
        -1000000000
    };

    int size = sizeof(tests) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        int n = tests[i];
        char original[50];      // buffer for sprintf reference
        sprintf(original, "%d", n);

        char *mine = ft_itoa(n);

        printf("===== TEST %d =====\n", i + 1);
        printf("Input Number     : %d\n", n);
        printf("Original (sprintf): \"%s\"\n", original);
        printf("ft_itoa          : \"%s\"\n", mine);

        if (strcmp(original, mine) == 0)
            printf("Result           : OK\n\n");
        else
            printf("Result           : FAIL ❌\n\n");

        free(mine);
    }
}

/* Function for comparison with ft_strmapi */
    // cannot use helper function, so define inline
    // (still allowed because it’s not a helper for looping logic)
    char upper_func(unsigned int i, char c) {
        (void)i;
        if (c >= 'a' && c <= 'z')
            return c - 32;
        return c;
    }

    char index_plus_func(unsigned int i, char c) {
        return c + i % 5; // just small predictable change
    }

    char toggle_func(unsigned int i, char c) {
        if (i % 2 == 0 && c >= 'a' && c <= 'z')
            return c - 32;
        return c;
    }

static void	test_strmapi()
{
	printf("=== ft_strmapi ===\n\n");

    /* TEST 1 – Normal lowercase string */
    printf("===== TEST 1: Normal string =====\n");
    char s1[] = "hello world";
    char *o1 = ft_strmapi(s1, upper_func);
    printf("Original: \"%s\"\n", s1);
    printf("ft_strmapi: \"%s\"\n\n", o1);
    free(o1);

    /* TEST 2 – Empty string */
    printf("===== TEST 2: Empty string =====\n");
    char s2[] = "";
    char *o2 = ft_strmapi(s2, upper_func);
    printf("Original: \"%s\"\n", s2);
    printf("ft_strmapi: \"%s\"\n\n", o2);
    free(o2);

    /* TEST 3 – String with spaces and special characters */
    printf("===== TEST 3: Special characters =====\n");
    char s3[] = "a! b@ c#";
    char *o3 = ft_strmapi(s3, upper_func);
    printf("Original: \"%s\"\n", s3);
    printf("ft_strmapi: \"%s\"\n\n", o3);
    free(o3);

    /* TEST 4 – Progressive index transformation */
    printf("===== TEST 4: Index-based change =====\n");
    char s4[] = "ABCDE";
    char *o4 = ft_strmapi(s4, index_plus_func);
    printf("Original: \"%s\"\n", s4);
    printf("ft_strmapi: \"%s\"\n\n", o4);
    free(o4);

    /* TEST 5 – Toggle uppercase by index */
    printf("===== TEST 5: Toggle case at even index =====\n");
    char s5[] = "abcdef";
    char *o5 = ft_strmapi(s5, toggle_func);
    printf("Original: \"%s\"\n", s5);
    printf("ft_strmapi: \"%s\"\n\n", o5);
    free(o5);

    /* TEST 6 – Long string */
    printf("===== TEST 6: Long string =====\n");
    char s6[] = "this is a long string just for testing mapi function";
    char *o6 = ft_strmapi(s6, upper_func);
    printf("Original: \"%s\"\n", s6);
    printf("ft_strmapi: \"%s\"\n\n", o6);
    free(o6);

    /* TEST 7 – NULL input */
    printf("===== TEST 7: NULL input =====\n");
    char *o7 = ft_strmapi(NULL, upper_func);
    if (!o7)
        printf("ft_strmapi returned NULL (OK)\n\n");
    else {
        printf("Unexpected: %s\n", o7);
        free(o7);
    }
}

void upper_func(unsigned int i, char *c)
	{
		(void)i;
		if (*c >= 'a' && *c <= 'z')
			*c = *c - 32;
	}

	void index_shift_func(unsigned int i, char *c)
	{
		*c = *c + (i % 3);
	}

	void toggle_even_func(unsigned int i, char *c)
	{
		if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
			*c = *c - 32;
	}

static void	test_striteri();
{
	printf("=== ft_striteri ===\n\n");

	/* TEST 1 – Normal string */
	printf("===== TEST 1: Normal lowercase string =====\n");
	char s1[] = "hello world";
	printf("Original: \"%s\"\n", s1);
	ft_striteri(s1, upper_func);
	printf("After ft_striteri: \"%s\"\n\n", s1);


	/* TEST 2 – Empty string */
	printf("===== TEST 2: Empty string =====\n");
	char s2[] = "";
	printf("Original: \"%s\"\n", s2);
	ft_striteri(s2, upper_func);
	printf("After ft_striteri: \"%s\"\n\n", s2);


	/* TEST 3 – Special characters */
	printf("===== TEST 3: Special characters =====\n");
	char s3[] = "a! b@ c#";
	printf("Original: \"%s\"\n", s3);
	ft_striteri(s3, upper_func);
	printf("After ft_striteri: \"%s\"\n\n", s3);


	/* TEST 4 – Index-based modification */
	printf("===== TEST 4: Index-shift modification =====\n");
	char s4[] = "ABCDE";
	printf("Original: \"%s\"\n", s4);
	ft_striteri(s4, index_shift_func);
	printf("After ft_striteri: \"%s\"\n\n", s4);


	/* TEST 5 – Toggle uppercase for even indexes */
	printf("===== TEST 5: Toggle at even indexes =====\n");
	char s5[] = "abcdef";
	printf("Original: \"%s\"\n", s5);
	ft_striteri(s5, toggle_even_func);
	printf("After ft_striteri: \"%s\"\n\n", s5);


	/* TEST 6 – Long string */
	printf("===== TEST 6: Long string =====\n");
	char s6[] = "this is a long string for testing the function";
	printf("Original: \"%s\"\n", s6);
	ft_striteri(s6, upper_func);
	printf("After ft_striteri: \"%s\"\n\n", s6);


	/* TEST 7 – NULL string */
	printf("===== TEST 7: NULL pointer =====\n");
	ft_striteri(NULL, upper_func);  // Should do nothing
	printf("Passed (no crash)\n\n");


	/* TEST 8 – NULL function pointer */
	printf("===== TEST 8: NULL callback =====\n");
	char s8[] = "unchanged";
	printf("Original: \"%s\"\n", s8);
	ft_striteri(s8, NULL); // Should do nothing
	printf("After ft_striteri: \"%s\"\n\n", s8);
}

static void	test_putchar_fd()
{
	printf("=== ft_putchar_fd ===\n\n");
	
	char *str = "Hello, 42!\n";
	int i = 0;
	while (str[i])
		ft_putchar_fd(str[i++], 1);	
}

static void	test_putstr_fd()
{
	printf("=== ft_putstr_fd ===\n\n");

	char str1[] = "Hello, world!\n";
    char str2[] = "";
    char str3[] = "42 Network\n";

    printf("===== TEST 1: Normal string =====\n");
    printf("Original write: ");
    write(1, str1, 14);
    printf("ft_putstr_fd:  ");
    ft_putstr_fd(str1, 1);
    printf("\n");

    printf("===== TEST 2: Empty string =====\n");
    printf("Original write: ");
    write(1, str2, 0);
    printf("ft_putstr_fd:  ");
    ft_putstr_fd(str2, 1);
    printf("\n");

    printf("===== TEST 3: Another string =====\n");
    printf("Original write: ");
    write(1, str3, 11);
    printf("ft_putstr_fd:  ");
    ft_putstr_fd(str3, 1);
    printf("\n");

    printf("===== TEST 4: NULL string =====\n");
    ft_putstr_fd(NULL, 1);
    printf("\n");
}
static void	test_putnbr_fd()
{
	printf("=== ft_putnbr_fd ===\n\n");

	int n1 = 42;
    int n2 = -42;
    int n3 = 0;
    int n4 = INT_MAX;
    int n5 = INT_MIN;

    printf("===== TEST 1: Positive number =====\n");
    printf("Original putnbr: %d\n", n1);
	printf("ft_putnbr_fd: \n");
	ft_putnbr_fd(n1, 1);
	write(1, "\n", 1);

    printf("\n===== TEST 2: Negative number =====\n");
    printf("Original putnbr: %d\n", n2);
	printf("ft_putnbr_fd: \n");
	ft_putnbr_fd(n2, 1); write(1, "\n", 1);

    printf("\n===== TEST 3: Zero =====\n");
    printf("Original putnbr: %d\n", n3);
	printf("ft_putnbr_fd: \n");
	ft_putnbr_fd(n3, 1); write(1, "\n", 1);

    printf("\n===== TEST 4: INT_MAX =====\n");
    printf("Original putnbr: %d\n", n4);
	printf("ft_putnbr_fd: \n");
	ft_putnbr_fd(n4, 1); write(1, "\n", 1);

    printf("\n===== TEST 5: INT_MIN =====\n");
    printf("Original putnbr: %d\n", n5);
	printf("ft_putnbr_fd: \n");
	ft_putnbr_fd(n5, 1); write(1, "\n", 1);
}