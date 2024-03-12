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
 * @file function declarations 
 * @brief this file includes all the funtion headings
 *
 * Creating a simple application that performs statistical analytics on a dataset.
 *
 * @author Rishika D S
 * @date 11-03-2002
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* 

void print_array(unsigned char data[], int length)
This function prints the array.

unsigned char find_minimum(unsigned char data[], int length)
This function skims through and returns the least value integer in the array.

unsigned char find_maximum(unsigned char data[], int length)
This function skims through and returns the highest value integer in the array.

float find_mean(unsigned char data[], int length)
This funtion returns the mean of all the integers present in the array.

unsigned char find_median(unsigned char data[], int length)
This funtion returns the median of all the integers present in the array.

void sort_array(unsigned char data[], int length)
This funtion sorts the original array.

void print_statistics(unsigned char data[], int length)
This function calls the mean, median, min, max functions and prints the value they return.
 */ 

/**
 * void print_array(unsigned char data[], int length)
 * @brief This function prints the array.
 *
 * @param TEST[SIZE] array (the array stored in the main program)
 * @param Length (length of the array)
 *
 * @return NA (just prints the array)
 */

/**
 * unsigned char find_minimum(unsigned char data[], int length)
 * @brief This function skims through and returns the least value integer in the array.
 *
 * @param TEST[SIZE] array (the array stored in the main program)
 * @param Length (length of the array)
 *
 * @return least value integer in the array.
 */

/**
 * unsigned char find_maximum(unsigned char data[], int length)
 * @brief This function skims through and returns the highest value integer in the array.
 *
 * @param TEST[SIZE] array (the array stored in the main program)
 * @param Length (length of the array)
 *
 * @return highest value integer in the array.
 */

/**
 * float find_mean(unsigned char data[], int length)
 * @brief This funtion returns the mean of all the integers present in the array.
 *
 * @param TEST[SIZE] array (the array stored in the main program)
 * @param Length (length of the array)
 *
 * @return mean.
 */

/**
 * unsigned char find_median(unsigned char data[], int length)
 * @brief This funtion returns the median of all the integers present in the array.
 *
 * @param TEST[SIZE] array (the array stored in the main program)
 * @param Length (length of the array)
 *
 * @return median.
 */

/**
 * void sort_array(unsigned char data[], int length)
 * @brief This funtion sorts the original array.
 *
 * @param TEST[SIZE] array (the array stored in the main program)
 * @param Length (length of the array)
 *
 * @return sorted array.
 */

/**
 * void print_statistics(unsigned char data[], int length).
 * @brief This function calls the mean, median, min, max functions and prints the value they return
 *
 * @param TEST[SIZE] array (the array stored in the main program)
 * @param Length (length of the array)
 *
 * @return NA (prints mean, median, min, max)
 */
#endif /* __STATS_H__ */
