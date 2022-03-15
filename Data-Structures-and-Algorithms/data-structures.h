#pragma once

template <class T>

class SimpleVector {
	int currentCapacity = 16;
	T* values = new T[currentCapacity];
	int currentSize = 0;

	public:
		SimpleVector(T startingValue)
		{
			values[0] = startingValue;
			currentSize += 1;
		}

		SimpleVector(T startingValues[], size_t n)
		{

			while (n >= currentCapacity)
			{
				resize(true);
			}

			for (size_t i = 0; i < n; i++)
			{
				values[i] = startingValues[i];
				++currentSize;
			}
		}

		int size()
		{
			return currentSize;
		}

		int capacity()
		{
			return currentCapacity;
		}

	private:
		void resize(bool increase)
		{
			size_t newCapacity = increase ? currentCapacity * 2 : currentCapacity / 2;
			T* newValues = new T[newCapacity];

			memcpy(newValues, values, currentSize * sizeof(T));

			currentCapacity = newCapacity;
			delete[] values;
			values = newValues;
		}
};