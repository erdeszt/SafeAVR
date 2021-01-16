#ifndef SAFEAVR_DEFS_H_
#define SAFEAVR_DEFS_H_

#if defined(DEBUG) && defined(NDEBUG)
#error Both DEBUG and NDEBUG are defined!
#endif

/*
 * Standard integral types
 */
typedef signed char i8;
typedef unsigned char u8;
typedef signed int i16;
typedef unsigned int u16;
typedef signed long int i32;
typedef unsigned long int u32;

typedef _Bool boolean;

#define TRUE 1
#define FALSE 0

#define NULL ((void *)0)
#define UNUSED(x) ((void)(x))

/*
 * Bit manipulation and query helpers
 */
#define BIT_VALUE(BIT) (1u << (BIT))
#define SET_BIT(REG, BIT) ((REG) |= (BIT_VALUE(BIT)))
#define CLEAR_BIT(REG, BIT) ((REG) &= ~(BIT_VALUE(BIT)))
#define READ_BIT(REG, BIT) ((REG) & (BIT_VALUE(BIT)))
#define IS_BIT_SET(REG, BIT) (((REG) & (BIT_VALUE(BIT))) == (BIT_VALUE(BIT)))
#define IS_BIT_CLEAR(REG, BIT) (((REG) & (BIT_VALUE(BIT))) == 0U)

/*
 * Interrupt helpers
 */
#define ENABLE_INTERRUPTS() __asm__ __volatile__("sei" ::: "memory")
#define DISABLE_INTERRUPTS() __asm__ __volatile__("cli" ::: "memory")

/*
 * Panic function called in case of a non recoverable error.
 */
void panic(void);

#endif /* SAFEAVR_DEFS_H_ */
