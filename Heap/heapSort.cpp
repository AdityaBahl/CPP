/*
Refer to - https://www.geeksforgeeks.org/heap-sort/
           https://www.youtube.com/watch?v=NKJnHewiGdc
Q. What is Heap Sort?
Ans. Heap sort is an in-place algorithm.Its typical implementation is
not stable, but can be made stable. Typically 2-3 times slower than
well-implemented QuickSort.  The reason for slowness is a lack of
locality of reference.

Q. Advantages of Heap Sort?
Ans.
1. Efficiency –  The time required to perform Heap sort increases
logarithmically while other algorithms may grow exponentially slower as
the number of items to sort increases. This sorting algorithm is very
efficient.
2. Memory Usage – Memory usage is minimal because apart from what is
necessary to hold the initial list of items to be sorted, it needs no
additional memory space to work
3. Simplicity –  It is simpler to understand than other equally efficient
 sorting algorithms because it does not use advanced computer science
 concepts such as recursion

 Q. Applications of Heap Sort?
 Ans.
1. Heapsort is mainly used in hybrid algorithms like the IntroSort.
2. Sort a nearly sorted (or K sorted) array.
3. k largest(or smallest) elements in an array.

Q. Algorithm of Heap Sort?
Ans. Steps are:
1. swap(a[i],a[n]) where a[i]=root and a[n]=last node
2. bring root node to correct position
3.
*/