#include<iostream>
using namespace std;


struct vector {
	int *data;
	int size;
	int capasity;
	vector() {
		capasity = 10;
		data = new int[capasity];
		size = 0;
	}

	vector(int capacity) {
		size = 0;
		data = new int[capacity];
		this-> capasity = capasity;
		
	}

	void add(int value) {
		if (size == capasity) {
			int *d = new int[capasity * 2];
			for (int i = 0; i < capasity; i++) {
				d[i] = data[i];
			}
			delete data;
			data = d;
			capasity *= 2;
		}
		data[size] = value;
		size++;
	}

	int get(int index) {
		if (size == capasity) {
			int *d = new int[capasity * 2];
			for (int i = 0; i < capasity; i++) {
				d[i] = data[i];
				return data[i];
				return 0;
			}
		}
	}

	void remove(int index) {
		size = size - 1;
			for (int i = index; i < size; i++) {
				data[i] = data[i + 1];
			}
		}
	int size() {
		return size;
	}

	~vector() {
		delete data;
	}
};
