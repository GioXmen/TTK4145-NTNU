# Reasons for concurrency and parallelism


To complete this exercise you will have to use git. Create one or several commits that adds answers to the following questions and push it to your groups repository to complete the task.

When answering the questions, remember to use all the resources at your disposal. Asking the internet isn't a form of "cheating", it's a way of learning.

 ### What is concurrency? What is parallelism? What's the difference?
 > Concurrency is typically used in single-core processors and it is a "virtual" form of parallelism, which means that a process can start, run and stop  
 >  regardless of other processes.  
 >
 >  Parallelism is when multiple tasks are run at literally the same time, typically used in a multi-core processor.  
 >  
 >  Main difference:  
 >   Concurrency: Interruptability  
 >   Parallelism: Independentability  

 
 ### Why have machines become increasingly multicore in the past decade?
 > Using multiple cores leads to increased efficiency, in modern-day CPU's it's not practical to keep increasing clock frequency,  
 >  so manufacturers have started adding more cores to improve performance.  
 
 ### What kinds of problems motivates the need for concurrent execution?
 (Or phrased differently: What problems do concurrency help in solving?)
 > Any problems where multiple things/events are happening at the same time. For example: When two users/students are trying to access a server at the same time.  
 
 > Concurrent execution is useful for processes that should wait for input and take action, instead of running constant loops, checking conditions or blocking execution.  
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > TBD  
 
 ### What are the differences between processes, threads, green threads, and coroutines?
 > Processes carry more state information when compared to threads, while multiple threads within a process have shared resources (state, memory, other resources).  
 >  Threads exist as a subset of a process, while processes are independent (in most cases).  
 >  Green threads are scheduled by a virtual machine(VM) instead of normal threads, which are scheduled by the underlying operating system.  
 >  Coroutines are computer program components that generalize subroutines for nonpreemptive multitasking by allowing multiple entry points for suspending and resuming execution at certain locations.  
 >  Comparing a coroutine to a thread: Coroutines are a form of sequential processing: only one is executing at any given time  
 >  and threads are a form of concurrent processing: multiple threads may be executing at any given time.  
 
 ### Which one of these do `pthread_create()` (C/POSIX), `threading.Thread()` (Python), `go` (Go) create?
 > 		pthread_create():   
 >			Creates a thread.
 >		threading.Thread():
 >			Creates a thread.
 >		go:
 >		    Creates/Spawns a goroutine, a hybrid of threads and coroutines. Or simply - a green thread, since 
 >			Golang run time handles scheduling and resource allocation for the goroutines internally. 
 
 ### How does pythons Global Interpreter Lock (GIL) influence the way a python Thread behaves?
 > Python's memory management is not thread-safe, which is why we use a GIL lock to prevent multiple native threads from executing/running the same bytecode.  
 
 ### With this in mind: What is the workaround for the GIL (Hint: it's another module)?
 > A workaround would be to use the multiprocessing module in which you share variables, ressources with pipes and arrays.  
 > With this you can side-step the Global Interpreter Lock by using subprocesses instead of threads.  
 
 ### What does `func GOMAXPROCS(n int) int` change? 
 > It sets the maximum number of CPU cores that can be executing simultaneously.  
