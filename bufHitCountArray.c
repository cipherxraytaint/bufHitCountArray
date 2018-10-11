/*
 * bufHitCountArray.c
 *  Author: mchen
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h> // calloc
#include "bufHitCountArray.h"

BufHitCountAry_T newBufHitCountAry(u32 numBuf)
{
  BufHitCountAry_T bufHitCountAry = NULL;

  bufHitCountAry = calloc(numBuf*numBuf, sizeof(HIT_COUNT_BYTE) );
  assert(bufHitCountAry);

  printf("with total buf:%u, create buffer hit count array:%p successful\n",
      numBuf, bufHitCountAry);
  return bufHitCountAry;
}

void delBufHitCountAry(BufHitCountAry_T *bufHitCountAry)
{
  assert(bufHitCountAry);
  free(*bufHitCountAry);
  *bufHitCountAry = NULL;
  printf("del buffer hit count array:%p successful\n", *bufHitCountAry);
}
