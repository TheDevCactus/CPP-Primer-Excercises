# 2-27

Which of the following initializations are legal? Explain why.

a) `int i = -1, &r = 0;` Illegal. references must reference objects
b) ` int *const p2 = &i2;` Legal. creates a const pointer to `i2`
c) `const int i = -1, &r = 0;` Legal. Reference `&r` can be pointed to `0` because it is a const
d) ` const int *const p3 = &i2;` Legal. Const pointer to a const int
e) `const int *p1 = &i2;` Legal. pointer to a const int
f) `const int &const r2;` Illegal. Extra const
g) `const int i2 = i, &r = i`; Legal assuming i is defined.