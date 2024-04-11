# Sorting algorithms & Big O

This repository is a group project for the Big O algortihms. This project intends for us to be able to understand and explain this algorithms by ourselves.

# What is Big O Notation?

Big O notation is a mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity. It is a member of a family of notations invented by Paul Bachmann, Edmund Landau, and others, collectively called Bachmann–Landau notation or asymptotic notation

## Algorithms implemented

## Bubble sort


In **Bubble Sort** algorithm
*traverse from left and compare adjacent elements and the higher one is placed at right side.
*In this way, the largest element is moved to the rightmost end at first.
*This process is then continued to find the second largest and place it and so on until the data is sorted.


`0. Bubble sort`
## Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

**prototype**
```c
void bubble_sort(int *array, size_t size)
```

Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list. It is a stable sorting algorithm, meaning that elements with equal values maintain their relative order in the sorted output.

In **Insertion sort**
* Start with second element of the array as first element in the array is assumed to be sorted.
* Compare second element with the first element and check if the second element is smaller then swap them.
* Move to the third element and compare it with the second element, then the first element and swap as necessary to put it in the correct position among the first three elements.
* Continue this process, comparing each element with the ones before it and swapping as needed to place it in the correct position among the sorted elements.
* Repeat until the entire array is sorted.

`1. Insertion sort`
## Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

**prototype**
```c
void insertion_sort_list(listint_t **list)
```






## Contributors
##### Thais Rodriguez
Holberton School, cohort 23
##### Danielys Carrasquillo
Holberton School, cohort 23

