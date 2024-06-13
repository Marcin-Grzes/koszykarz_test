//
// Created by Marcin Grześ on 13/06/2024.
//
#include "koszykarz.h"
#include<iostream>
using namespace std;

int koszykarz(int wzrost, int limit, int guz) {
    int ile = 0;

    if (limit > wzrost)
        ile = (limit - wzrost + guz - 1) / guz;

    return ile;
}