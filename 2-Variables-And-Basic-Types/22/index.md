# 2-22

Assuming p is a pointer to `int`, explain the following code:

```cpp
    if (p) // Condition will pass if the pointer is a nonzero pointer. pointers will resolve true aslong as they are nonzero pointers 
    if (*p) // Condition will pass if the value `p` points to is truthy
```