/*
 * main.c
 *  Author: mchen
 */

#include <stdlib.h> // srand, rand
#include <time.h>   // time
#include "bufHitCountArray.h"
#include "type.h"

#define NUM_BUF 10

int main(int argc, char **argv) {
  BufHitCountAry_T bufHitCountAry = newBufHitCountAry(NUM_BUF);
  srand(time(NULL));

  int i;
  for(i = 0; i < 10000; i++) {
    u32 srcBufID = rand() % NUM_BUF;
    u32 dstBufID = rand() % NUM_BUF;
    u8 hitCountByte = rand() % 5; // 0~4
    updateBufHitCountAry(bufHitCountAry, NUM_BUF, srcBufID, dstBufID, hitCountByte);
  }
  printBufHitCountAry(bufHitCountAry, NUM_BUF);
  delBufHitCountAry(&bufHitCountAry);

  return 0;
}
