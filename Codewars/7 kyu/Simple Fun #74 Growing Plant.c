// https://www.codewars.com/kata/58941fec8afa3618c9000184/train/c
int growingPlant(int upSpeed, int downSpeed, int desiredHeight)
{
    int days = 0, currentHeight = 0;
    while (currentHeight <= desiredHeight) {
        days++;
        currentHeight += upSpeed;
        if (currentHeight >= desiredHeight) break;
        currentHeight -= downSpeed;
    }
    return days;
}
