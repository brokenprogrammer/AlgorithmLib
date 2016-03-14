/**
 * AlgorithmLib.
 * The library to provide solutions for tasks like sorting,
 * searching and math algorithms.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 The alg.js Project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "CaesarCipher.h"

/**
 * Caesars Cipher Encrypt
 * This function is used to encrypt a string using Caesars Cipher. Information
 * for this algorithm is taken from the wikipedia description of Caesars ciper.
 * Though in wikipedia they use a solution with Modulus that calculates the 
 * letter from that.
 *
 * @param string - String to be encrypted.
 * @param size - Size of the string.
 * @return a encrypted string.
 */
const char* caesarEncrypt(char string[], int size) {
    int x;
    
    for (x = 0; x < size; x++) {
        
        if (string[x] >= 'A' && string[x] <= 'Z') {
            if (string[x] - 3 < 'A') {
                string[x] = string[x] - (3 - 1) - 'A' + 'Z';
            } else {
                string[x] -= 3;
            }
            continue;
        }
        
        if (string[x] >= 'a' && string[x] <= 'z') {
            if (string[x] - 3 < 'a') {
                string[x] = string[x] - (3 - 1) - 'a' + 'z';
            } else {
                string[x] -= 3;
            }
        }
    }
    
    return string;
}

/**
 * Caesars Cipher Decrypt
 * This function is used to decrypt a string which has been decrypted using 
 * Caesars cipher. This is doing what the Caesar encrypt function does backwards
 * to get the real string out. I also instroduced a key that is the deciding 
 * factor if the decryption is right or not.
 *
 * @param string - String to be decrypted.
 * @param size - Size of the string.
 * @param key - The key used to decrypt the string.
 * @return a decrypted string.
 */
const char* caesarDecrypt(char string[], int size, int key) {
    int x;
    
    for (x = 0; x < size; x++) {
        if (string[x] != ' ') {
            if (string[x] >= 'A' && string[x] <= 'Z') {
                if (string[x] + key > 'Z') {
                    int what = string[x] + (key - 1) - 'Z' + 'A';
                    string[x] = what;
                } else {
                    string[x] += key;
                }
            } else if (string[x] >= 'a' && string[x] <= 'z') {
                if (string[x] + key > 'z') {
                    int what = string[x] + (key - 1) - 'z' + 'a';
                    string[x] = what;
                } else {
                    string[x] += key;
                }
            }
        }
    }
    
    return string;
}