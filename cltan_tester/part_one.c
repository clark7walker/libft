#include <stdio.h>
#include <limits.h>
#include "../libft.h"

static void	test_isalpha(void)
{
	int c = 'A';
	printf("For %c\nisalpha:\t%d\nft_isalpha:\t%d\n\n", c, isalpha(c), ft_isalpha(c));

	c = 'Z';
	printf("For %c\nisalpha:\t%d\nft_isalpha:\t%d\n\n", c, isalpha(c), ft_isalpha(c));

	c = 'a';
	printf("For %c\nisalpha:\t%d\nft_isalpha:\t%d\n\n", c, isalpha(c), ft_isalpha(c));

	c = 'z';
	printf("For %c\nisalpha:\t%d\nft_isalpha:\t%d\n\n", c, isalpha(c), ft_isalpha(c));

	c = ' ';
	printf("For %c\nisalpha:\t%d\nft_isalpha:\t%d\n\n", c, isalpha(c), ft_isalpha(c));

	c = '@';
	printf("For %c\nisalpha:\t%d\nft_isalpha:\t%d\n\n", c, isalpha(c), ft_isalpha(c));

	c = '\\';
	printf("For %c\nisalpha:\t%d\nft_isalpha:\t%d\n\n", c, isalpha(c), ft_isalpha(c));

	c = '0';
	printf("For %c\nisalpha:\t%d\nft_isalpha:\t%d\n\n", c, isalpha(c), ft_isalpha(c));
}

static void	test_isdigit(void)
{
	int c = '0';
	printf("For %c\nisdigit:\t%d\nft_isdigit:\t%d\n\n", c, isdigit(c), ft_isdigit(c));

	c = '9';
	printf("For %c\nisdigit:\t%d\nft_isdigit:\t%d\n\n", c, isdigit(c), ft_isdigit(c));

	c = 'A';
	printf("For %c\nisdigit:\t%d\nft_isdigit:\t%d\n\n", c, isdigit(c), ft_isdigit(c));

	c = '\\';
	printf("For %c\nisdigit:\t%d\nft_isdigit:\t%d\n\n", c, isdigit(c), ft_isdigit(c));

	c = ' ';
	printf("For %c\nisdigit:\t%d\nft_isdigit:\t%d\n\n", c, isdigit(c), ft_isdigit(c));

	c = '@';
	printf("For %c\nisdigit:\t%d\nft_isdigit:\t%d\n\n", c, isdigit(c), ft_isdigit(c));
}

static void	test_isalnum(void)
{
	int c = '0';
	printf("For %c\nisalnum:\t%d\nft_isalnum:\t%d\n\n", c, isalnum(c), ft_isalnum(c));

	c = '9';
	printf("For %c\nisalnum:\t%d\nft_isalnum:\t%d\n\n", c, isalnum(c), ft_isalnum(c));
	
	c = 'A';
	printf("For %c\nisalnum:\t%d\nft_isalnum:\t%d\n\n", c, isalnum(c), ft_isalnum(c));
	
	c = 'Z';
	printf("For %c\nisalnum:\t%d\nft_isalnum:\t%d\n\n", c, isalnum(c), ft_isalnum(c));
	
	c = 'a';
	printf("For %c\nisalnum:\t%d\nft_isalnum:\t%d\n\n", c, isalnum(c), ft_isalnum(c));
	
	c = 'z';
	printf("For %c\nisalnum:\t%d\nft_isalnum:\t%d\n\n", c, isalnum(c), ft_isalnum(c));
	
	c = ' ';
	printf("For %c\nisalnum:\t%d\nft_isalnum:\t%d\n\n", c, isalnum(c), ft_isalnum(c));
	
	c = '\\';
	printf("For %c\nisalnum:\t%d\nft_isalnum:\t%d\n\n", c, isalnum(c), ft_isalnum(c));
	
	c = '@';
	printf("For %c\nisalnum:\t%d\nft_isalnum:\t%d\n\n", c, isalnum(c), ft_isalnum(c));
}

static void	test_isascii(void)
{
	int c = '0';
	printf("For %c\nisascii:\t%d\nft_isascii:\t%d\n\n", c, isascii(c), ft_isascii(c));
	c = '9';
	printf("For %c\nisascii:\t%d\nft_isascii:\t%d\n\n", c, isascii(c), ft_isascii(c));
	c = 'A';
	printf("For %c\nisascii:\t%d\nft_isascii:\t%d\n\n", c, isascii(c), ft_isascii(c));
	c = 'a';
	printf("For %c\nisascii:\t%d\nft_isascii:\t%d\n\n", c, isascii(c), ft_isascii(c));
	c = 127;
	printf("For %c\nisascii:\t%d\nft_isascii:\t%d\n\n", c, isascii(c), ft_isascii(c));
	c = -1;
	printf("For %c\nisascii:\t%d\nft_isascii:\t%d\n\n", c, isascii(c), ft_isascii(c));
	c = -30;
	printf("For %c\nisascii:\t%d\nft_isascii:\t%d\n\n", c, isascii(c), ft_isascii(c));
}

static void	test_isprint(void)
{
	int c = ' ';
	printf("For %c\nisprint:\t%d\nft_isprint:\t%d\n\n", c, isprint(c), ft_isprint(c));
	c = '~';
	printf("For %c\nisprint:\t%d\nft_isprint:\t%d\n\n", c, isprint(c), ft_isprint(c));
	c = 'a';
	printf("For %c\nisprint:\t%d\nft_isprint:\t%d\n\n", c, isprint(c), ft_isprint(c));
	c = 43;
	printf("For %c\nisprint:\t%d\nft_isprint:\t%d\n\n", c, isprint(c), ft_isprint(c));
	c = 31;
	printf("For %c\nisprint:\t%d\nft_isprint:\t%d\n\n", c, isprint(c), ft_isprint(c));
	c = 127;
	printf("For %c\nisprint:\t%d\nft_isprint:\t%d\n\n", c, isprint(c), ft_isprint(c));
	c = -1;
	printf("For %c\nisprint:\t%d\nft_isprint:\t%d\n\n", c, isprint(c), ft_isprint(c));
}

static	void test_strlen(void)
{
	char *str1 = "Hello";
	printf("Case:\t\t%s\nstrlen:\t\t%ld\nft_strlen:\t%ld\n\n", str1, strlen(str1), ft_strlen(str1));
	char *str2 = " ";
	printf("Case:\t\t%s\nstrlen:\t\t%ld\nft_strlen:\t%ld\n\n", str2, strlen(str2), ft_strlen(str2));
	char *str3 = "";
	printf("Case:\t\t%s\nstrlen:\t\t%ld\nft_strlen:\t%ld\n\n", str3, strlen(str3), ft_strlen(str3));
	char *str4 = "123456789";
	printf("Case:\t\t%s\nstrlen:\t\t%ld\nft_strlen:\t%ld\n\n", str4, strlen(str4), ft_strlen(str4));
	char *str5 = "\0";
	printf("Case:\t\t%s\nstrlen:\t\t%ld\nft_strlen:\t%ld\n\n", str5, strlen(str5), ft_strlen(str5));
}

static void	test_memset(void)
{
	char	orgsrc[20] = "Hello World";
	char	ftsrc[20] = "Hello World";

	printf("Case:\t\t%s\n", orgsrc);
	memset(orgsrc, 'o', 3);
	ft_memset(ftsrc, 'o', 3);
	printf("Memset:\t\t%s\nft_memset:\t%s\n\n", orgsrc, ftsrc);
	
	printf("Case:\t\t%s\n", orgsrc);
	memset(orgsrc, 'x', 15);
	ft_memset(ftsrc, 'x', 15);
	printf("Memset:\t\t%s\nft_memset:\t%s\n\n", orgsrc, ftsrc);
	
	printf("Case:\t\t%s\n", orgsrc);
	memset(orgsrc, '~', 5);
	ft_memset(ftsrc, '~', 5);
	printf("Memset:\t\t%s\nft_memset:\t%s\n\n", orgsrc, ftsrc);
}

static void	test_bzero(void)
{
	char	str1[20] = "abcdef";
	char	str2[20] = "abcdef";

	printf("Case:\t\t%s\n", str1);
	bzero(str1, 4);
	ft_bzero(str2, 4);
	printf("bzero:\t\t%s\n", str1);
	printf("ft_bzero:\t%s\n", str2);
}
static void	test_memcpy(void)
{
	char s[] = "abcdefghijklmnopqrstuvwxyz";
	char d[27];
	char f[27];

	printf("String:\t\t%s\n\n", s);
	memcpy(d, s, sizeof(char) * 27);
	printf("size_t n:\t27\nmemcpy:\t\t%s\n", d);
	ft_memcpy(f, s, sizeof(char) * 27);
	printf("ft_memcpy:\t%s\n\n", d);

	char e[10];
	memcpy(e, s+8, sizeof(char) * 9);
	e[9] = '\0';
	printf("size_t n:\t9\nmemcpy:\t\t%s\n", e);
	char h[10];
	ft_memcpy(h, s+8, sizeof(char) * 9);
	e[9] = '\0';
	printf("ft_memcpy:\t%s\n", e);
}
void print_buffer(char *buf, size_t n)
{
    size_t i = 0;
    while (i < n)
    {
        // Use ternary to print non-printable chars (like \0) clearly
        printf(" %c", (buf[i] >= 32 && buf[i] <= 126) ? buf[i] : '.');
        i++;
    }
    printf("\n");
}
static void	test_memmove(void)
{
	char src_buffer[] = "0123456789";
    char dst_buffer_std[11];
    char dst_buffer_ft[11];

    size_t size1 = 6;

    memset(dst_buffer_std, 0, 11);
    memset(dst_buffer_ft, 0, 11);
	
    printf("--- Test 1: No Overlap (n = %zu) ---\n", size1);
	
    printf("Case:\t\t%s\n", src_buffer);
    memmove(dst_buffer_std, src_buffer, size1);
    ft_memmove(dst_buffer_ft, src_buffer, size1);

    printf("Memmove:\t");
    print_buffer(dst_buffer_std, size1 + 2); 
    printf("ft_memmove:\t");
    print_buffer(dst_buffer_ft, size1 + 2); 
    printf("\n");

    size_t size2 = 5;
    char buffer_std[] = "ABCDEFGHIJ"; 
    char buffer_ft[] = "ABCDEFGHIJ";
    
    printf("--- Test 2: Overlap - Forward (dst < src) ---\n");
    printf("Case:\t\t%s\n", buffer_std);
    memmove(buffer_std + 5, buffer_std, size2);
    ft_memmove(buffer_ft + 5, buffer_ft, size2);

    printf("Memmove:\t");
    print_buffer(buffer_std, 10);
    printf("ft_memmove:\t");
    print_buffer(buffer_ft, 10);
    printf("\n");

    size_t size3 = 5;
    char buffer_std_2[] = "ABCDEFGHIJ"; 
    char buffer_ft_2[] = "ABCDEFGHIJ";
    
    printf("--- Test 3: Overlap - Backward (src < dst) ---\n");
    printf("Case:\t\t%s\n", buffer_std_2);
    memmove(buffer_std_2, buffer_std_2 + 5, size3);
    ft_memmove(buffer_ft_2, buffer_ft_2 + 5, size3);

    printf("Memmove:\t");
    print_buffer(buffer_std_2, 10);
    printf("ft_memmove:\t");
    print_buffer(buffer_ft_2, 10);
    printf("\n");
}
void print_dst(char *dst, size_t size)
{
	size_t i = 0;
	while (i < size)
	{
		if (dst[i] == '\0')
			printf(".");
		else
			printf("%c", dst[i]);
		i++;
	}
	printf("\n");
}
static void	test_strlcpy(void)
{
	char *src_base = "HelloWorld123";
	size_t src_len = 13;
	size_t size;

	char dst_std[20]; 
	char dst_ft[20];

	size = 14; 
	memset(dst_std, 'A', 20);
	memset(dst_ft, 'B', 20);
	
	printf("Source:\t%s\n", src_base);
	printf("Dest:\t%c%c%c%c...\n\n", dst_ft[0], dst_ft[1], dst_ft[2], dst_ft[3]);
	
	printf("=== TEST 1: Full Copy (Size = %zu) ===\n", size);

	size_t ret_std = strlcpy(dst_std, src_base, size);
	size_t ret_ft = ft_strlcpy(dst_ft, src_base, size);

	printf("--- strlcpy ---\n");
	printf("Return: %zu (Expected %zu)\n", ret_std, src_len);
	printf("Dest: ");
	
	printf("\n--- ft_strlcpy ---\n");
	printf("Return: %zu\n", ret_ft);
	printf("Dest: ");
	print_dst(dst_ft, 15);
	printf("\n");

	size = 6; 
	memset(dst_std, 'A', 20);
	memset(dst_ft, 'B', 20);
	
	printf("=== TEST 2: Partial Copy (Size = %zu) ===\n", size);

	ret_std = strlcpy(dst_std, src_base, size);
	ret_ft = ft_strlcpy(dst_ft, src_base, size);

	printf("--- strlcpy ---\n");
	printf("Return: %zu (Expected %zu)\n", ret_std, src_len);
	printf("Dest: ");
	print_dst(dst_std, 8);
	
	printf("\n--- ft_strlcpy ---\n");
	printf("Return: %zu\n", ret_ft);
	printf("Dest: ");
	print_dst(dst_ft, 8);
	printf("\n");

	size = 0; 
	memset(dst_std, 'A', 20);
	memset(dst_ft, 'B', 20);
	
	printf("=== TEST 3: Edge Case (Size = %zu) ===\n", size);

	ret_std = strlcpy(dst_std, src_base, size);
	ret_ft = ft_strlcpy(dst_ft, src_base, size);

	printf("--- strlcpy ---\n");
	printf("Return: %zu (Expected %zu)\n", ret_std, src_len);
	printf("Dest Init: %c%c%c%c...\n", dst_std[0], dst_std[1], dst_std[2], dst_std[3]); 
	
	printf("\n--- ft_strlcpy ---\n");
	printf("Return: %zu\n", ret_ft);
	printf("Dest Init: %c%c%c%c...\n", dst_ft[0], dst_ft[1], dst_ft[2], dst_ft[3]);
	printf("\n");

	size = 1; 
	memset(dst_std, 'A', 20);
	memset(dst_ft, 'B', 20);
	
	printf("=== TEST 4: Edge Case (Size = %zu) ===\n", size);

	ret_std = strlcpy(dst_std, src_base, size);
	ret_ft = ft_strlcpy(dst_ft, src_base, size);

	printf("--- strlcpy ---\n");
	printf("Return: %zu (Expected %zu)\n", ret_std, src_len);
	printf("Dest: ");
	print_dst(dst_std, 3);
	
	printf("\n--- ft_strlcpy ---\n");
	printf("Return: %zu\n", ret_ft);
	printf("Dest: ");
	print_dst(dst_ft, 3);
	printf("\n");
}

static void	test_strlcat(void)
{
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

// MAIN FUNCTION
int	main(void)
{
	printf("\n--- PART 1 ---\n");
	printf("=== ft_isalpha ===\n");
	test_isalpha();
	printf("\n");
	
	printf("=== ft_isdigit ===\n");
	test_isdigit();
	printf("\n");
	
	printf("=== ft_isalnum ===\n");
	test_isalnum();
	printf("\n");
	
	printf("=== ft_isascii ===\n");
	test_isascii();
	printf("\n");
	
	printf("=== ft_isprint ===\n");
	test_isprint();
	printf("\n");
	
	printf("=== ft_strlen ===\n");
	test_strlen();
	printf("\n");
	
	printf("=== ft_memset ===\n");
	test_memset();
	printf("\n");
	
	printf("=== ft_bzero ===\n");
	test_bzero();
	printf("\n");
	
	printf("=== ft_memcpy ===\n");
	test_memcpy();
	printf("\n");
	
	printf("=== ft_memmove ===\n");
	test_memmove();
	printf("\n\n");
	
	printf("=== ft_strlcpy ===\n");
	test_strlcpy();
	printf("\n");
	
	printf("=== ft_strlcat ===\n");
	test_strlcat();
	printf("\n");
	
	printf("=== ft_toupper ===\n");
	test_toupper();
	printf("\n");
	
	printf("=== ft_tolower ===\n");
	test_tolower();
	printf("\n");
	
	printf("=== ft_strchr ===\n");
	test_strchr();
	printf("\n");
	
	printf("=== ft_strncmp ===\n");
	test_strncmp();
	printf("\n");
	
	printf("=== ft_memchr ===\n");
	test_memchr();
	printf("\n");
	
	printf("=== ft_memcmp ===\n");
	test_memcmp();
	printf("\n");
	
	printf("=== ft_strnstr ===\n");
	test_strnstr();
	printf("\n");
	
	printf("=== ft_atoi ===\n");
	test_atoi();
	printf("\n");
	
	printf("=== ft_calloc ===\n");
	test_calloc();
	printf("\n");
	
	printf("=== ft_strdup ===\n");
	test_strdup();
	printf("\n");
}
