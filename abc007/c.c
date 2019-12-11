#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

#define BUFF_SIZE 4096

typedef struct {
    uint64_t x;
    uint64_t y;
} COORDINATE;

typedef struct {
    uint_fast32_t writeidx;
    uint_fast32_t readidx;
    uint_fast32_t count;
    COORDINATE    buff[BUFF_SIZE];
} FIFO;

void fifo_init (FIFO *fifo)
{
    fifo->writeidx = 0;
    fifo->readidx = 0;
    fifo->count = 0;
}

void fifo_enqueue (FIFO *fifo, const COORDINATE *v)
{
    uint_fast32_t i;

    if (v == NULL) return;

    if (fifo->count < BUFF_SIZE) {
        i = fifo->writeidx;
        fifo->count++;
        fifo->buff[i] = *v;
        fifo->writeidx = (i + 1) % BUFF_SIZE;
    }
}

int64_t fifo_dequeue (FIFO *fifo, COORDINATE *r)
{
    uint_fast32_t i;

    if (r == NULL) return 1;

    if (fifo->count == 0) return 1;

    i = fifo->readidx;
    *r = fifo->buff[i];
    fifo->count--;
    fifo->readidx = (i + 1) % BUFF_SIZE;

    return 0;
}

int main (int argc, char const *argv[])
{
    uint64_t R, C, sy, sx, gy, gx;
    char c[50][51];
    uint64_t a[50][50] = {0};
    FIFO fifo;
    COORDINATE xy[5];

    fifo_init(&fifo);

    scanf("%"PRIu64"%"PRIu64, &R, &C);
    scanf("%"PRIu64"%"PRIu64, &sy, &sx);
    scanf("%"PRIu64"%"PRIu64, &gy, &gx);
    for (int i = 0; i < R; i++) {
        scanf("%s", c[i]);
    }

    xy[0].x = sx - 1;
    xy[0].y = sy - 1;
    c[xy[0].y][xy[0].x] = ',';
    fifo_enqueue(&fifo, &xy[0]);

    while (fifo_dequeue(&fifo, &xy[0]) == 0) {
        xy[1].x = xy[0].x - 1;
        xy[1].y = xy[0].y;
        xy[2].x = xy[0].x;
        xy[2].y = xy[0].y - 1;
        xy[3].x = xy[0].x + 1;
        xy[3].y = xy[0].y;
        xy[4].x = xy[0].x;
        xy[4].y = xy[0].y + 1;

        for (int i = 1; i < 5; i++) {
            if(c[xy[i].y][xy[i].x] == '.') {
                a[xy[i].y][xy[i].x] = a[xy[0].y][xy[0].x] + 1;
                c[xy[i].y][xy[i].x] = ',';
                fifo_enqueue(&fifo, &xy[i]);
            }
        }
    }
    

    printf("%"PRIu64"\n", a[gy - 1][gx - 1]);
}
