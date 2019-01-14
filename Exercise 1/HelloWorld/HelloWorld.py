from threading import Thread

i = 0


def threadFunction():
    print("HelloWorld - threadFunction!")

    # Potentially useful thing:
    #   In Python you "import" a global variable, instead of "export"ing it when you declare it
    #   (This is probably an effort to make you feel bad about typing the word "global")



def main():
    global i
    threadFunc = Thread(target=threadFunction, args=(), )
    threadFunc.start()

    threadFunc.join()
    print("HelloWorld - mainFunction!")


main()