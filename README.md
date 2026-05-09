*This activity has been created as part of the 42 curriculum by nboubeke*

# Description

Voici une bibliotheque de fonctions qui reproduit les fonctions de la libc et a pour but de s'entrainer a creer sa propre librairie

# Instructions

- **make** ou **make all**, pour creer un libft.a
- **make clean**  qui supprime tous les .o
- **make fclean** qui supprime le libft.a + clean
- **make re** qui fclean + all

# Resources

- [Google](Google.com)
- [Claude](https://claude.ai/)
- [ChatGPT](https://chatgpt.com/)
- [Koor C](https://koor.fr/C/Index.wp)
- [Manual Linux C](https://man7.org/linux/man-pages/man3/system.3.html)

# Fonctions


|   Prototype | Description | Return | Different cases |
| :---------  | :---------: | :----: | :--------------: |
| **int		ft_isalpha(int c);**| *Checks for an alphabetic character* | 1 or 0 | \
| **int		ft_isdigit(int c);** | *Checks for a digit character* | 1 or 0 | \
| **int		ft_isalnum(int c);** | *Checks for an alphanumeric character; it is equivalent to (isalpha(c) or isdigit(c)).* | 1 or 0 | \
| **int		ft_isascii(int c);** | *Checks if the character fits into the ASCII character set* | 1 or 0 | \
| **int		ft_isprint(int c);** | *Checks for any printable character including space* | 1 or 0 | \
| **size_t	ft_strlen(char const \*str);** | *The  strlen()  function calculates the length of the string pointed to by s* | size of the pointed string | \
| **void	\*ft_memset(void \*str, int c, size_t n);** | *The  memset()  function  fills the first n bytes of the memory area pointed to by s with the constant byte c.* | A pointer to the memory area s | \
| **void	ft_bzero(void \*str, size_t n);** | *The  bzero()  function  erases  the  data  in  the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.* | None. | \
| **void	\*ft_memcpy(void \*dest, const void \*src, size_t n);** | *The  memcpy() function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.* | A pointer to dest. | \
| **void	\*ft_memmove(void \*dest, const void \*src, size_t n);** | *The memmove() function copies len bytes from buffer src to buffer dst. The two buffers may overlap; the copy is always done in a non-destructive manner.* | A pointer to dest. | \
| **size_t	ft_strlcpy(char \*dest, const char \*src, size_t size);** | *The strlcpy() function copies up to size - 1 characters from the  NUL-terminated  string  src  to dst, NUL-terminating the result.* | Length of src | \
| **size_t	ft_strlcat(char \*dest, const char \*src, size_t size);** | *The strlcat function appends the content of one string src to another string dst while ensuring that the resulting string is null-terminated and does not exceed a specified buffer size. It returns the total length of the resulting string.* | Initial length  of  dst +  the  length of src | If you don't give a dstsize long enough, you return length src + size value
| **int		ft_toupper(int c);** | *If c is a lowercase letter, toupper() returns its uppercase equivalent* | The converted letter, or c if the conversion was not possible | \
| **int		ft_tolower(int c);** | *If c is an uppercase letter, tolower() returns its lowercase equivalent* | The converted letter, or c if the conversion was not possible | \
|  **char	\*ft_strchr(const char \*str, int c);** | *The  strchr() function returns a pointer to the first occurrence of the character c in the string s.* | A pointer to the matched character  or  NULL  if  the character is not found. | The terminating null byte is considered part of the string, so that if c is specified as '\0', it returns a pointer to the terminator.
|  **char	\*ft_strrchr(const char \*str, int c);** | *The strrchr() function returns a pointer to the last occurrence of the character c in the  string s.* | A pointer to the matched character  or  NULL  if  the character is not found | The terminating null byte is considered part of the string, so that if c is specified as '\0', it returns a pointer to the terminator.
|  **int		ft_strncmp(const char \*s1, const char \*s2, size_t n);** | *The  strcmp()  function compares only the first (at most) n bytes of s1 and s2. The comparison is done using  unsigned  characters.* | 0, if the s1 and s2 are equal, a negative value if s1 is less than s2, a positive value if s1 is greater than s2. | \
|  **void	\*ft_memchr(const void \*s, int c, size_t n);** | *The  memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by s are  interpreted  as  unsigned char.* | A pointer to the matching byte or NULL if the character does not occur in the given memory area. | \
|  **int	    ft_memcmp(const void \*s1, const void \*s2, size_t n);** | *The  memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory  areas s1 and s2.* | An integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2. | For a nonzero return value, the sign is determined by the sign of the difference between the first pair of bytes (interpreted as unsigned char) that differ in s1 and s2. If n is zero, the return value is zero.
|  **char	\*ft_strnstr(const char \*big, const char \*little, size_t len);** | *The  strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched. Characters that appear after a ‘\0’ character are not searched.* | A pointer to the first character of the first occurrence of little is returned. | If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned;
|  **int		ft_atoi(const char \*str);** | *The atoi() function converts the initial portion of the string pointed to by nptr to int.* | The converted value or 0 on error. | \
|  **void	\*ft_calloc(size_t num, size_t size);** | *The calloc() function allocates memory for an array of n elements of size bytes each and  returns a pointer to the allocated memory. The memory is set to zero.* | A pointer to the allocated memory | if malloc fails or size * num > SIZE_MAX, return NULL
|  **char	\*ft_strdup(const char \*s);** | *The strdup() function returns a pointer to a new string which is a duplicate of the string s.* | A pointer to the duplicated string | if !s or malloc fails on the duplicated_string, return NULL;
|  **char	\*ft_substr(char const \*s, unsigned int start, size_t len);** |
|  char	*ft_strjoin(char const *s1, char const *s2);
|  char	*ft_strtrim(char const *s1, char const *set);
|  char	**ft_split(char const *str, char c);
|  char	*ft_itoa(int n);
|  char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
|  void	ft_striteri(char *s, void (*f)(unsigned int, char*));
|  void	ft_putchar_fd(char c, int fd);
|  void	ft_putstr_fd(char *s, int fd);
|  void	ft_putendl_fd(char *s, int fd);
|  void	ft_putnbr_fd(int n, int fd);
|  t_list	*ft_lstnew(void *content);
|  void	ft_lstadd_front(t_list **list, t_list *new);
|  int		ft_lstsize(t_list *lst);
|  t_list	*ft_lstlast(t_list *lst);
|  void	ft_lstadd_back(t_list **lst, t_list *new);
|  void	ft_lstdelone(t_list *lst, void (*del)(void *));
|  void	ft_lstclear(t_list **lst, void (*del)(void *));
|  void	ft_lstiter(t_list *lst, void (*f)(void *));
|  t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
