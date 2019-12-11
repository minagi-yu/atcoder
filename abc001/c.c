#include <stdio.h>
#include <math.h>

struct {
    char *name;
    double degree;
} cardinal[16] = {
    {  "N",  11.25},
    {"NNE",  33.75},
    { "NE",  56.25},
    {"ENE",  78.75},
    {  "E", 101.25},
    {"ESE", 123.75},
    { "SE", 146.25},
    {"SSE", 168.75},
    {  "S", 191.25},
    {"SSW", 213.75},
    { "SW", 236.25},
    {"WSW", 258.75},
    {  "W", 281.25},
    {"WNW", 303.75},
    { "NW", 326.25},
    {"NNW", 348.75}
};

struct {
    int scale;
    double speed;
} scale[13] = {
    { 0,  0.2},
    { 1,  1.5},
    { 2,  3.3},
    { 3,  5.4},
    { 4,  7.9},
    { 5, 10.7},
    { 6, 13.8},
    { 7, 17.1},
    { 8, 20.7},
    { 9, 24.4},
    {10, 28.4},
    {11, 32.6}
};

int main (int argc, char *argv[])
{
    int Deg, Dis, W = 12;
    char *Dir = NULL;

    scanf("%d %d", &Deg, &Dis);

    for (int i = 0; i < 16; i++) {
        if (((double)Deg / 10) < cardinal[i].degree) {
            Dir = cardinal[i].name;
            break;
        }
    }
    if (Dir == NULL) Dir = "N";

    for (int i = 0; i < 13; i++) {
        if ((round((double)Dis / 60 * 10) / 10) <= scale[i].speed) {
            W = scale[i].scale;
            break;
        }
    }

    if (W == 0) Dir = "C";

    printf("%s %d\n", Dir, W);

    return 0;
}
