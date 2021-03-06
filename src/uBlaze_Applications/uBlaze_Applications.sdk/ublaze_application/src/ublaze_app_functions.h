/*
 * Header file for Ublaze Application
 *
 *  Created on: Apr 20, 2019
 *      Author: Benjamin Kueffler
 */

#include "xtmrctr.h"

#ifndef UBLAZE_APP_FUNCTIONS_H_
#define UBLAZE_APP_FUNCTIONS_H_

// Enables the timer and resets the inital timer value to the parameters
void init_64b_timer(u32 t0_value, u32 t1_value);

// Gets the 64 bit time, where each timer represents 32 bits
u64 get_64b_time();

// Clears the uart transmit FIFO
void uart_tx_clr();

// Clears the uart receiver FIFO
void uart_rx_clr();

// Encrypts a character array

// Calculates the keys used for encryption
void encryption_key(u32 totient, u32 p1, u32 p2);

// Returns 1 if the number is prime
u32 is_prime(u32 num);

// Calculates the decryption key
u32 dkey(u32 a, u32 totient);

// Encrypts a message
char* encrypt(char* encr_str, u32 len, u32 key, u32 n);

// Decrypts a character array
char* decrypt(char* encr_str, u32 len, u32 key, u32 n);

#endif /* UBLAZE_APP_H_ */
