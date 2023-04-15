//What is the difference between unsigned int and signed int in C?
//The signed and unsigned integer type has the same storage (according to the standard at least 16
// bits) and alignment

//A signed integer can store the positive and negative value both but besides it unsigned integer
// can only store the positive value.
//The range of nonnegative values of a signed integer type is a sub-range of the corresponding
// unsigned integer type.
//Assuming the size of the integer is 2 bytes.
signed int                                           -32768 to +32767
unsigned int                                         0 to 65535

/*
Overflow of the signed integer is undefined.
If Data is signed type negative value, the right shifting operation of Data is 
implementation-dependent but for the unsigned type, it would be Data/ 2pos.
If Data is signed type negative value, the left shifting operation of Data shows the 
undefined behavior but for the unsigned type, it would be Data x 2pos.

*/

//Converting a signed number to the unsigned integer:
int main(void)
{
    int  iData = 27;
    unsigned int uiData = (unsigned int)iData;
    printf("%u\n",uiData);
    return 0;
}

//Converting an unsigned integer to signed integer type:
int main(void)
{
    unsigned int  uiData = 19891992;
    signed int iData = (signed int)uiData;
    printf("%d\n",iData);
    return 0;
}

//When should I use unsigned int in C?
//When you are dealing with bit values or performing a bitwise operation like bit masking
// or bit-shifting then you should use unsigned int. Bit shifting of negative integer gives
// you undefined or implementation-defined output. In simple words, you should use the unsigned
// int until you do not require the signed int.