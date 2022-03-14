#pragma once

template <class T>
class SimpleVector {
	T values[1];

	public:
		SimpleVector(T startingValue)
		{
			values[0] = startingValue;
		}

		int size()
		{
			int i = 0;
			for (auto elem : values)
			{
				++i;
			}
			return i;
		}
};