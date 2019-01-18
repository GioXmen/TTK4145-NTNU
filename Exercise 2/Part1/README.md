# Mutex and Channel basics

### What is an atomic operation?
> "Atomic operation" means an operation that appears to be instantaneous from the perspective of all other threads  
> "An operation acting on shared memory is atomic if it completes in a single step relative to other threads. 
> An atomic operation is an operation which does not allow for interruption, so the operation is seen as a single operation from other threads.

### What is a semaphore?
> Semaphore: n-member access to a resource  
> A semaphore is a way to lock a resource so that it is guaranteed that while a piece of code is executed, only this piece of code has access to that resource.  
> This keeps two threads from concurrently accesing a resource, which can cause problems. A semaphore is divided into two types Counting Semaphore and Binary Semaphore (value is 1 or 0).  
> This is not restricted to only one thread. A semaphore can be configured to allow a fixed number of threads to access a resource.  

### What is a mutex?
> Mutex: exclusive-member access to a resource  
> A mutex is similar to a Binary Semaphore, however it also includes ownership, so that no other tread can change the value.

### What is the difference between a mutex and a binary semaphore?
> A mutex can be used to syncronize access to a counter, file, database, etc.  
> A sempahore can do the same thing but supports a fixed number of simultaneous callers
> A key difference between a mutex and a binary semaphore is that the process that locks the mutex must be the one to unlock it. In contrast, it is possible for one process to lock a binary semaphore and for another to unlock it.  
> TLDR: The difference is ownership.

### What is a critical section?
> A critical section is group of instructions/statements or region of code that need to be executed atomically, such as accessing a resource (file, input, etc.).  
> Designation which is used on parts of the code where access to shared variables occurs.

### What is the difference between race conditions and data races?
 > Race condition - ordering or timing issues, which affect the overall corectness of a program,  
 > Data race - a fault which occurs when multiple threads interact with a shared resource,  
 > the result of which is unreliable and it will be dependant on the sequence or timing of the access.    
 
### List some advantages of using message passing over lock-based synchronization primitives.
> Does not need synchronisation. 
> Easier to scale to larger systems (may depend on the situation/ context). 
> Portable.  

### List some advantages of using lock-based synchronization primitives over message passing.
> Message passing usually requires more effort to achieve the same functionality than a program using shared variable/ synchronisation.  
> > Algorithms tend to be much simpler.  
