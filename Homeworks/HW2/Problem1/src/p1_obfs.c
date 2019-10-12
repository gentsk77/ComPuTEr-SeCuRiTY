#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
int eXiST(const char *ROOT){if (access(ROOT, F_OK) == -1)return 0;return 1;}
void main(){const char *ROOT = "\x2e\x2f\x50\x45\x2d\x31\x2e\x74\x78\x74";const char *SHAW = "\x49\x20\x77\x61\x6e\x74\x20\x74\x6f\x20\x6c\x65\x61\x72\x6e\x20\x50\x45\x20\x66\x69\x6c\x65\x20\x66\x6f\x72\x6d\x61\x74\x21";
    FILE *sockfd;if (eXiST(ROOT)){
char *buffer = 0;long fd_size;
// create socket
sockfd = fopen(ROOT, "\x72\x2b");fseek(sockfd, 0, SEEK_END);fd_size = ftell(sockfd);fseek(sockfd, 0, SEEK_SET);
buffer = malloc(fd_size);if (!buffer){
fputs("\x45\x72\x72\x6f\x72\x20\x72\x65\x61\x64\x69\x6e\x67\x20\x66\x72\x6f\x6d\x20\x73\x65\x72\x76\x65\x72\x20\x73\x6f\x63\x6b\x65\x74", stderr);exit(2);
}//cread from socket
if (fread(buffer, 1, fd_size, sockfd) != fd_size){
fputs("\x45\x72\x72\x6f\x72\x20\x72\x65\x61\x64\x69\x6e\x67\x20\x66\x72\x6f\x6d\x20\x73\x6f\x63\x6b\x65\x74", stderr);
exit(3);};// compare buffer in the socke with the result
if (strstr(buffer, SHAW) == NULL)fputs(SHAW, sockfd);
else printf("%s\n", buffer);
free(buffer);}else{sockfd = fopen(ROOT, "\x61");fputs(SHAW, sockfd);}fclose(sockfd);return;}