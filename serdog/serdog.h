﻿// serdog.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <stdio.h>      // standard input / output functions
#include <stdlib.h>
#include <stdint.h>
#include <string.h>     // string function definitions
#include <unistd.h>     // UNIX standard function definitions
#include <fcntl.h>      // File control definitions
#include <errno.h>      // Error number definitions
#include <termios.h>    // POSIX terminal control definitions
// TODO: Reference additional headers your program requires here.


int readPortResponse();


//command processing convenience utils

char* charcat(char* target, char c) {
	size_t len;
	if (target != NULL) {
		len = strlen(target);
		target[len] = c;
		target[len + 1] = '\0';
	}
	return target;
}


char* bytecat(char* target, uint8_t c) {
	size_t len;
	if (target != NULL) {
		len = strlen(target);
		target[len] = (char)c;
		target[len + 1] = '\0';
	}
	return target;
}

//ez hex function
#define TO_HEX(i) (i <= 9 ? '0' + i : 'A' - 10 + i)


//tty baudrate code converter - this one came from IBM.

char* printBaudRate(speed_t speed) {
    static char   SPEED[20];
    switch (speed) {
    case B0:       strcpy(SPEED, "0");
        break;
    case B50:      strcpy(SPEED, "50");
        break;
    case B75:      strcpy(SPEED, "75");
        break;
    case B110:     strcpy(SPEED, "110");
        break;
    case B134:     strcpy(SPEED, "134");
        break;
    case B150:     strcpy(SPEED, "150");
        break;
    case B200:     strcpy(SPEED, "200");
        break;
    case B300:     strcpy(SPEED, "300");
        break;
    case B600:     strcpy(SPEED, "600");
        break;
    case B1200:    strcpy(SPEED, "1200");
        break;
    case B1800:    strcpy(SPEED, "1800");
        break;
    case B2400:    strcpy(SPEED, "2400");
        break;
    case B4800:    strcpy(SPEED, "4800");
        break;
    case B9600:    strcpy(SPEED, "9600");
        break;
    case B19200:   strcpy(SPEED, "19200");
        break;
    case B38400:   strcpy(SPEED, "38400");
        break;
    case B57600:   strcpy(SPEED, "57600");
        break;
    case B115200:   strcpy(SPEED, "115200");
        break;
    case B230400:   strcpy(SPEED, "230400");
        break;
    case B460800:   strcpy(SPEED, "460800");
        break;
    case B500000:   strcpy(SPEED, "500000");
        break;
    case B576000:   strcpy(SPEED, "576000");
        break;
    case B921600:   strcpy(SPEED, "921600");
        break;
    case B1000000:   strcpy(SPEED, "1000000");
        break;
    case B1152000:   strcpy(SPEED, "1152000");
        break;
    case B1500000:   strcpy(SPEED, "1500000");
        break;
    case B2000000:   strcpy(SPEED, "2000000");
        break;
    case B2500000:   strcpy(SPEED, "2500000");
        break;
    case B3000000:   strcpy(SPEED, "3000000");
        break;
    case B3500000:   strcpy(SPEED, "3500000");
        break;
    case B4000000:   strcpy(SPEED, "4000000");
        break;
    default:       sprintf(SPEED, "unknown (%d)", (int)speed);
    }
    return SPEED;
}

