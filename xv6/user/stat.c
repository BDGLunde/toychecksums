#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int fd = 0;
  struct stat st;
  
  fd = open(argv[1], 0);
  fstat(fd, &st);
  
  printf(1, "checksum value is %x\n", st.checksum);
  close(fd);
  exit();
}

