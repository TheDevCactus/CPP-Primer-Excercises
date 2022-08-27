# 2-16

Which, if any, of the following assignments are invalid? If they are valid, explain what they do.

assume the following is defined.

`int i = 0, &r1 = i; double d = 0, &r2 = d;

a) `r2 = 3.14159` valid. assignes the object r2 references with the value of `3.14159`.
b) `r2 = r1` valid. r2 will take the value of whatever object r1 is referencing
c) `i = r2` valid. i will equal 3 (narrowing happens)
d) `r1 = d` the object i will equal 0