// https://www.codewars.com/kata/563a631f7cbbc236cf0000c2/train/c
unsigned char move(unsigned char pos, unsigned char roll)
{
    return pos + (roll * 2);
}
//
unsigned char move(unsigned char pos, unsigned char roll)
{
    return (roll<<1)+pos;
}
