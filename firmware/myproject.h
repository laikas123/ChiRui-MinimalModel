//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef MYPROJECT_H_
#define MYPROJECT_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "hls_stream.h"

#include "defines.h"

typedef ap_fixed<16,6> model_weightdefault_t;

// Prototype of top level function for C-synthesis
void myproject(
    hls::stream<input_t> &em_barrel,
    hls::stream<result_t> &layer18_out,
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1,
    model_weightdefault_t  w4 [ 400 ],
    model_weightdefault_t  w8[ 3153920 ],
    model_weightdefault_t  w12 [ 65536 ],
    model_weightdefault_t  w22 [ 36864 ],
    model_weightdefault_t  w27 [ 73728 ],
    model_weightdefault_t  w18 [ 18432 ],
    model_weightdefault_t  w9 [ 4608 ],
    model_weightdefault_t  w13 [ 9216 ],
    model_weightdefault_t  w45 [ 589824 ],
    model_weightdefault_t  w36 [ 294912],
    model_weightdefault_t  w53 [ 256],
    model_weightdefault_t  w31 [ 147456],
    model_weightdefault_t  w49 [ 65536],
    model_weightdefault_t  w40 [ 589824],
    model_weightdefault_t  w16 [ 256]
);

#endif
