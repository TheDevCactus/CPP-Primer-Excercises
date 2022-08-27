# 2-14

Is the following program legal? If so, what values are printed?

```cpp
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i) 
    sum += i;
std::cout << i << " " << sum << std::endl;

// outputs: 100 45

```