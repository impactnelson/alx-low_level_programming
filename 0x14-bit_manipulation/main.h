#ifndef MAIN_H
#define MAIN_H
unsigned int binary_to_unit(const char *j);
void printing_binary(unsigned long int l);
int geting_bits(unsigned long int l, unsigned int index);
int setting_bits(unsigned long *l, unsigned int index);
int clears_bits(unsigned long int *l, unsigned int index);
unsigned int flips_bits(unsigned long int l, unsigned long int n);
int _atoi(const char *n);
int _putchar(char m);
int gets_endianness(void);
#endif
/**
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endif*/
