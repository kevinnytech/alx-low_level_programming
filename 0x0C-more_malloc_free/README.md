0x0C. C - More malloc, Advantages to casting

The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.



When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.



Including the cast may allow a C program or function to compile as C++.



The cast allows for pre-1989 versions of malloc that originally returned a char *.



Casting can help the developer identify inconsistencies in type sizing should the destination pointer type change, particularly if the pointer is declared far from the malloc() call (although modern compilers and static analyzers can warn on such behaviour without requiring the cast).



Disadvantages to casting



Under the ANSI C standard, the cast is redundant.



Adding the cast may mask failure to include the header stdlib.h, in which the prototype for malloc is found. In the absence of a prototype for malloc, the standard requires that the C compiler assume malloc returns an int. If there is no cast, a warning is issued when this integer is assigned to the pointer; however, with the cast, this warning is not produced, hiding a bug. On certain architectures and data models (such as LP64 on 64-bit systems, where long and pointers are 64-bit and int is 32-bit), this error can actually result in undefined behaviour, as the implicitly declared malloc returns a 32-bit value whereas the actually defined function returns a 64-bit value. Depending on calling conventions and memory layout, this may result in stack smashing. This issue is less likely to go unnoticed in modern compilers, as they uniformly produce warnings that an undeclared function has been used, so a warning will still appear. For example, GCC's default behaviour is to show a warning that reads "incompatible implicit declaration of built-in function" regardless of whether the cast is present or not.



If the type of the pointer is changed at its declaration, one may also, need to change all lines where malloc is called and cast.
