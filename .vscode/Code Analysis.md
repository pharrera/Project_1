# Section 1

Peter Herrera - Haskell vs. C Quick Sort comparative analysis. 

## Quick Sort in Haskell:
* Since Haskell is purely functional, the approach is much more concise for implimenting Quick Sort. 
* The partions are implimented using list comprehensions, increasing readiblity.
* Type interference and strongly typed integers reduce erros

*** 

## Quick Sort in C: 
* Since C is a low level language, there must be explicit memory managememnt. For ex:
  ```C
  int pivot = array[a];
  int i = a + 1;
  
  ```
  Having to choose the pivot element, then initializing the index of the smaller element. Dealing with memory in arrays requires careful management of indices and pointers.
  
* Increased complexity offers precise control and in place partioning, but opens up the possiblity of introducing errors 

Overall, I beleive Haskell is a strong tool for understanding algorithms, comparable to pseudocode but emphasizing mathematic principles

# Section 2

Valerie Pham, Jason Lam

## Quick Sort in Haskell:
* Haskell is a purely functional programming language, meaning that it works like a mathematical function (answer = expression) and poses no issue of side effects.
* The Ord type is used to enforce a natural ordering of lists in the merge and mergesort function.
* Mergesort function is called recursively to continuously half the list and merge the resulting sorted lists

***
