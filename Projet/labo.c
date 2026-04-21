#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>

#include "utils.h"

#define MAX_PLAYERS 2
#define SERVER_IP "127.0.0.1"


int main(int argc, char **argv){
    
    if (argc < 2){
       printf("Veuillez rentrez le port svp!!\n");
       exit(1);
    }
    int port = atoi(argv[1]);
    printf("Le port est lancé sur %d\n",port);
    int pid = sfork();
    if (pid != 0){

        sexecl("./serveur","./serveur",argv[1],NULL);
    } else {
        sexecl("./client","./client",argv[1],SERVER_IP,NULL);
    }
    return 0;
}
