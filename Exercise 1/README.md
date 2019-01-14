Exercise 1 : Hello World
========================

This exercise does not require that you use the machines at the real-time lab. However, the C code uses POSIX, so you'll need a POSIX-compliant OS, like linux or OSX.

[Go](http://golang.org) has an [interactive "Tour"](http://tour.golang.org/list) you can take. Go's syntax is a bit different, so it may be worth skimming through, or at least using as a quick reference.

## Parts
- Part 1: Thinking about elevators
- Part 2: Set up source control and build tools
- Part 3: Reasons for concurrency and parallelism
- Part 4: Finally some code

## Approval
When asking for approval, make sure to prepare the following.
- Part 3:
    - The modified file with answers filled in. You should open it at github or some other place where the markdown will be rendered nicely.
- Part 4:
    - The RESULT.md file where you have written a couple of sentances explaining the result you get. (HINT: You're suppose to discover some weirdness, and you might have to run your program several times to trigger it).
    - A terminal where you can run your code while the student assistant is watching.

Part1: Thinking about elevators
---------------------------

Not for handing in, just for thinking about. Talk to other groups, assistants, or even people who have taken the course in previous years.

Brainstorm some techniques you could use to prevent a user from being hopelessly stranded, waiting for an elevator that will never arrive. Think about the [worst-case](http://xkcd.com/748/) behaviour of the system.
 - What if the software controlling one of the elevators suddenly crashes?
 - What if it doesn't crash, but hangs?
 - What if a message between machines is lost?
 - What if the network cable is suddenly disconnected? Then re-connected?
 - What if a user of the system is being a troll?
 - What if the elevator car never arrives at its destination?
 
 # Version Control

If you can read this text you have already taken your first steps in starting to use a version control system.

A version control system is a tool helps a group of people work on the same files in a systematic and safe manner, allowing multiple users to make changes to the same file and merge the changes later. It is also possible to create diverging branches so that multiple independent areas of development can happen in parallel, then have these merged together safely at a later time. Version control systems also keep track of all previous versions of files, so that you can revert any or all changes made since a given date.

In this course we will be using Github Classroom, where you will find the assignment texts, project description, and all the code related to the project. You will be given private repositories on the TTK4145 organization, which means that teachers and student assistants will have access to your code by default. You can create issues that reference specific assignment tasks or part of your project code while tagging the student assistants to get their attention.

You will not be able to complete this exercise without a very basic practical understanding of git. Unless you're already familiar with git, it's highly recommended to have a look at the following resources before moving on to Part 3 and 4. Don't let the feeling that you have to google everything discourage you, this is perfectly fine, even expected. And don't forget that the student assistants are there to help you.

- Do the [interactive tutorial](https://try.github.io/)
- Play the [Git Game](https://www.git-game.com/)
- [Feature branch workflow](https://www.atlassian.com/git/tutorials/comparing-workflows/feature-branch-workflow)

Some prefer the command line while some prefer something graphical, both is fine. An overview of graphical git clients can be found [here](https://git-scm.com/download/gui/linux).

# Reasons for concurrency and parallelism


To complete this exercise you will have to use git. Create one or several commits that adds answers to the following questions and push it to your groups repository to complete the task.

When answering the questions, remember to use all the resources at your disposal. Asking the internet isn't a form of "cheating", it's a way of learning.

 ### What is concurrency? What is parallelism? What's the difference?
 
 ### Why have machines become increasingly multicore in the past decade?
 
 ### What kinds of problems motivates the need for concurrent execution?
 (Or phrased differently: What problems do concurrency help in solving?)
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 
 ### What are the differences between processes, threads, green threads, and coroutines?
 
 ### Which one of these do `pthread_create()` (C/POSIX), `threading.Thread()` (Python), `go` (Go) create?
 
 ### How does pythons Global Interpreter Lock (GIL) influence the way a python Thread behaves?
 
 ### With this in mind: What is the workaround for the GIL (Hint: it's another module)?
 
 ### What does `func GOMAXPROCS(n int) int` change? 
 
 
 Part 4: Finally some code
--------------------

Implement this in C, Python and Go:


    global shared int i = 0

    main:
        spawn thread_1
        spawn thread_2
        join all threads (wait for them to finish)
        print i

    thread_1:
        do 1_000_000 times:
            i++
    thread_2:
        do 1_000_000 times:
            i--
            

### Delivery
In this exercise you should take advantage of the starter code found in the subdirectories corresponding to the three different programming languages. Fill out the missing code and make sure your program is working before committing and pushing the changes to your repository.

Finally, create a new file called RESULT.md inside this directory explaining what happens and why. Remember to add, commit and push the new file.


