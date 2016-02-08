#pragma once

#include <stdint.h>

#include <fftw3.h>

typedef struct {
    uint32_t size;
    double *coeffs;
} window_t;

window_t make_window_hann(uint32_t n);
window_t make_window_square(uint32_t n);

void destroy_window(window_t win);

void apply_window(window_t win, fftw_complex *in, fftw_complex *out);