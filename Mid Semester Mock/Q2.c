int main(void)
{
    char a = 0xB;   // a = 0xB (hex) = 11 (decimal)
    char *b = &a;   // b points to a
    (*b)++;         // Increment the value at b, so a = 12
    a *= *b;        // a = a * (*b) = 12 * 12 = 144
    return a;
}
