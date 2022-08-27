# 2-9

Explain the following definitions. For those that are illegal, explain what's wrong and how to correct it.

a) `std::cin >> int input_value;` you need to define the variable before using it with the input operator.
b) `int i = {3.14};` tries to use list initialization. Throws an arrow about narrowing. You need to convert to int first
c) `double salary = wage = 999.99;` wtf is wage lol
d) `int i = 3.14;` i has value 3