//v1.00
//adds two non-negative arbitrary-precision integers 

//includes

#include <stdint.h>
#include "apz.h"

//variables                    

uint32_t limbs; //number of limbs of sum

uint32_t m;
uint32_t n;
uint32_t * u;
uint32_t * v;

//assembly prototypes

extern uint32_t add_non_negative_apz(uint32_t, uint32_t *, uint32_t, uint32_t *);

//functions

int main(void) {
    
    m = one[0];                                    
    u = &one[1];
    
    n = two[0];
    v = &two[1];      
    
    limbs = add_non_negative_apz(m, u, n, v); //breakpoint 1
      
    while (1); //breakpoint 2
}
