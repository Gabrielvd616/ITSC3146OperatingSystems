# Assignment 5-1 Responses

Files in this repository are to be used only for educational purposes at UNC Charlotte. 
The author makes no guarantees about the reliability of the code.

1.  What does pthread-data-sharing-mutex.cpp do?
-   The main thread of the program creates two threads that each increment by 1 the global variable, count, a total of 10 times, resulting in a final count value of 20. After each increment, each thread displays the updated count value. Once the threads fully execute, the main thread displays the final count value and terminates the program.

2.  What output does the program produce?
-   The program outputs count values from each thread where the ordering of the turns during which the threads output the count values is not consistent. These count values usually ascend from 1 to 20, but occasionally skip or duplicate a count. Lastly, the program consistently outputs a final count value of 20.

3.  Examine the program code carefully. Is the program functioning correctly?
-   The program is not functioning correctly if the count increments are intended to be displayed in consistently and strictly increasing order.

4.  If you do not think that the program is working correctly, describe why?
-   I do not think that the program is working correctly because the global variable, count, is not being incremented and displayed in a protected manner. Specifically, the two threads appear to be competing where the threads occasionally increment the count twice before one of the two threads produce output, or the threads occasionally produce output twice after both have incremented the count.
