/*
 * qsortmpi.h
 * Copyright (C) 2021  <@localhost>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef QSORTMPI_H
#define QSORTMPI_H

#define N 1000000

void showElapsed(int id, char *m);
void showVector(int *v, int n, int id);
int *merge(int *v1, int n1, int *v2, int n2);
void swap(int *v, int i, int j);
void qsortmpi(int *v, int left, int right);

double startTime, stopTime;

#endif /* !QSORTMPI_H */
