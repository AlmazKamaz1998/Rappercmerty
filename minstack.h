#pragma once

/*
Реализация структуры данных Стэк с поддержкой минимума.

Стэк - структура данных, которая работает по принципу LIFO.
Внутреннее представление данных в стэке - список или вектор (что подходит лучше?).

Для возможности эффективного получения минимума на всем стэке, в стэке нужно хранить не
сами значения, а пары (значение, текущий минимум). Подробности здесь: http://e-maxx.ru/algo/stacks_for_minima

Интерфейс стэка не меняется - как и прежде, в методы передается только одно число.
*/


// раскомментируйте одну из следующих строк в зависимости от того, что Вы выбрали
#include "vector.h"
//#include "list.h"

struct minstack {
	/* опишите поля стэка */
	vector* v;
	vector* minima;

	minstack() {
		// конструктор, в котором, возможно, нужно произвести какую-то инициализацию
		v = new vector();
		minima = new vector();
	}

	// добавить новый элемент в стэк
	void push(int value) {
		if (minima->size == 0) {
			minima->add(value);
		} else{

			if (value < minima->get(size() - 1)) {
				minima->add(value);
			}
			else {
				minima->add(minima->get(size() - 1));
			}
		}
		v->add(value);
	}

	// удалить верхний элемент из стэка, вернуть удаляемое значение
	int pop() {
		int value;
		value = v->get(size() - 1);
		v->remove(size() - 1);
		minima->remove(size() - 1);
		return value;
	}

	// вернуть верхний элемент стэка (не удаляя его)
	int top() {
		return v->get(size() - 1);
	}

	// вернуть минимальный элемент из стэка (не удаляя его)
	int min() {
		return minima->get(size() - 1);
	}

	// размер стэка
	int size() {
		return v->sise();
	}

	~minstack() {
		// деструктор, подчистить память, если это необходимо
		delete[] v;
		delete[] minima;
	}
};
