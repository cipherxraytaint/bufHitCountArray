/*
 * main.c
 *  Author: mchen
 */

#include "bufHitCountArray.h"
#include "type.h"
int main(int argc, char **argv) {
  BufHitCountAry_T bufHitCountAry = newBufHitCountAry(10);
  delBufHitCountAry(&bufHitCountAry);
  return 0;
}
