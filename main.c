#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/syscall.h>

size_t ft_strlen(char *str);
ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strcpy(const char *s1, const char *s2);
ssize_t ft_read(int fildes, void *buf, size_t nbyte); //need to be fixed
char *ft_strdup(const char *s);

int main()
{
    char rd1[20];
    char rd[20];
    char *s1 = "hello";
    char dest[20];
    char s[20];
    int bz;
    ssize_t n;
    int fd;
    int fd1;
    char *s2 = "\xff\xff";
    char *s3 = "\xff";
    char str1[] = "hello";
    char str2[] = "he";
    // ============ FT_STRLEN ================= working fine
    // printf("mine == %zu\n", ft_strlen("NULL"));
    // printf("orig == %zu\n", strlen("NULL"));
    // printf("mine == %zu\n", ft_strlen(""));
    // printf("orig == %zu\n", strlen(""));
    // printf("mine == %zu\n", ft_strlen(s1));
    // printf("orig == %zu\n", strlen(s1));
    // printf("|M| ==> Return value by ft_strlen = |%zu|\n", ft_strlen("test 1 2 3"));
    // printf("|O| ==> Return value by    strlen = |%zu|\n", strlen("test 1 2 3"));
    // printf("mine == %zu\n", ft_strlen("NULL"));
    // printf("orig == %zu\n", strlen("NULL"));
    // printf("mine == %zu\n", ft_strlen("-1"));
    // printf("orig == %zu\n", strlen("-1"));
    // ============ FT_STRCPY ================= working fine
    // printf("mine == %s|\n", ft_strcpy(dest, "hello"));
    // printf("orig == %s|\n", strcpy(dest, "hello"));
    // printf("|M| ==> the dest1 by ft_strcpy is |%s|\n", ft_strcpy(s, "How are you ?"));
    // printf("|O| ==> the dest2 by    strcpy is |%s|\n", strcpy(s, "How are you ?"));
    // printf("mine = %s|\n", ft_strcpy(dest, "hello"));
    // printf("origin = %s|\n", strcpy(dest, "hello"));
    // // // ============ FT_STRDUP =================
    // printf("orig == |%s|\n", strdup("Hello  qjdgucguyU U    QUYDFUC UYFQduacfu u  uyuyyfc ufbqkjgaCUYZ  "));
    // printf("mine == |%s|\n", ft_strdup("Hello  qjdgucguyU U    QUYDFUC UYFQduacfu u  uyuyyfc ufbqkjgaCUYZ  "));
    // printf("orig == |%s|\n", strdup(""));
    // printf("|M| ==> string by ft_strdup is |%s|\n", ft_strdup("NULL"));
    // printf("|O| ==> string by    strdup is |%s|\n", strdup("NULL"));
    // // == == == == == == FT_STRCMP == == == == == == == == = working fine
    // printf("mine == %d\n", ft_strcmp(str1, str2));
    // printf("orig == %d\n", strcmp(str1, str2));
    // printf("mine == %d\n", ft_strcmp(str2, str1));
    // printf("orig == %d\n", strcmp(str2, str1));
    // // // ============ FT_READ   ================= not working
    // printf("mine == %d | %s\n", (int)ft_read(1, rd, 5), rd);
    // printf("orig == %d | %s\n", (int)read(1, rd1, 5), rd1);
    // printf("mine == %d | %s\n", (int)ft_read(-1, rd, 5), rd);
    // printf("orig == %d | %s\n", (int)read(-1, rd1, 5), rd1);
    // printf("mine == %d | %s\n", (int)ft_read(42, rd, 5), rd);
    // printf("orig == %d | %s\n", (int)read(42, rd1, 5), rd1);
    // fd = open("test", O_RDONLY);
    // n = ft_read(fd, s, 5);
    // printf("\n|M| ==> the return value of ft_read is |%zd| and s=|%s| and str_ernor = |%s|\n", n, s, strerror(errno));
    // printf("errno = |%d|\n", errno);
    // close(fd);
    // fd1 = open("test1", O_RDONLY);
    // n = read(fd1, s, 5);
    // printf("|O| ==> the return value of    read is |%zd| and s=|%s| and str_ernor = |%s|\n", n, s, strerror(errno));
    // printf("errno = |%d|\n", errno);
    // close(fd1);
    // // // ============ FT_WRITE  =================
    // printf("mine == %d\n", (int)ft_write(1, "NULL\n", 5));
    // printf("orig == %d\n", (int)write(1, "NULL\n", 5));
    // printf("mine == %d\n", (int)ft_write(1, NULL, 5));
    // printf("orig == %d\n", (int)write(1, NULL, 5));
    // printf("mine == %d\n", (int)ft_write(-1, "NULL\n", 5));
    // printf("orig == %d\n", (int)write(-1, "NULL\n", 5));
    // printf("mine == %d\n", (int)ft_write(42, "NULL\n", 5));
    // printf("orig == %d\n", (int)write(42, "NULL\n", 5));
    // fd = open("test", O_WRONLY);
    // n = ft_write(fd, "hiiiii", 5);
    // printf("\n|M| ==> the return value of ft_write is |%ld|\n", n);
    // printf("errno = |%d| str_error = |%s|", errno, strerror(errno));
    // close(fd);
    // fd1 = open("test1", O_WRONLY);
    // n = write(fd1, "hiiiii", 5);
    // printf("\n|O| ==> the return value of    write is |%ld|\n", n);
    // printf("errno = |%d| str_error = |%s|\n", errno, strerror(errno));
    // close(fd1);

    return (0);
}
