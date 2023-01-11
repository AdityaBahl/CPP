/*
learnt From Love Babbar(https://www.youtube.com/watch?v=NKJnHewiGdc)
Q. What is a Heap?
Ans. It is a Complete Binary Tree(CBT) which comes in a heap order property.
    Now, a A complete binary tree is a special type of binary tree where all the levels of the tree are filled completely except
    the lowest level nodes which are filled from as left as possible.
    (For Reference, https://i.stack.imgur.com/MeMzS.png)

Q. Types of Heap?
Ans. There are 2 types of heaps:
     a. MaxHeap-Parent node is greater than the 2 child nodes.
     b. MinHeap-Parent node is smaller than the 2 child nodes.
    (For Refence, https://www.techiedelight.com/wp-content/uploads/2016/11/Min-Max-Heap.png)

Notes:
1. To find child nodes of a parent node a neat trick is,
    Left child node = parent node * 2                                       -------(1)
    Right child node = parent node * 2 + 1                                  -------(2)
2. To find parent nodes of child nodes, reverse the above formulas.
    Parent Node = Left child node/2                                         -------(3)
    Parent Node = (Right child node - 1 )/2                                 -------(4)

Q. Algorithm for insertion in a heap?
Ans. Its as follows:
    1.Insert at the end of the heap
    2.Take it to its correct position
      a. See whether the parent node is greater than the current node in a loop by formula (3 or 4)
    3.
*/