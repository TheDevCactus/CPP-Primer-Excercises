# 2-21

Explain each of the following definitions. Indicate whether any are illegal and, if so, why.

Assume the following is defined

`int i = 0;`

a) `double* dp = &i;` Invalid. `i` is an int not a double. pointers must be of the same type as the object they are pointing to.
b) `int *ip = i;` Invalid. pointers must be assigned the value of type `int *` in this situation... fix by dooing `int *ip = &i;`
c) `int *p = &i` valid. Creates a pointer to the object `i` called `p`