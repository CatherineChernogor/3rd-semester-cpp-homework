#pragma once

template <class T> const T& getMax(const T& a, const T& b) {
	return a > b ? a : b;
}