package main

import (
	. "fmt"
	"runtime"
	"time"
)

func firstGoroutine() {
	Println("HelloWorld - goroutine!")
}

func main() {
	runtime.GOMAXPROCS(runtime.NumCPU())    // I guess this is a hint to what GOMAXPROCS does...
	 									     // Try doing the exercise both with and without it!
	go firstGoroutine()                      // This spawns a goroutine

	// We have no way to wait for the completion of a goroutine (without additional syncronization of some sort)
	// We'll come back to using channels in Exercise 2. For now: Sleep.
	time.Sleep(100*time.Millisecond)
	Println("HelloWorld -  main!")
}