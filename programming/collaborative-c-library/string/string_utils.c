#include "string_utils.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* reverse_string(const char* str) {
    if (str == NULL) return NULL; 
    int len = strlen(str);
    char* reversed = (char*)malloc(len + 1); 
    if (reversed == NULL) return NULL; 
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1]; 
    }
    reversed[len] = '\0'; 
    return reversed;
}

char* to_uppercase(const char* str) {
    if (str == NULL) return NULL;
    int len = strlen(str);
    char* uppercase_str = (char*)malloc(len + 1);
    if (uppercase_str == NULL) return NULL;
    for (int i = 0; i < len; i++) {
        uppercase_str[i] = toupper((unsigned char)str[i]);
    }
    uppercase_str[len] = '\0';
    return uppercase_str;
}

char* to_lowercase(const char* str) {
    if (str == NULL) return NULL;
    int len = strlen(str);
    char* lowercase_str = (char*)malloc(len + 1);
    if (lowercase_str == NULL) return NULL;
    for (int i = 0; i < len; i++) {
        lowercase_str[i] = tolower((unsigned char)str[i]);
    }
    lowercase_str[len] = '\0';
    return lowercase_str;
}

int substring_search(const char* str, const char* sub){
    if (str == NULL || sub == NULL) return -1;
    int str_len = strlen(str);
    int sub_len = strlen(sub);
    if (sub_len == 0) return 0;
    if (sub_len > str_len) return -1;
    for (int i = 0; i <= str_len - sub_len; i++) {
        if (strncmp(&str[i], sub, sub_len) == 0) {
            return i;
        }
    }
    return -1;
}

int count_number_of_vowels(const char* str) {
    if (str == NULL) return 0;
    int count = 0;
    while (*str) {
        char c = tolower((unsigned char)*str);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int count_number_of_consonants(const char* str) {
    if (str == NULL) return 0;
    int count = 0;
    while (*str) {
        char c = tolower((unsigned char)*str);
        if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            count++;
        }
        str++;
    }
    return count;
}

int count_number_of_words(const char* str) {
    if (str == NULL || *str == '\0') return 0;
    int count = 0;
    int in_word = 0;
    while (*str) {
        if (isspace((unsigned char)*str)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }
    return count;
}

int count_number_of_sentences(const char* str) {
    if (str == NULL || *str == '\0') return 0;
    int count = 0;
    while (*str) {
        if (*str == '.' || *str == '!' || *str == '?') {
            count++;
            while (*(str + 1) == '.' || *(str + 1) == '!' || *(str + 1) == '?') {
                str++;
            }
        }
        str++;
    }
    return count;
}

int count_number_of_occurrences(const char* str, const char* sub) {
    if (str == NULL || sub == NULL || *sub == '\0') return 0;
    int count = 0;
    int sub_len = strlen(sub);
    while ((str = strstr(str, sub)) != NULL) {
        count++;
        str += sub_len;
    }
    return count;
}

