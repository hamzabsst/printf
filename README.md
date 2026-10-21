# ft_printf

A small C implementation of formatted output, built as the static library `libftprintf.a`. This 42 project practices variadic arguments and writing formatted values to standard output.

## Supported conversions

| Format | Value |
| --- | --- |
| `%c` | Character |
| `%s` | String |
| `%d`, `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x`, `%X` | Lowercase or uppercase hexadecimal |
| `%p` | Pointer |
| `%%` | Literal percent sign |

This is a subset of the standard `printf` interface; width, precision, floating-point conversions, and format flags are outside this implementation.

## Build

Requirements: a C compiler, Make, and `ar`.

```sh
make
```

This produces `libftprintf.a` using `-Wall -Wextra -Werror`.

## Use in a program

Include `ft_printf.h`, then call:

```c
ft_printf("Hello %s, value = %d\n", "world", 42);
```

Link your own C entry point against the library:

```sh
cc -Wall -Wextra -Werror main.c libftprintf.a -o example
./example
```

The function returns the printed character count for supported output. A null format or trailing percent sign is handled as an error in the current source.

## Files and cleanup

`ft_printf.c` dispatches conversions; the `ft_put*.c` files output individual types. The public declaration is in `ft_printf.h`.

```sh
make clean   # Remove object files
make fclean  # Also remove the library
make re      # Rebuild
```
