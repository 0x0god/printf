#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct param_flags - struct containing flags to get
 * when a flag specifier is passed to _printf()
 * @plus_flag: flag for the '+' character
 * @space_flag: flag for the ' ' character
 * @hash_flag: flag for the '#' character
 */
typedef struct param_flags
{
	int plus_flag;
	int space_flag;
	int hash_flag;
} param_func;

/**
* struct func_convert - gets structure for the symbols and functions
*@type: operator symbols
*@func: the associated function
*/

typedef struct func_convert
{
	char type;
	int (*func)(va_list list, param_func *func);
} f_convert;


/*function prototypes*/
int _printf(const char *format, ...);
int (*func_parse(char c))(va_list, param_func *);
int print_chars(va_list list, param_func *func);
int print_strings(va_list list, param_func *func);
int print_percentage(va_list list, param_func *func);
int print_integer(va_list list, param_func *func);
int print_binary(va_list list, param_func *func);
int print_unsigned_integer(va_list list, param_func *func);
int print_heX(va_list list, param_func *func);
int print_hexa(va_list list, param_func *func);
int print_octal(va_list list, param_func *func);
int print_stringUpper(va_list list, param_func *func);
int print_address(va_list list, param_func *func);
int print_rot13(va_list list, param_func *func);

/*putchar function*/
int _putchar(char c);
int _puts(char *str);

/* Utils */
int get_flags(char s, param_func *func);
int get_digits(int i);
void print_num(int i);
unsigned int get_base_len(unsigned int num, unsigned int base);
void get_write_base(char *str);
char *reverse_string(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
char *convert_num(unsigned long int num, int base, int lowercase);
#endif
