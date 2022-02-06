# Assignment 5-2 Responses

Files in this repository are to be used only for educational purposes at UNC Charlotte. 
The author makes no guarantees about the reliability of the code.

1.  What does the uncorrected pthread-data-sharing-mutex-os-call.cpp do?
-   The main thread of the program creates some number of threads defined by the macro TOTAL_THREADS that each increment by 1 the global variable, count, a total of 10 times, resulting in a final count value of 10 × TOTAL_THREADS. After each increment, each thread displays the updated count value. Once the threads fully execute, the main thread displays the final count value and terminates the program.

2.  What output does the program produce?
-   The program outputs count values from each thread where the ordering of the turns during which the threads output the count values is not consistent. These count values usually ascend in consistent increments of 1, but occasionally skip or duplicate a count. Lastly, the program consistently outputs a final count value of 10 × TOTAL_THREADS.

3.  Examine the program code carefully. Is the program functioning correctly?
-   The program is not functioning correctly if the count increments are intended to be displayed in consistently and strictly increasing order.

4.  If you do not think that the program is working correctly, describe why?
-   I do not think that the program is working correctly because the global variable, count, is not being incremented and displayed in a protected manner. Specifically, the different threads appear to be competing where the they occasionally increment the count multiple times before one of the other threads produce output, or the threads occasionally produce output multiple times after some threads have incremented the count.
