#ifndef COMPARE_H
#define COMPARE_H

#include <stdbool.h>

/**
 * @brief Compare two null-terminated strings in a case-insensitive manner.
 * 
 * It iterates over the characters of the two strings and compares them after
 * converting them to lowercase using the tolower function from the <ctype.h>
 * library.
 * 
 * @return true if the strings are equal, other wise false.
*/
bool case_insensitive_compare(const char *s1, const char *s2);

#endif
