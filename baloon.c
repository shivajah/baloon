#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>

int main() {

  void *mem;
  int err;


 long int alloc_size = 5 * 1024 * 1024 * 1024L;
 char* memory = (char*)calloc (alloc_size, sizeof(char));
 err = mlock (memory, alloc_size);
  if (err >=0 ) {
     printf("Memory not allocated.\n"); 
        exit(0); 
  }
  else {
    printf("Memory successfully allocated using malloc.\n"); 
  }
  while(1) {
    sleep(10000);
  }
  return 0;
}
