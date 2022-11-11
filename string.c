//
// Created by Chuck Montague on 10.11.2022.
//

#include "string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  unsigned char *str_tmp = (unsigned char *) str;
  while (n--) {
    if (*str_tmp == c){
      return str_tmp;
    }
    str_tmp++;
  }
  return S21_NULL;
}

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  unsigned char *str_tmp1 = (unsigned char *) str1;
  unsigned char *str_tmp2 = (unsigned char *) str2;
  while (n--) {
    if (*str_tmp1 == *str_tmp2){
      str_tmp1++;
      str_tmp2++;
    }
    else{
      return *str_tmp1 - *str_tmp2;
    }
  }
  return 0;
}

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  unsigned char *new_str = dest;
  unsigned char *str_tmp = (unsigned char *) src;
  while (n--) {
    *new_str++ = *str_tmp++;
  }
  return dest;
}

s21_size_t s21_strlen(const char *str) {
//  s21_size_t idx = 0;
//  for (; str[idx]; idx++) {}
  return (sizeof str) - 1;
}
