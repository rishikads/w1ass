/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file functions and main program 
 * @brief the file includes all the fruntions, print statements and the main program
 *
 * Creating a simple application that performs statistical analytics on a dataset
 *
 * @author Rishika D S
 * @date 11-03-2002
 *
 */



#include <stdio.h>
#include "stats.h"

#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_array(test, SIZE);

  print_statistics(test, SIZE);

  return 0;
}

void print_array(unsigned char data[], int length) {
  printf("Array: ");
  for (int i = 0; i < length; i++) {
    printf("%u ", data[i]);
  }
  printf("\n");
}

unsigned char find_minimum(unsigned char data[], int length) {
  unsigned char min = data[0];
  for (int i = 1; i < length; i++) {
    if (data[i] < min) {
      min = data[i];
    }
  }
  return min;
}

unsigned char find_maximum(unsigned char data[], int length) {
  unsigned char max = data[0];
  for (int i = 1; i < length; i++) {
    if (data[i] > max) {
      max = data[i];
    }
  }
  return max;
}

float find_mean(unsigned char data[], int length) {
  float sum = 0;
  for (int i = 0; i < length; i++) {
    sum += data[i];
  }
  return sum / length;
}

unsigned char find_median(unsigned char data[], int length) {
  sort_array(data, length); // Sort the array first
  int mid = length / 2;
  return (length % 2 == 0) ? (data[mid - 1] + data[mid]) / 2.0f : data[mid];
}

void sort_array(unsigned char data[], int length) {
  // Bubble sort implementation (can be replaced with more efficient algorithms)
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - i - 1; j++) {
      if (data[j] < data[j + 1]) {
        unsigned char temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
    }
  }
}

void print_statistics(unsigned char data[], int length) {
  unsigned char min = find_minimum(data, length);
  unsigned char max = find_maximum(data[], length);
  float mean = find_mean(data, length);
  unsigned char median = find_median(data, length);

  printf("Statistics:\n");
  printf("  Minimum: %u\n", min);
  printf("  Maximum: %u\n", max);
  printf("  Mean: %.2f\n", mean);
  printf("  Median: %u\n", median);
}

