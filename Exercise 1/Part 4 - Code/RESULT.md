Part 4 - Code implementation
============================
  
Implemented two threads that decrement and increment, the same shared resource value (i) 100000 times. The ouput value is unpredictable, since the threads 
are incrementing/decrementing the same value/resource concurrently.  
  
There is no guaranteed behavior for what happens when the value is altered concurrently by two threads.  
  
Implemented in C, Python and GO.  

Specific in GO: Programs that perform parallel computation should benefit from an increase in GOMAXPROCS. However, concurrency != parallelism.