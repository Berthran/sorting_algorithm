## Bubble Sort algorithm

The bubble sort is a simple sorting algorithm that repeatedly steps through the input list element by element, comparing the current element with the one after it, swapping their values if needed until no swaps need to be performed.

Summary of bubble sort algorithmic operation
* Traverse an array until its sorted [A LOOP]
* Compares elements [A CONDITIONAL STATEMENT]
* Swap elements [AN OPERATION]

The terminating condition of the bubble sort algorithm is based on the idea that with each iteration, the largest unsorted number in the array is sorted (i.e it "bubbles" up to the top of the list, hence the name "bubble sort").
This is wonderfully illustrated [here.](https://en.wikipedia.org/wiki/File:Bubble-sort-example-300px.gif)


## Bubble sort bottlenecks
* In bubble sort, the largest element in the list will win every swap, so it moves to its sorted position on the first pass even if it starts near the beginning. 
* On the other hand, an element that must move toward the beginning of the list cannot move faster than one step per pass, so elements move toward the beginning very slowly. 
* If the smallest element is at the end of the list, it will take n-1 passes to move it to the beginning. This has led to these types of elements being named rabbits and turtles.
* After sorting is complete, the algorithm needs one additional whole pass without any swap to know it is sorted.

## Optimizing bubble sort
* Less iteration for inner loop by 1 since the n-th pass of the algorithm finds the n-th largest element and puts it into its final place. 
* After every pass, all elements after the last swap are sorted, and do not need to be checked again.



