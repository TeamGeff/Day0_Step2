{\rtf1\ansi\ansicpg1252\cocoartf1404\cocoasubrtf130
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdlib.h> \
#include <time.h> \
\
int main( void ) \{ \
    \
    int i, numbers[49], n= sizeof(numbers)/sizeof(numbers[0]); \
    \
    for ( i= 0; i < n; ++i ) \
        numbers[i]= i+1; \
    printf( "Numbers are: " ); \
    srand( (unsigned int) time( NULL ) ); \
    \
    for ( i= 0; i < 6; ++i ) \{ \
        \
        int x= rand() % n; \
        printf( "%i  ", numbers[x] ); \
        numbers[x]= numbers[--n]; \
        \
    \} \
    return 0; \
\}}