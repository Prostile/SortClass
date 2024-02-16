#pragma once
template <class T>
class Sort
{
	int COUNT;
public:
	Sort() { COUNT = 0; };

	template <T>
	int Shellsort(T** MassPointer, int num);

	template <class T>
	int Pyrosort(T* a);

};