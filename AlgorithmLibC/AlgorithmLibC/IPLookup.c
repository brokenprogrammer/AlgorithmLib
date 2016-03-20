/**
 * AlgorithmLib.
 * The library to provide solutions for tasks like sorting,
 * searching and math algorithms.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 The alg.js Project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#include "IPLookup.h"
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int lookup() {
    int status;
    struct addrinfo hints; //Criteria used when selecting socket address.
    struct addrinfo *res;  //Linked list that getaddrinfo populates with data.
    struct addrinfo *p;    //Pointer to res used to loop through the recieved data.
    char ipstr[INET6_ADDRSTRLEN]; //String that we will later store an ip address in string form.
    
    memset(&hints, 0, sizeof hints); //Populates hints with 0 on all the empty positions in the struct.
    hints.ai_family = AF_UNSPEC;     //Doesn't matter if IPv4 or IPv6
    hints.ai_socktype = SOCK_STREAM; //Use a TCP connection.
    
    //Connecting using getaddrinfo and checking if there is an error.
    if ((status = getaddrinfo("www.oskarmendel.me", NULL, &hints, &res)) != 0) {
        //If error exists print it out and exit.
        fprintf(stderr, "Error: %s\n", gai_strerror(status));
        return 2;
    }
    
    printf("IP Adress for: www.oskarmendel.me\n");
    
    for (p = res; p != NULL; p = p->ai_next) {
        void *addr;
        char *ipver;
        
        //Get the pointer to the actual address, different for IPv4 and IPv6
        if (p->ai_family == AF_INET) { // IPv4
            struct sockaddr_in *ipv4 = (struct sockaddr_in *)p->ai_addr;
            addr = &(ipv4->sin_addr);
            ipver = "IPv4";
        } else { //IPv6
            struct sockaddr_in6 *ipv6 = (struct sockaddr_in6 *)p->ai_addr;
            addr = &(ipv6)->sin6_addr;
            ipver = "IPv6";
        }
        
        //Convert IP to a string and print it
        inet_ntop(p->ai_family, addr, ipstr, sizeof ipstr); //Converts the network address to presentation form (String).
        printf("    %s: %s\n", ipver, ipstr);
    }
    
    freeaddrinfo(res); //Free the linked list that we got from getaddrinfo.
    
    printf("Hello, World!\n");
    return 0;
}
