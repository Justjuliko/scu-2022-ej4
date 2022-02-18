/**
 * @file Lab1-1.c
 * @author JUlio Echavarria (julioechavarria@gmail.com)
 * @version 0.1
 * @date 2022-02-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>


void funcPrint(char *pstring);

int main(void)
{
    funcPrint("Hola Mundo Cruel!!!");
    return(0);
}
/**
 * \brief funcPrint
 * 
 * funcPrint
 * 
 * \author XXX
 * \param pstring This variable recieve
 *                the direction of the string to be printed
 * \date 18/02/2022 
 */
void funcPrint(char *pstring)
{
    printf("%s\n",pstring);
}