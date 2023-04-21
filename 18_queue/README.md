# Queue

Queue is basically a linear data structure to store and manipulate the data elements. It follows the order of First In First Out (FIFO).

In queues, the first element entered into the array is the first element to be removed from the array.

Queue is open at both the ends, one end is provided for the insertion of data and the other end for the deletion of data.

## Operations associated with Queue in C

- ``isEmpty()``: To check if the queue is empty
- ``isFull()``: To check whether the queue is full or not
- ``dequeue()``: Removes the element from the frontal side of the queue
- ``enqueue()``: It inserts elements to the end of the queue
- ``Front``: Pointer element responsible for fetching the first element from the queue
- ``Rear``: Pointer element responsible for fetching the last element from the queue.

## Working of queue data structure
Queue follows the FIFO pattern. The first element is the first to be pulled out from the list of elements.

- ``Front`` and ``Rear`` pointers keep the record of the first and last element in the queue.
- At first, we need to initialize the queue by setting ``Front = -1`` and ``Rear = -1``
- In order to insert the element (enqueue), we need to check wheteher the queue is already full, check the condition for Overflow, if the queue is not full, we'll have to increment the value of the Rear index by 1 and place the element at the position of the Rear pointer variable. When we get to insert the first element in the queue, we need to set the value of Front to 0.
- In order to remove the element (dequeue) from the queue, we need to check whether the queue is already empty, check the condition for Underflow. If the queue is not empty, we'll have to remove and return the element at the position of the Front pointer, and the increment the Front index value by 1. When we get to remove the last element from the queue, we will have to set the values of the Front and Rear indez to -1.

## [More about Queues](https://www.digitalocean.com/community/tutorials/queue-in-c#operations-associated-with-a-queue-in-c)