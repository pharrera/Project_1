Assignment_Details.md

In this assignment you will compare the procedural with the functional programming paradim.

Remember the sorting algorithms quick sort (Tony Hoare, 1959) and merge sort (John von Neumann, 1945).
Write each sorting algorithm in C and in Haskell by implementing the following procedures/functions:
 void quick_sort(int *a, int n);   // quick sort an array a with n elements in C
void merge_sort(int *a, int n);   // merge sort an array a with n elements in C

quickSort :: Ord a => [a] -> [a]  -- quick sort a list in Haskell
mergeSort :: Ord a => [a] -> [a]  -- merge sort a list in Haskell
The implementation of merge sort in C will require a temporary array. This array has to be dynamically allocated (not automatically).
Make sure to do this correctly and try to understand why this is necessary.
Write a simple main function (one in C and one in Haskell) with a few test cases.
Make sure to cover edge cases like empty or invalid input.
Deliverables:

Provide a list of all tools (i.e. compilers, editors, IDEs, etc.) and websites (i.e. discord.com, haskel.org, REPL.it, etc.) that you used to complete this assignment.
Write a text (about 250 words) with your observations: Which similarities and differences between C and Haskell did you discover.
Upload your source code .h, .c, and .hs files.