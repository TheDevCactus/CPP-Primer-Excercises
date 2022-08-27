# 2-24

Why is the initialization of `p` legal but that of `lp` illegal?

`int i = 42;    void *p = &i;    long *lp = &i;`

because void pointers can hold the address of any type at the cost of never being able to dicern the type on a code level.

`lp` is trying to create a pointer to a `long` when `i` is an int.