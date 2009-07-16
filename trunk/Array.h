// --------------------------
// projects/c++/array/Array.h
// Copyright (C) 2009
// Glenn P. Downing
// --------------------------

#ifndef Array_h
#define Array_h

// --------
// includes
// --------

#include <algorithm> // copy, equal, fill, lexicographical_compare
#include <cstddef>   // ptrdiff_t, size_t
#include <stdexcept> // out_of_range
#include <utility>   // !=, <=, >, >=
#include <iostream> // cout
// -----
// using
// -----

using namespace std::rel_ops;

// ----------
// namespaces
// ----------

namespace My {

// -----
// Array
// -----

template <typename T, std::size_t N>
class Array {
    public:
        // --------
        // typedefs
        // --------

        typedef T                 value_type;

        typedef std::size_t       size_type;
        typedef std::ptrdiff_t    difference_type;

        typedef value_type*       pointer;
        typedef const value_type* const_pointer;

        typedef value_type&       reference;
        typedef const value_type& const_reference;

        typedef pointer           iterator;
        typedef const_pointer     const_iterator;

    public:
        // -----------
        // operator ==
        // -----------

        /**
         * Checking whether two Array object is equal to each other
	 * using the std::equal 
	 * O(N)
         */
        friend bool operator == (const Array& lhs, const Array& rhs) {
            // you must use std::equal()
	    return std::equal(lhs, lhs + lhs.size(), rhs);
            }
        
        // ----------
        // operator <
        // ----------

        /**
         * Determine whether lhs is lexicographically less than the rhs object
	 * O(N)
         */
        friend bool operator < (const Array& lhs, const Array& rhs) {
            // <your code>
            // you must use std::lexicographical_compare()
	    return std::lexicographical_compare(
	    	lhs.begin(), lhs.end(), rhs.begin(), rhs.end()
		);
            }

        // ----------
        // operator <<
        // ----------
#if 0
	friend std::ostream operator << (std::ostream& os, const Array& rhs){
		for(unsigned int i=0; i<rhs.size(); ++i){
		   os << rhs[i] << " ";
			}
		os << std::endl;
		return os;
	}
#endif
    private:
        value_type a[N];

    public:
        // ------------
        // constructors
        // ------------

        /**
         * initialize the array of size N
	 * with N element
         */
        explicit Array (const_reference v = value_type()) {
            std::fill(a, a+N, v);
            }

        /**
         * Constructing the array by using some sequences from an 
	 * Input Iterator
         */
        template <typename II>
        Array (II b, II e) {
	    size_type i = 0;
            while(b!=e){
	        a[i] = *b;
		++b; ++i;
	    	}
            }

        // Default copy, destructor, and copy assignment.
        // Array (const Array&);
        // ~Array ();
        // Array& operator = (const Array&);

        // -----------
        // operator []
        // -----------

        /**
         * getting an element inside the array container
         */
        reference operator [] (size_type i) {
		reference result = a[i];
		return result;
            }

        /**
         * getting a constant reference of an element inside the array container
         */
        const_reference operator [] (size_type i) const {
            // you must call the non-const operator[]()
	     const_reference result = *this[i];
	     return result;
            }

        // --
        // at
        // --

        /**
         * <your documentation>
         */
        reference at (size_type i) {
            	if(i >= N || i < 0){
		    throw std::out_of_range("My::Array.at(i) >= size");
	    		}
		reference result =  a[i];
		return result;
            }
            

        /**
         * <your documentation>
         */
        const_reference at (size_type i) const {
            	if(i >= N || i < 0){
		    throw std::out_of_range("My::Array.at(i) >= size");
	    		}
		const_reference result =  *this.at(i);
		return result;
            // you must call the non-const at()
            }

        // -----
        // begin
        // -----

        /**
         * <your documentation>
         */
        iterator begin () {
            iterator i = a;
	    return i;
            }

        /**
         * <your documentation>
         */
        const_iterator begin () const {
            // you must call the non-const begin()
	    const_iterator i = *this.begin();
	    return i;
            }

        // ---
        // end
        // ---

        /**
         * <your documentation>
         */
        iterator end () {
            iterator i = a + N;
	    return i;
            }

        /**
         * <your documentation>
         */
        const_iterator end () const {
            // you must call the non-const end()
	    const_iterator i = *this.end();
	    return i;
            }

        // ----
        // size
        // ----

        /**
         * return the size of the stack allocated array
         */
        size_type size () const {
            return N;
            }
	
	// ----
	// print
	// ----
	void print () const{
	for(std::size_t i=0; i<N; ++i){
		std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}
};

}//My
#endif // Array_h
