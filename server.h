#ifndef HTTP_H
#define HTTP_H

/**
 * @brief Handles a client connection and serves the requested file.
 * It receives the request data from the client and checks if the request is a GET request using a regular expression. 
 * If it is a GET request, it extracts the requested file name from the request, decodes the URL, and builds an HTTP response using the build_http_response function. 
 * Finally, it sends the response to the client and cleans up resources.
*/
void *handle_client(void *arg);


#endif