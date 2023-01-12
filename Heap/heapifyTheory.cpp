/*
Note:
1. Leaf Nodes of a Complete Binary Tree(CBT)(refer to heapTheory.cpp) lie
   between n/2 to n where n = number of nodes.
   For example - I/p = 54 53 55 52 50
                Then, leaf nodes are from (n/2)+1 to n
                i.e; (5/2)+1 to 5
                i.e; 3 to 5

Q. What is Heapify?
Ans. Heapify is the process of creating a heap data structure from a
    binary tree represented using an array. It is used to create Min-Heap
    or Max-heap. Start from the first index of the non-leaf node whose
    index is given by n/2 – 1.

Q. Process of Heapify-ing?
Ans. The steps are:
    1. We need to convert non leaf nodes into heap.
    2. Because Leaf Nodes are always in a heap format.
    3. As seen above in the notes, leaf nodes are from n/2+1 to n
    4. Hence, take nodes from 1 to n/2 and convert them into heap if
       not already.
*/