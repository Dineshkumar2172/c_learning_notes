#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080

/*
    1. Socket Creation

    2. Binding

    3. Listening for Connections

    4. Accepting Connections

    5. Handling Client Requests:
    
    6. Closing the Connection:
   
    7. Looping for Continuous Operation:

*/

int main() {

    /*
        server_fd: File descriptor for the server socket.
        new_socket: File descriptor for the new client socket.
        address: A structure of type sockaddr_in representing the server address.
        addrlen: Variable to store the size of the address structure.
        response: HTTP response message to be sent to clients.

        Note on File descriptor:

            A file descriptor in Unix-like operating systems, including Linux and macOS, is an abstract indicator (usually an integer) used to access files,
            sockets, pipes, and other I/O resources managed by the operating system. It serves as a handle or reference to these resources. Here's a breakdown
            of its purpose and usage:

            1. Accessing I/O Resources: File descriptors are used to access various I/O resources, including:
                    i) Files: Regular files, directories, device files, etc.
                   ii) Sockets: Communication endpoints for network communication.
                  iii) Pipes: Inter-process communication channels.
                   iv) Devices: Hardware devices exposed as files in the filesystem (e.g., /dev in Unix-like systems).

            2. System Calls: File descriptors are essential for performing I/O operations on these resources using system calls. Common system calls
            include open(), read(), write(), close(), socket(), bind(), connect(), etc. These system calls take file descriptors as arguments to specify
            the resource on which the operation should be performed.

            3. Resource Management: File descriptors are managed by the operating system's kernel. When a file is opened or a socket is created, the kernel
            assigns a unique file descriptor to represent that resource. The application can then use this file descriptor to perform various operations
            on the resource.

            4. Concurrency and Communication: File descriptors are crucial for inter-process communication and concurrency. They enable processes to
            communicate with each other through pipes, sockets, or other mechanisms. Processes can share file descriptors to establish communication channels
            or pass data between each other.

            5. Standard File Descriptors: In Unix-like systems, there are three standard file descriptors associated with every process:
                i) Standard input (stdin): File descriptor 0, typically connected to the keyboard.
               ii) Standard output (stdout): File descriptor 1, typically connected to the terminal or console.
              iii) Standard error (stderr): File descriptor 2, typically connected to the terminal or console for error output.
    
            File descriptors are a fundamental concept in Unix-like systems, and understanding how to use them is essential for writing programs that interact
            with files, networks, and other I/O resources efficiently and effectively.
    */

    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);

    /*
        In the below response, we are not actually assigning the memory address of another variable. 
        Instead, you're creating a pointer variable (response) and initializing it with the memory address where the string "Hello, world!" is stored.
        In C, string literals like "Hello, world!" are stored in a special region of memory known as the "read-only data segment" or "text segment".
        These string literals are essentially constant arrays of characters, and their memory addresses are fixed at compile time. So, when you write
        char *response = "Hello, world!";, you're creating a pointer variable named response, and you're setting it to point to the
        memory address where the string "Hello, world!" is stored in the read-only data segment. Because string literals are stored in a fixed location
        in memory and cannot be modified, it's safe to use a pointer to refer to them directly without worrying about accidentally changing their contents.
    */

    char *response = "HTTP/1.1 200 OK\nContent-Type: text/plain\nContent-Length: 12\n\nHello, world";

    /*
        This section creates a socket using the socket() function.
        AF_INET specifies the address family (IPv4).
        SOCK_STREAM indicates a TCP socket for stream-oriented communication.
        If the socket() function returns 0, an error is printed using perror() and the program exits.
    */

    if((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }
    
    /*
        sin_family is set to AF_INET to indicate the address family.
        sin_addr.s_addr is set to INADDR_ANY, which allows the server to accept connections on any available network interface.
        sin_port is set to the port number defined earlier, converted to network byte order using htons().
    */

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = PORT;

    /*
        This section binds the socket to the server address using the bind() function.
        
        If the bind() function fails, an error is printed and the program exits.

        1. struct sockaddr: This refers to a structure that holds socket address information. In C, struct sockaddr is a generic structure used for
        representing socket addresses. It's often used as a base type for more specific address structures, such as struct sockaddr_in for IPv4
        addresses or struct sockaddr_in6 for IPv6 addresses.

        2. &address: The & operator is the "address-of" operator in C. It's used to get the memory address of a variable. In this case, address is a
        variable of type struct sockaddr_in (or another related type). &address retrieves the memory address where the address variable is stored.
        
        3. (struct sockaddr *): This is a typecast. It's used to convert the type of the pointer &address from struct sockaddr_in* (or another related type)
        to struct sockaddr*.
        
        In the context of socket programming, many functions (like bind(), connect(), etc.) expect a pointer to a struct sockaddr as an argument. However, since bind() expects a struct sockaddr* type, you need to cast &address to that type using (struct sockaddr *).

        So, (struct sockaddr *)&address is effectively passing the address of the address variable as a pointer to a struct sockaddr to the bind()
        function. This allows bind() to access the address information stored in the address variable, even though its actual type is struct sockaddr_in
        (or another related type). This is a common technique used in socket programming to work with generic socket address structures.
    */

    if(bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("Bind Failed");
        exit(EXIT_FAILURE);
    }

    /*
        We set the server socket to the listening state using the listen() function.
        
        The second argument specifies the maximum number of queued connections (backlog) allowed.
    */

    if(listen(server_fd, 3) < 0) {
        perror("Listen Failed");
        exit(EXIT_FAILURE);
    }

    /*
        1. This part of the code accepts incoming connections from clients using the accept() function within a loop.
        2. It blocks until a client connects.
        3. Upon successful connection, it creates a new socket (new_socket) for communication with the client.
        4. After accepting a connection, the server sends the predefined HTTP response message to the client using the send() function.
        5. The client socket is then closed using the close() function.
        6. The server continues to accept new connections in the while loop.
    */

    while (1) {
        if((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen)) < 0) {
            perror("Accept Failed");
            exit(EXIT_FAILURE);
        }

        send(new_socket, response, strlen(response), 0);
        printf("Response sent\n");
        close(new_socket);
    }
}
