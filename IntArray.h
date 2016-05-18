class IntArray {
	public: // any class can control these data members
		//constructors
		explicit IntArray (int size = DefaultArraySize);
		IntArray(int *array, int array_size);
		IntArray(const IntArray &rhs);

		//virtual deconstructor
		virtual ~IntArray() { 
			delete [] ia;
		}

		//equality and inequality operations:
		bool operator== (const IntArray&) const;
		bool operator!= (const IntArray&) const;
		IntArray& operator= (const IntArray&);
		int size() const {
			return size;
		}

		//we've removed the check on the index...
		virtual int& operator[] (int index) {
			return ia[index];
		}

		//'virtual' means we use the integer functions 
		// rather than writing our own
		virtual void sort();
		virtual int min() const;
		virtual int max() const;
		virtual int find(int value) const;

	protected:
		//inheriting objects can control these data members
		// we leave these to inheriting members because it will
		// be different for IntSortedArray. IntArrayRC and IntArray
		static const int DefaultArraySize = 12;
		void init(int size, int *array);
		int size;
		int *ia;
};