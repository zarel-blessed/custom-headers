/*
 * Copyright © Shaheer (Zarel) Shaikh 2024
 * Header file for providing - string related types and functions
 * This header file provides the C language with easy to use and
 * pythonic looking functions which helps the programmer to focus 
 * on other complex implementation details.
*/

//Importing some boolean related keywords
#include <stdio.h>
#include <stdbool.h>
#define bool _Bool

// Defining the string and string_input types
typedef char string[];
typedef char *string_input;

/*
 @param s - string litteral or array of characters
 returns the size of the string 
*/
int len(string s) {
  int size = 0;
  while(s[size] != '\0') size++;
  return size;
}

char* upper(string s) {
  int i = 0;

  while (s[i] != '\0') {
    if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] = s[i] - ('a' - 'A');
    }
    i++;
  }

  char *ptr = s;
  return ptr;
}

char* lower(string s) {
  int i = 0;

  while (s[i] != '\0') {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = s[i] + ('a' - 'A');
    }
    i++;
  }

  char *ptr = s;
  return ptr;
}

bool starts_with(string s, char c) {
  return s[0] == c;
}

int count(string s, char c) {
  int count = 0, i = 0;

  while(s[i] != '\0') {
    if(s[i] == c) count++;
    i++;
  }

  return count;
}

string_input input(string prompt) {
  printf("%s", prompt);
  string_input s;
  scanf("%[^\n]s", s);
  return s;
} 