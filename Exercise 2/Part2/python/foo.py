from threading import Lock, Thread

lock = Lock()
i = 0

def incrementingFunction():

    
    global i
    for _ in range(1000000):
        lock.acquire()
        i = i + 1

    lock.release()

def decrementingFunction():

    global i
    for _ in range(1000000):
        lock.acquire()
        i = i - 1
    lock.release()

# Potentially useful thing:
#   In Python you "import" a global variable, instead of "export"ing it when you declare it
#   (This is probably an effort to make you feel bad about typing the word "global")


def main():
    global i
    incrementing = Thread(target=incrementingFunction, args=(), )
    decrementing = Thread(target=decrementingFunction, args=(), )
    incrementing.start()
    decrementing.start()
    incrementing.join()
    decrementing.join()

    print("The magic number is %d" % (i))


main()
