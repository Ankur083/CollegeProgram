//This is a c program to implement device management system calls 
#include <stdio.h> 
#include <fcntl.h> 
#include <unistd.h> 
#include <string.h> 
int main() { 
    int dev_fd; 
    char buffer[128]; 
    dev_fd = open("/dev/tty", O_RDWR); 
    if (dev_fd == -1) { 
        perror("Failed to open the device"); 
        return 1; 
    } 
    const char *message = "Hello, Device! This is a simple device management example.\n"; 
    if (write(dev_fd, message, strlen(message)) == -1) { 
        perror("Failed to write to the device"); 
        close(dev_fd); 
        return 1; 
    } 
    printf("Write something :\n"); 
    ssize_t bytes_read = read(dev_fd, buffer, sizeof(buffer) - 1); 
    if (bytes_read == -1) { 
        perror("Failed to read from the device"); 
        close(dev_fd); 
        return 1; 
    } 
    buffer[bytes_read] = '\0'; 
    printf("Data read from device:\n%s", buffer); 
    close(dev_fd); 
    printf("Device closed successfully.\n"); 
    return 0; 
}
