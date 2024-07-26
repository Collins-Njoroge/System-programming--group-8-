#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    // Fork a child process
    pid = fork();

    if (pid < 0) {
        // Error occurred during fork
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("Child Process: PID = %d, Parent PID = %d\n", getpid(), getppid());
        // Perform some task in the child process
        printf("Child Process: Doing some work...\n");
        sleep(2); // Simulate work with sleep
        printf("Child Process: Work done!\n");
    } else {
        // Parent process
        printf("Parent Process: PID = %d, Child PID = %d\n", getpid(), pid);
        // Wait for the child process to complete
        wait(NULL);
        printf("Parent Process: Child completed\n");
    }

    return 0;
}
