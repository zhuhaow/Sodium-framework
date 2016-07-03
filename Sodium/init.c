//
//  init.c
//  Sodium
//
//  Created by Zhuhao Wang on 7/3/16.
//  Copyright © 2016 Zhuhao Wang. All rights reserved.
//

#include <stdio.h>
#include "sodium-lib.h"

// This is just a redundant method to make sure that the linker do link libsodium to the final library.
int init() {
    return sodium_init();
}