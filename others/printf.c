#include <stdio.h> 
#include <stdarg.h>
#include "holberton.h"

/***The _printf is thesame as printf which incuds in <stdio.h>***/

int _printf(const char *format, ...){
    va_list unnamed_p;
    char *p, *sval;
    unsigned int val_i;
    va_start(unnamed_p, format);
    for ( p=(char *)format; *p; p++ ){
        if(*p!='%'){
            putchar(*p);
            continue;
        }
        switch(*++p){
            case 'd':
                val_i = va_arg(unnamed_p, unsigned int);
                output_convert(val_i, 10);
                break;
            case 's':
                for (sval = va_arg(unnamed_p, char*); *sval; sval++){
                    putchar(*sval);

                }
                break;
            case 'x':
                val_i = va_arg( unnamed_p, unsigned int );
                output_convert( val_i, 10 );
                break;
            default: putchar( *p ); 
                break; } } 
        va_end( unnamed_p ); 
    return 0; 

}


