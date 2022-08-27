# 2-15

Which of the following definitions, if any, are invalid? why?

a) `int ival = 1.01`. Gets narrowed to `1` but is valid;
b) `int &rval1 = 1.01`. Invalid. References must be initialized to objects.
c) `int &rval2 = ival` Valid. 
d) `int $rval3`. Invalid. References must be initialized.