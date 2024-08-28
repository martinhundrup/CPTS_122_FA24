/*
 * File: lab1.h
 * Author: Martin Hundrup
 * Professor: Andy O'Fallon
 * Class: CPT_S 122, Fall 2024
 * Assignment: Lab 1
 * Created: August 26, 2024
 * Last Updated: August 26, 2024
 *
 * Description: This file contains the function prototypes for the project. 
 */

#ifndef LAB1_H
#define LAB1_H

#include <stdio.h>
#include <string.h> // used ONLY for strlen()
#include <stdlib.h> // used for realloc()

/*
*	Develop a small hello world program utilizing the Visual Studio development 
*	environment.
*/
void task_1();

/*
*	Performs tests recursively reversing a string, a string tokenizer, and a function
*	that merges two previously unsorted string into a sorted order.
*/
void task_2();

/*
*	Recursively reverses a string in-place.
* 
*	@param str: a pointer to the beginning of the string to reverse.
*/
void recursive_string_reverse(char* str);

/*
*	Tokenizes a string using any of the delimiting characters.
*
*	@param str: a pointer to the beginning of the string to tokenize.
*		NULL to continue tokenizing a previous string.
*	@param delims: an array of characters containing each desired delimeter.
* 
*	@return A pointer to the beginning of the token.
*/
char* my_strtok(char* str, char* delims);

/*
*	Merges two unsorted strings into one sorted string in ascending order.
* 
*	@param str1: a pointer to the start of the first string to mergensort.
*	@param str2: a pointer to the start of the second string to mergensort.
*	@param dest: the array to store the mergensorted string into.
*	@param len: the maximum amount of characters to store.
*/
void str_mergensort_so1l(char* str1, char* str2, char* dest, int len);

/*
*	Merges two unsorted strings into one sorted string in ascending order.
*
*	@param str1: a pointer to the start of the first string to mergensort.
*	@param str2: a pointer to the start of the second string to mergensort.
* 
*	@return A pointer to the beginning of a dyncamically allocated array container
*		the mergensorted string.
*/
char* str_mergensort_sol2(char* str1, char* str2);

/*
*	Merges two unsorted strings into the first string in ascending order.
*
*	@param str1: a pointer to the start of the first string to mergensort.
*	@param str2: a pointer to the start of the second string to mergensort.
*   @param len: the maximum amount of characters to store.
*/
char* str_mergensort_sol3(char* str1, char* str2, int len);

#endif
