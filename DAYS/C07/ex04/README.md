## Exercise 04 : ft_convert_base

- Turn-in directory : ex04/
- Files to turn in : ft_convert_base.c, ft_convert_base2.c
- Allowed functions : malloc, free
 • Create a function that returns the result of the conversion of the string nbr from a
   base base_from to a base base_to.
 • nbr, base_from, base_to may be not writable.
 • nbr will follow the same rules as ft_atoi_base (from an other module). Beware of
   ’+’, ’-’ and whitespaces.
 • The number represented by nbr must fit inside an int.
 • If a base is wrong, NULL should be returned.
 • The returned number must be prefix only by a single and uniq ’-’ if necessary, no
   whitespaces, no ’+’.
 • Here’s how it should be prototyped :
   char *ft_convert_base(char *nbr, char *base_from, char *base_to);
