/*
 * Array.h
 *
 *  Created on: Mar 28, 2019
 *      Author: NS
 */

#ifndef ARRAY_H_
#define ARRAY_H_



template<typename T>
class Array {

public:

	class Iterator;

	T* array;
	short int length;

	Array(const unsigned short length){
		array = new T[length];
		this->length = length;
	}
	//Array(const Array& a);
	~Array(){
		delete array;
	}
	//Array& operator = (const Array& a);
	T& operator[](const unsigned short index){
		return array[index];
	}
	const short int size() const{
		return length;
	}
	Iterator begin(){
		return Iterator(this, 0);
	}
	Iterator end(){
		return Iterator(nullptr, length);
	}


	class Iterator {
		Array<T>* array;
		short int index;
	public:
		Iterator(Array<T>* a, short int i): array(a), index(i){}
		Iterator& operator ++ (){
			++index;
			return *this;
		}

		bool operator < (Iterator it){
			return index < it.index;
		}

		bool operator != (Iterator it){
			return index != it.index;
		}

		T& operator * (){
			return (*array)[index];
		}
	};

};

#endif /* ARRAY_H_ */
