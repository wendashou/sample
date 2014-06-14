#include <stdio.h>

/* Period parameters */  
#define MT19937_N 624
#define MT19937_M 397
#define MT19937_MATRIX_A 0x9908b0df   /* constant vector a */
#define MT19937_UPPER_MASK 0x80000000 /* most significant w-r bits */
#define MT19937_LOWER_MASK 0x7fffffff /* least significant r bits */

/* Tempering parameters */   
#define MT19937_MASK_B 0x9d2c5680
#define MT19937_MASK_C 0xefc60000
#define MT19937_SHIFT_U(y)  (y >> 11)
#define MT19937_SHIFT_S(y)  (y << 7)
#define MT19937_SHIFT_T(y)  (y << 15)
#define MT19937_SHIFT_L(y)  (y >> 18)

static unsigned long mt[MT19937_N]; /* the array for the state vector  */
static int mti = MT19937_N + 1; /* mti==N+1 means mt[N] is not initialized */

void mt19937_seed_rng(unsigned long seed);
double mt19937_generate_random_double();
unsigned long mt19937_generate_random_ulong();
