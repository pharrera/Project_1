# Section 1

Peter Herrera, Brian Benitez - Haskell vs. C Quick Sort comparative analysis. 

## Quick Sort in Haskell:
* Since Haskell is purely functional, the approach is much more concise for implementing Quick Sort. 
* The partitions are implemented using list comprehensions, increasing readiblity.
* Type interference and strongly typed integers reduce errors

*** 

## Quick Sort in C: 
* Since C is a low level language, there must be explicit memory managememnt. For ex:
  ```C
  int pivot = array[a];
  int i = a + 1;
  
  ```
  Having to choose the pivot element, then initializing the index of the smaller element. Dealing with memory in arrays requires careful management of indices and pointers.
  
* Increased complexity offers precise control and in place partitioning, but opens up the possiblity of introducing errors 

Overall, I beleive Haskell is a strong tool for understanding algorithms, comparable to pseudocode but emphasizing mathematic principles

# Section 2

Valerie Pham, Jason Lam - Haskell vs. C Merge Sort comparative analysis. 

## Merge Sort in Haskell:
* Haskell is a purely functional programming language, meaning that it works like a mathematical function (answer = expression) and poses no issue of side effects.
* The Ord type is used to enforce a natural ordering of lists in the merge and mergesort function.
* Mergesort function is called recursively to continuously half the list and merge the resulting sorted lists

## Merge Sort in C:
* Unlike in Haskell, in C, a temporary array was required in order to be able to "move" or rearrange the elements in the array to sort.
* In C, there are a lot of syntax that is needed to perform and more lines is needed compared to Haskell.
* In Haskell, everything is written more as mathematical functions, but in C it is more strict.

***
