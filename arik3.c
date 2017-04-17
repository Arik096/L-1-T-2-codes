//  Arik Md Isthiaque
//  6 September-2016
// Seba Nir, CMH dhaka

//print arrays

#include "stdio.h"

int main () {

int i_array[] = {1,2,3,4,0,0,0,0,0,0} ;
int n_array[] = {0,0,0,0,0,0,0,0,0,0} ;

int *i = &i_array[0] ;
int *n = &n_array[0] ;

printf ( "before 'while' :\t arrays are :\n" );
printf ( " i_array[]\t{%d,%d,%d,%d,.....}\n",i_array[0],i_array[1],i_array[2],i_array[3] );
printf ( " n_array[]\t{%d,%d,%d,%d,.....}\n",n_array[0],n_array[1],n_array[2],n_array[3] );

while (*n++=*i++) printf("%d\t%d\n",i,n);

printf ( "after 'while' :\t arrays are :\n" );
printf ( " i_array[]\t{%d,%d,%d,.....}\n",i_array[0],i_array[1],i_array[2],i_array[3] );
printf ( " n_array[]\t{%d,%d,%d,.....}\n",n_array[0],n_array[1],n_array[2],n_array[3] );

}


