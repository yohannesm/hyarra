# Introduction #
We implement an stack-allocated array object.


## implementation ##
> ### Constructor ###
There are two constructors, one that initialize the array of size N with N element,the other that constructs the array by using some sequences from an input iterator.
> ### operator[.md](.md) ###
reference operator [.md](.md) that gets an element inside the array container.
const\_reference operator [.md](.md) that gets a constant reference of an element inside the array container.
> ### at ###
reference at to get the element of the Array at the specified index.
const\_reference at to get the element of the Array at the specified index.
> ### iterator ###
iterator begin that returns an iterator to the beginning of the Array.
const\_iterator that returns a constant  iterator to the beginning of the Array.
iterator end that returns an iterator to the end of the Array.
const\_iterator end that returns a constant iterator to the end of the Array.
> ### size ###
size\_type size that returns the size of the stack allocated array.
> ### print ###
It prints the array.
## Advantage of using this array ##
1.It is stack-allocated array.
2.we can use an assignment
3.we can use an constructor.
4.we can use array STL algorithm.
Therefore, comparing to the regular array provided in c++, we can use more functions than from regular array.