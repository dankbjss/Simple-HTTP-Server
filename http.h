#ifndef HTTP_RESPONSE_H
#define HTTP_RESPONSE_H

#include <stdio.h>

/**
 * @brief maximum number of characters in buffer.
*/
extern const int BUFFER_SIZE;

/**
 * @brief Take a file extension as input and return the corresponding MIME type.
 * Currently supports; .html; .txt; .jpg; .jpeg; .png and application/octet-stream as default.
 * @returns string of the mime type.
*/
const char *get_mime_type(const char *file_ext);

/**
 * @brief builds an HTTP response based on the given file name and extension.
 * It first constructs the HTTP header, including the appropriate MIME type based on the file extension. 
 * If the file doesn't exist, it sets the response to a "404 Not Found" message. 
 * Otherwise, it opens the file, reads its contents, and appends them to the response buffer. 
 * The final response length is stored in the response_len parameter.
*/
void build_http_response(const char *file_name, const char *file_ext, char *response, size_t *response_len);

#endif
