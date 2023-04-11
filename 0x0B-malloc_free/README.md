0x0B. C - malloc, free

The malloc() function is used to allocate memory dynamically at runtime.
The function allocates a block of memory of a specified size and returns a pointer to the first byte of the block.
If the allocation fails, malloc() returns a NULL pointer.

The free() function is used to deallocate memory that was previously allocated using malloc() or a related function such as calloc().
It frees the memory block pointed to by the pointer passed as argument and makes it available for future allocations.
If the pointer is NULL, free() does nothing.
