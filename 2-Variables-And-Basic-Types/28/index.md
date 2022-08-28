# 2-28

a) `int i, *const cp;` Illegal. Const pointers must be initialized
b) `int *p1, *const p2;` Illegal. Const pointers must be initialized
c) `const int ic, &r = ic;` Illegal. ic is not initialized when it must be.
d) `const int *const p3;` Illegal. p3 must be initialized
e) `const int *p;` pointer to a const int