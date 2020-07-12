# baloon
This program locks the specified amount of memory from RAM which can be helpful if someone needs to limit the amount of buffer/cache.
Compile the program using:
  gcc baloon.c -o baloon
Just before running the program, run:
free -m

Then run the program:
./baloon &

Then again check the results of this program by running "free -m" again. You should see a difference in amount of buffer/cache and used memory.
