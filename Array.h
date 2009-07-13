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
         * <your documentation>
         */
        friend bool operator == (const Array& lhs, const Array& rhs) {
            // <your code>
            // you must use std::equal()
            }
        
        // ----------
        // operator <
        // ----------

        /**
         * <your documentation>
         */
        friend bool operator < (const Array& lhs, const Array& rhs) {
            // <your code>
            // you must use std::lexicographical_compare()
            }

    private:
        value_type a[N];

    public:
        // ------------
        // constructors
        // ------------

        /**
         * <your documentation>
         */
        explicit Array (const_reference v = value_type()) {
            // <your code>
            }

        /**
         * <your documentation>
         */
        template <typename II>
        Array (II b, II e) {
            // <your code>
            }

        // Default copy, destructor, and copy assignment.
        // Array (const Array&);
        // ~Array ();
        // Array& operator = (const Array&);

        // -----------
        // operator []
        // -----------

        /**
         * <your documentation>
         */
        reference operator [] (size_type i) {
            // <your code>
            }

        /**
         * <your documentation>
         */
        const_reference operator [] (size_type i) const {
            // <your code>
            // you must call the non-const operator[]()
            }

        // --
        // at
        // --

        /**
         * <your documentation>
         */
        reference at (size_type i) {
            // <your code>
            }

        /**
         * <your documentation>
         */
        const_reference at (size_type i) const {
            // <your code>
            // you must call the non-const at()
            }

        // -----
        // begin
        // -----

        /**
         * <your documentation>
         */
        iterator begin () {
            // <your code>
            }

        /**
         * <your documentation>
         */
        const_iterator begin () const {
            // <your code>
            // you must call the non-const begin()
            }

        // ---
        // end
        // ---

        /**
         * <your documentation>
         */
        iterator end () {
            // <your code>
            }

        /**
         * <your documentation>
         */
        const_iterator end () const {
            // <your code>
            // you must call the non-const end()
            }

        // ----
        // size
        // ----

        /**
         * <your documentation>
         */
        size_type size () const {
            // <your code>
            }};

#endif // Array_h
