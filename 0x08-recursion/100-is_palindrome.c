#include "main.h"
/*
 * a function that returns 
 * when the the fuction is palindromic
 * elso 0
 */
bool ispalindrome(char str[]){
    bool res;
    if (*str == 0 || *(str + 1) == 0)
        return 1;
    else{
        res = ispalindrome(str + 1);

