#include <fcntl.h>
#include <stdio.h>

int main(int argc, char* argv[]){
  int fd;
  if(argc != 2){
    printf("USAGE: ./open <filename>\n");
  }else{
    if((fd = open(argv[1],O_RDONLY) >0)){
      printf("The file \'%s\' is succesfully open\n", argv[1]);
    }else{
      perror(argv[1]);
    }
  }
  return 0;
}
