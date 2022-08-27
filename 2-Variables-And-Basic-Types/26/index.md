# 2-26

Which of the following are legal? For those that are illegal, explain why.

a) `const int buf;` illegal. you need to initialize const values;
b) `int cnt = 0;` legal
c) `const int sz = cnt`; legal
d) `++cnt; ++sz;` illegal. sz is a const and we are attempting to alter its value