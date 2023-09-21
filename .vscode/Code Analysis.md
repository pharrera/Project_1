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
*. Increased complexity offers precise control and in place partioning, but opens up the possiblity of introducing errors 

Overall, I beleive Haskell is a strong tool for understanding algorithms, comparable to pseudocode but emphasizing mathematic principles

# Section 2