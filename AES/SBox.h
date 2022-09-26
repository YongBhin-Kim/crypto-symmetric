#pragma once

#include "GF_Math.h"
#include "Matrix_ver2.h"
// typedef unsigned char byte;
byte AES_Affine(byte x);

void Get_AES_Sbox(byte sbox[256]);
void Get_AES_ISbox(byte isbox[256]);
void print_Sbox();

byte Sbox[256], ISbox[256];

#ifdef _SBOX_
Get_AES_Sbox(Sbox);
Get_AES_ISbox(ISbox);
#endif
