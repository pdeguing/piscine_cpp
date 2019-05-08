#ifndef ARRAY_CLASS_TPP
# define ARRAY_CLASS_TPP

#include <iostream>
#include <stdexcept>

template<typename T>
class Array {

	public:

		Array();
		Array(unsigned int n);
		Array(Array const & src);
		~Array(void);

		Array &	operator=(Array const & tmp);
		T &	operator[](const unsigned int i) const;

		unsigned int	size() const;

		class OutOfBoundsException : public std::exception {
			
			public:

				virtual const char* what() const throw();
		};

	private:

		T*		_arr;
		unsigned int	_size;
};

template<typename T>
Array<T>::Array() : _arr(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) {
	_arr = new T[n];
	_size = n;
}

template<typename T>
Array<T>::Array(Array<T> const & src) {
	*this = src;
}

template<typename T>
Array<T>::~Array() {}

template<typename T>
Array<T> & Array<T>::operator=(Array<T> const & tmp) {
	_arr = new T[tmp.size()];
	for (unsigned int i = 0; i < tmp.size(); i++)
		_arr[i] = tmp[i];
	this->_size = tmp.size();
	return *this;
}

template<typename T>
T &	Array<T>::operator[](const unsigned int i) const {
	if (i >= this->_size)
		throw Array<T>::OutOfBoundsException();
	return _arr[i];
}

template<typename T>
unsigned int	Array<T>::size() const {
	return _size;
}

template<typename T>
const char*	Array<T>::OutOfBoundsException::what() const throw() {
	return "Given index is out of range";
}

#endif // ARRAY_CLASS_HPP
