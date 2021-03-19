// Copyright 2021 Nekravtsev Alexey
#ifndef MODULES_TASK_1_NEKRAVTSEV_A_SPARSE_MATRIX_H_
#define MODULES_TASK_1_NEKRAVTSEV_A_SPARSE_MATRIX_H_

#include <vector>

struct CCS {
	int size;
	std::vector<double> value;
	std::vector<double> rows, colInd;
};

std::vector<double> GenSpareMatrix(int s);
std::vector<double> MultMatrix(int size, std::vector<double> &A, std::vector<double> &B);
CCS createCCS(int s, std::vector<double> &mat);
CCS TranspSpareMatrix(CCS A);
CCS MultCCS(CCS A, CCS B);


#endif  // MODULES_TASK_1_NEKRAVTSEV_A_SPARSE_MATRIX_H_