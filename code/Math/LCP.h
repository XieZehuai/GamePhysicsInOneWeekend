//
//	LCP.h
//
#pragma once
#include "Matrix.h"
#include "Vector.h"

/*
====================================================
LCP_GaussSeidel
====================================================
*/
VecN LCP_GaussSeidel(const MatN& A, const VecN& b);