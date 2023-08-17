## Exercise 05 : ft_atoi_base

- Turn-in directory : ex05/
- Files to turn in : ft_atoi_base.c
- Allowed functions : None
 • Write a function that converts the initial portion of the string pointed by str to int
   representation.
 • str is in a specific base given as a second parameter.
 • excepted the base rule, the function should work exactly like ft_atoi.
 • If there’s an invalid argument, the function should return 0. Examples of invalid
   arguments :
 ◦ base is empty or size of 1;
 ◦ base contains the same character twice ;
 ◦ base contains + or - or whitespaces;
 • Here’s how it should be prototyped :
```int ft_atoi_base(char *str, char *base);``
