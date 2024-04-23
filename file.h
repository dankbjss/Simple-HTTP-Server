#ifndef FILE_H
#define FILE_H

/**
 * @brief Takes a file name as input and returns the file extension.
 * @returns string of File extension if dot found otherwise an other empty
*/
const char *get_file_extension(const char *file_name);

/**
 * @brief Searches for a file with the given name in the current directory, ignoring case.
 * @returns string of file name if found, otherwise NULL
*/
char *get_file_case_insensitive(const char *file_name);

/**
 * @brief Decodes a URL-encoded string.
 * @returns string of the decoded URL,
*/
char *decode_url(const char *src);

#endif
