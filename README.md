# SaveTheEarth
avenger 1:
Thor

He is preferably the most powerful avenger in the team.
He is a god from asgard and the son of the king Odin.
he loves his weapon.


Explanation of sorting:

unconv pair:

I have taken the pair x,y of number from user and stored both of them in the array element by making a conversion giving x more value
then they are sorted normally using quick sort. while printing i separate the pairs from the converted no. by division for x and subracting the x part to give y.
quick sort is based on divide and conquer. here we keep partitioning the sets into elements grreater than and smmaler than the taken element- pivot, can be random(more efficient practically) first or last elemnt of array.after one step the pivot is updated for the present array ,then we take the elements of the tree in order.

merge sort algorithm:

the given array is repeatedly broken down into halves a(i to mid) and a(mid +1 to end )where mid= i+j/2 and the merge sort function is recursively applied to the divided halves. these goes on until we get either single elements or empty box (they are all sorted as only 1 element)
next the step wise merge occurs in ascending order giving sorted array of 2 elements, then these kind of arrays are merged to give size 4 arrays which are sorted ,this finally gives us the actual sized sorted array.
it is one of the best algo for sorting (Worst time complexity (nlog(n))

drawback:
we see that system requires extra space for implementation unlike quick sort. 

heap sort:
on receiving an unsorted list, the first step in heap sort is to create a Heap data structure(Max-Heap or Min-Heap). Once heap is built, the first element of the Heap is either largest or smallest, so we put the first element of the heap in our array. Then we again make heap using the remaining elements, to again pick the first element of the heap and put it into the array. We keep on doing the same repeatedly untill we have the complete sorted list in our array.
also has (Worst time complexity (nlog(n)
Heap sort is not a Stable sort, and requires a constant space for sorting a list.
